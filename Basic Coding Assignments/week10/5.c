#include<stdio.h>
#include<string.h>
int  vis[100][100]  ;
char s[100][100] ;
int dx[] = {0,0,-1,1} ;
int dy[] = {1,-1,0,0} ;
int n,m ;

void dfs(int x,int y){
vis[x][y] = 1 ; int i ;
for(i=0;i<4;i++){
    if(valid((x+dx[i]),(y+dy[i]))==1){
       if(vis[x+dx[i]][y+dy[i]]==0&&s[x+dx[i]][y+dy[i]]=='L'){ dfs((x+dx[i]),(y+dy[i])) ;}
    }
}
}
int valid(int x,int y){
if(x>=0&&y>=0&&x<n&&y<m){return 1 ;}
return 0 ;
}


int main(){
int i,p,k,j ,x,y,ans;

scanf("%d%d",&n,&m) ;

for(i=0;i<n;i++){scanf("%s",s[i]) ; }

for(i=0;i<n;i++){for(j=0;j<m;j++){vis[i][j]=0;}}

ans = 0 ;
for(i=0;i<n;i++){for(j=0;j<m;j++){
    if(vis[i][j]==0&&s[i][j]=='L'){ans++ ; dfs(i,j) ;}
}
}
printf("%d",ans) ;

}
