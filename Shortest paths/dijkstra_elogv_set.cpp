// DIJKSTRA elogv USING SET C++
#include<bits/stdc++.h>
#define ll long long int
#define ite iterator
#define mp make_pair
#define ff first
#define ss second
#define pb push_back
#define ioS ios::sync_with_stdio(false);

using namespace std ;

ll n,i,j,k,flag,y ,w,h,r, x,ans,ans1,ans2,q,z ;
ll inf=1000000 ; //10^18 ;
ll a[200000],b[200000],dist[200000],done[2000000]  ;
map<ll,ll>m ;
vector<pair<ll,ll> >v[200000]  ;
ll vert,wt,src,k1,k2 ;

void dijkstra(){

 for(i=1;i<=n;i++){dist[i]=inf ;   done[i]=0;  }
// done is special set
dist[src]=0;

 k = 0 ; //visited vertices
set<pair<ll,ll> > s ;
set<pair<ll,ll> >::iterator it;
s.insert(mp(0ll,src));

while(!s.empty()){
    k2 = (*s.begin()).ss; s.erase(s.begin());
for(i=0;i<v[k2].size();i++){
        if(dist[v[k2][i].ff]>(dist[k2]+v[k2][i].ss)){
            it=s.find(mp(dist[v[k2][i].ff],v[k2][i].ff));
            if(it!=s.end()){
                s.erase(it) ;
            }
    s.insert(mp(dist[k2]+v[k2][i].ss,v[k2][i].ff)) ;
        }
         dist[v[k2][i].ff]=min(dist[v[k2][i].ff],(dist[k2]+v[k2][i].ss));
   }
}

}

int main(){
 // vertices 1 to n


 cin >> n >> vert ;
// number of vertices and edges
 while(vert--){
    cin >> x >> y >> wt ;
    v[x].pb(mp(y,wt)) ; v[y].pb(mp(x,wt)) ;
 }

 cin >> src ; // source vertex ;

 dijkstra() ;

for(i=1;i<=n;i++){
    cout << dist[i] << " " ;
}

}
