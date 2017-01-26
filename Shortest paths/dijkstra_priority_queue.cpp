// dijkstra priority_queue
#include<bits/stdc++.h>
#define ll long long int
#define ite iterator
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ioS ios::sync_with_stdio(false);
#define pii pair<ll,ll>
using namespace std ;

ll n,i,j,k,flag,y ,w,h,r, x,ans,ans1,ans2,z,t,m,k1,k2 ;

struct comp { // comparator function
    bool operator() (const pii &a, const pii &b) {
        return a.second > b.second;
    }
};

ll done[200800],dist[200000]  ;
vector<pii> v[200003],u[300004]    ;
 ll inf = 100000000000 ;


int main(){

 priority_queue<ll,vector<pii >,comp > q ;

cin >> n >> m ;
// no. of nodes and edges in graph
ll wt ;
while(m--){
    cin >> x >> y >> wt ;
    v[x].pb(mp(y,wt)) ;v[y].pb(mp(x,wt)) ;
}
ll src;
cin >> src ;

// initialize distances
for(i=1;i<=n;i++){dist[i]=inf ;done[i]=0;}
dist[src]=0;

// dijkstra
q.push(mp(src,dist[src])) ;

while(!q.empty()){

    x = q.top().ff ;
    y = q.top().ss ; q.pop();
//cout << x << " " << y << endl ;
    if(done[x]==1){continue ;}
    for(i=0;i<v[x].size();i++){
            t=v[x][i].ff ;z=v[x][i].ss;
        if(!done[t]&&(z+y)<dist[t]){
            dist[t] = z+y ;
            q.push(mp(t,dist[t])) ;
        }
    }
    done[x]=1;
}

 for(i=1;i<=n;i++){
    cout << dist[i] << " " ;
 }

}
