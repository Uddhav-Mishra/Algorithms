#include<stdio.h>
#include<string.h>

int main(){

char s[100] ;
int a[300];
int i,j,k,n,i1,j1,ans = 0 ;
for(i=0;i<=300;i++){a[i]=0;}
scanf("%s",s) ;
i = 0;  j = 0 ;
i1=0;j1=0; ans = 0 ;
n = strlen(s) ;

while(i<(n-1)&&j<(n-1)){
    if(a[s[i]]==0){a[s[i]]=1;   }
    else{ printf("in else\n");
        while(s[j]!=s[i]&&j<i){
            a[s[j]]-- ; j++ ;
        }
        a[s[j]]=1; j++ ;
    }

    printf("j is %d i is %d\n",j,i) ;
    k = i-j+1 ;
    if(k>ans){ans = k ; i1=i;j1=j ;}
      i++ ;
}

for(i=j1;i<=i1;i++){
    printf("%c",s[i]) ;
}

return 0 ;

}
