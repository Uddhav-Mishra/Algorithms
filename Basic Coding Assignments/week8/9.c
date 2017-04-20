#include<stdio.h>

int main(){

char s[300],t[300] ;
long long i,j,n,k,l,p,flag,ans=0,ans1=0,ans2 =0;
scanf("%s",s) ;
scanf("%s",t) ;

n = strlen(s) ;
for(i=0;i<n;i++){
    ans1 += s[i] ; ans+=t[i] ;
}
i--;
j = 0 ;
while(i<strlen(t)){
    if(ans==ans1){
            flag=1 ;k=0;
      for(p=j;p<=i;p++){
        if(t[p]!=s[k]){flag=0; break;}
        k++;
      }
      if(flag){ans2++ ;}
    }
    i++ ;
   ans += (t[i]-t[j]); j++ ;
}

printf("%d",ans2);

}
