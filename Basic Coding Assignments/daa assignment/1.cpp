#include<bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define ff first
#define ss second
#define pb push_back

using namespace std ;
ll n,m,i,j,k,ans,x,y,z ;
ll dp[1000][1000],a[1000][1000],b[1000][1000],c[1000][1000] ;
vector<ll> v;
ll inf = 2334233442423;
map<ll,ll>m1,m2,m3 ;
int main(){

 cin >> n ;
 for(i=0;i<2;i++){
    for(j=0;j<n;j++){
        cin >> a[i][j];
    }
 }

 for(i=0;i<3;i++){
    b[2][0]=a[1][0]+a[0][0] ;
    b[1][0]=a[1][0] ;
    b[0][0]=a[0][0] ;
    for(j=1;j<n;j++){
        if(i==0||i==1){ b[i][j] = b[i][j-1]+a[i][j] ; }
        else{b[i][j]=b[i][j-1]+a[i-1][j]+a[i-2][j];}
    }
 }
for(i=0;i<3;i++){for(j=0;j<n;j++){ c[i][j]= -1*inf ;} }
m1[0]=-1;m2[0]=-1;m3[0]=-1;
for(j=0;j<n;j++){
        if(m1[b[0][j]]!=0){c[0][j]=max(0ll,m1[b[0][j]]);}
        if(m2[b[1][j]]!=0){c[1][j]=max(0ll,m2[b[1][j]]);}
        if(m3[b[2][j]]!=0){c[2][j]=max(0ll,m3[b[2][j]]);}
       m1[b[0][j]]=j+1 ;
       m2[b[1][j]]=j+1;
       m3[b[2][j]]=j+1;
}

for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
            if(i==1&&j==1&&(a[0][0]==0||a[1][0]==0)){
                   if(a[0][0]==0&&a[1][0]==0) dp[1][1]=2;
                   else dp[1][1]=1;
            }

        if(i>1){
            if(a[0][i-1]==0){x=1;}
            else{x=0;}
            dp[i][j]=max(dp[i][j],(dp[i-1][j]+x))  ;}
        if(j>1){
            if(a[1][j-1]==0){x=1;}
            else{x=0;}
                dp[i][j]=max(dp[i][j],(dp[i][j-1]+x)) ;}
    if(i>=1&&j>=1&&a[0][i-1]==0&&a[1][j-1]==0){
        dp[i][j]=max(dp[i][j],dp[i-1][j-1]+2) ;
    }
        x = c[0][i-1]  ; y= c[1][j-1]   ; z= c[2][i-1]   ;
        if(x>=0){dp[i][j]=max(dp[i][j],(1+dp[x][j]));}
        if(y>=0){dp[i][j]=max(dp[i][j],(1+dp[i][y]));}
        if(i==j&&z>=0){dp[i][j]=max(dp[i][j],(1+dp[z][z]));}
    }
}

 cout << dp[n][n] ;

}
