    struct segtree {
      long long int val;
      segtree() {
        val = 0;
      }
    };
  
    segtree merge(segtree a, segtree b) {
      segtree combine;
      combine.val = max(a.val, b.val);
      return combine;
    }
  
    void build(int node, int l, int r, vector<segtree>& tree, vector<int>& a) {
      if (l > r) {
        return;
      } else if (l == r) {
        tree[node].val = a[l];
        return;
      }
      int mid = (l+r)/2;
      build(2*node, l , mid, tree, a);  // [l, mid]
      build(2*node + 1, 1+mid , r, tree, a); // [mid+1, r]
      tree[node] = merge(tree[2*node], tree[2*node+1]);
    }

    segtree query(int node, int l, int r, int q_l, int q_r, vector<segtree>& tree) {
      if (q_r < l || r < q_l || l > r) {
        segtree ret;
        return ret;
      } else if (l >= q_l && r <= q_r) {
        return tree[node];
      }
      int mid = (l+r)/2;
      return merge(query(2*node, l, mid, q_l, q_r, tree),
                   query(2*node+1, mid+1, r, q_l, q_r, tree));
    }
  
    void update_tree(int node, int l, int r, int index, long long val, vector<segtree>& tree) {
      if (index < l || index > r || l > r) {
        return;
      } else if (l == r) {
        tree[node].val = val;
        return;
      }
      int mid = (l+r)/2;
      update_tree(2*node, l , mid, index, val, tree);        // [l, mid]
      update_tree(2*node + 1, 1+mid , r, index, val, tree); // [mid+1, r]
      tree[node] = merge(tree[2*node], tree[2*node+1]);
    }
