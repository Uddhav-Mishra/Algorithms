#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
using namespace std ;
ll a[200000];

struct segtree {
  ll val;
  segtree() {
    val = 0;
  }
};
segtree tree[2 * 200000];

void assign(int node, ll val) {
  tree[node].val = val;
}

segtree merge(segtree a, segtree b) {
  segtree combine;
  combine.val = a.val + b.val;
  return combine;
}

void build(int node, int l, int r) {
  if (l > r) {
    return;
  } else if (l == r) {
    assign(node, a[l]);
    return;
  }
  int mid = (l+r)/2;
  build(2*node, l , mid);        // [l, mid]
  build(2*node + 1, 1+mid , r); // [mid+1, r]
  tree[node] = merge(tree[2*node], tree[2*node+1]);
}

segtree query(int node, int l, int r, int q_l, int q_r) {
  if (q_r < l || r < q_l || l > r) {
    segtree ret;
    return ret;
  } else if (l >= q_l && r <= q_r) {
    return tree[node];
  }
  int mid = (l+r)/2;
  return merge(query(2*node, l, mid, q_l, q_r), query(2*node+1, mid+1, r, q_l, q_r));
}

void update_tree(int node, int l, int r, int index, int val) {
  if (index < l || index > r || l > r) {
    return;
  } else if (l == r) {
    assign(node, val);
    return;
  }
  int mid = (l+r)/2;
  update_tree(2*node, l , mid, index, val);        // [l, mid]
  update_tree(2*node + 1, 1+mid , r, index, val); // [mid+1, r]
  tree[node] = merge(tree[2*node], tree[2*node+1]);
}

ll GetBruteSum(int l, int r) {
  ll ans = 0;
  for (int i = l; i <= r; ++i) {
    ans += a[i];
  }
  return ans;
}

void RandomizeCheck(int n, int test_cnt) {
  srand(time(0));
  for (int i = 0; i < n; ++i) {
    a[i] = (rand() % 100000);
  }
  build(1, 0, n-1);
  
  int failed_cnt = 0;
  for (int z =1; z <= test_cnt; z++) {
    int l = rand()%n, r = rand()%n;
    if (l > r) {
      swap(l, r);
    }
    /*
    cout << "l ,r value = " << l << " " << r << endl;
    cout << "query value = " << query(1, 0, n-1, l, r).val << endl;
    cout << "brute value = " << GetBruteSum(l,r) << endl << endl;
    */
    if (query(1, 0, n-1, l, r).val != GetBruteSum(l,r)) {
      failed_cnt++;
    }
  }
  cout << "***Only Query Check***" << endl
       << "Ran test for n = " << n << " Total = " << test_cnt << endl
       << "Passed  = " << test_cnt - failed_cnt << endl
       << "Failed = " << failed_cnt << endl << endl;
}

void RandomizeCheckWithUpdates(int n, int test_cnt) {
  srand(time(0));
  for (int i = 0; i < n; ++i) {
    a[i] = (rand() % 100000);
  }
  build(1, 0, n-1);
  
  int failed_cnt = 0;
  for (int z = 1; z <= test_cnt; z++) {
    int decide_query = rand() % 2;
    int l = rand()%n, r = rand()%n;
    if (l > r) {
      swap(l, r);
    }
    
    if (decide_query) {
      if (query(1, 0, n-1, l, r).val != GetBruteSum(l,r)) {
        failed_cnt++;
      }
    } else {
      a[l] = r;
      update_tree(1, 0, n-1, l /* index */, r /* value */);
    }
  }
  cout << "***Update/Query Check***" << endl
       << "Ran test for n = " << n << " Total = " << test_cnt << endl
       << "Passed  = " << test_cnt - failed_cnt << endl
       << "Failed = " << failed_cnt << endl << endl;
}

int main(){
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) { 
    cin >> a[i];
  }
  build(1, 0 , n-1);
  //cout << query(1, 0, n-1, 0, 2);
  
  RandomizeCheck(100000 /* elements */, 10000 /* tests */);
  RandomizeCheck(100 /* elements */, 100000 /* tests */);
  
  RandomizeCheckWithUpdates(100000 /* elements */, 10000 /* tests */);
  RandomizeCheckWithUpdates(100 /* elements */, 100000 /* tests */);
}


/*
https://codeforces.com/contest/339/submission/91930411
https://codeforces.com/contest/61/submission/92446029
https://codeforces.com/contest/380/submission/93503701
https://codeforces.com/contest/474/submission/93588611
*/
