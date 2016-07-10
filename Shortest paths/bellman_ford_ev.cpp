//BELLMAN_FORD E*V
#include<bits/stdc++.h>
#define ll long long int
#define ite iterator
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ioS ios::sync_with_stdio(false);

using namespace std ;
ll n,i,j,k,flag,y,x;

ll inf=1000000 ; //10^18 ;

ll dist[200000],done[2000000]  ;

map<ll,ll>m ;
vector<pair<pair<ll,ll>,ll> >v   ;

ll wt,src,k1,k2,e ;
ll neg_cycle=0;

void bellman_ford(){

 for(i=1;i<=n;i++){dist[i]=inf ;}

dist[src]=0;

for(i=1;i<=n-1;i++){
    for(j=0;j<e;j++){
        ll u1 = v[j].ff.ff;
        ll u2 = v[j].ff.ss;
        ll weight = v[j].ss;

       if(dist[u1]!=inf&&(dist[u1]+weight)<dist[u2]){
            dist[u2]=dist[u1]+weight;
        }
    }
}

for(i=0;i<e;i++){
     ll u1 = v[i].ff.ff;
        ll u2 = v[i].ff.ss;
        ll weight = v[i].ss;

    if(dist[u1]!=inf&&dist[u1]+weight<dist[u2]){
           neg_cycle=1 ;
        }
}

}

int main(){

 // vertices 1 to n
 cin >> n >> e; k=e;

 while(k--){
    cin >> x >> y >> wt ;
   v.pb(mp(mp(x,y),wt)) ;
 }


 cin >> src ; // source vertex ;

  bellman_ford() ;

if(neg_cycle){cout << "negative cycle\n";}

for(i=1;i<=n;i++){
    cout << dist[i] << " " ;
}

}
