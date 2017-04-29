#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define ff first
#define ss second
#define pb push_back

using namespace std ;
ll n,m,i,j,k,ans,x ;
ll a[3000],b[3000],c[3000] ;
vector<ll> v;
int main(){
cin >> n ;
for(i=0;i<n;i++){cin >> a[i] ;}
cin >> m ;
for(i=0;i<m;i++){cin >> b[i] ;c[i]=0;}

for(i=0;i<n;i++){
       x=0;
    for(j=0;j<m;j++){
        if(a[i]==b[j]){
            if(x+1>c[j]){c[j]=x+1;}
        }
        if(a[i]>b[j]){
            if(c[j]>x){x=c[j];}
        }
    }
}

for(i=0;i<m;i++){
    ans=max(ans,c[i]) ;
}
cout << ans << endl ;x=1000000000000;
for(i=m-1;i>=0;i--){
    if(c[i]==ans&&ans>0&&b[i]<x){
       v.pb(b[i]) ; ans-- ;x=b[i] ;
    }
}

for(i=v.size()-1;i>=0;i--){
    cout << v[i] << " " ;
}

}
