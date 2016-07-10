// floyd warshall N*N*N
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

ll done[2000000]  ;

map<ll,ll>m ;
vector<pair<ll,ll> >v[2000]   ;

ll wt,src,e ;
ll neg_cycle=0;
ll dist[2000][2000] ;

 void floyd_warshall(){
  for(i=1;i<=n;i++){dist[i][i]=0;}

  for(k=1;k<=n;k++){
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
        }
    }
  }

 }
int main(){

 // vertices 1 to n
 cin >> n >> e; k=e;

 for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        dist[i][j]=inf;
    }
 }
 while(k--){
    cin >> x >> y >> wt ; dist[x][y]=wt;
   v[x].pb(mp(y,wt)) ;
 }
floyd_warshall();
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        cout << dist[i][j] << " " ;
    }
    cout << endl ;
 }



}
