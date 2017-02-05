#include<stdio.h>

int main(){


int n,i,j,k,k1,k2,flag,t ;

scanf("%d",&t) ;
while(t--){
k1 = 0 ; k2 =  0 ;
char s[20],a[20] ;
scanf("%s",s) ;

n = strlen(s) ;
flag = 1 ;

for(i=0;i<n-1;i++){
    if(s[i]<s[i+1]){
        k1 = i ; flag = 0 ;
    }
}



for(i=k1;i<n;i++){
    if(s[i]>s[k1]){
        k2 = i ;
    }
}
for(i=0;i<k1;i++){a[i]=s[i];}

a[k1]=s[k2] ; j = k1+1; s[k2] = s[k1] ;
for(i=n-1;i>k1;i--){
   a[j] = s[i] ; j++ ;
}
a[n]='\0' ;
if(flag){printf("game terminated!\n") ; }
else{printf("%s\n",a) ;}

}

return 0 ;

}

/*Find the highest index i such that s[i] < s[i+1]. If no such index exists, the permutation is the last permutation.
Find the highest index j > i such that s[j] > s[i]. Such a j must exist, since i+1 is such an index.
Swap s[i] with s[j].
Reverse the order of all of the elements after index i till the last element.*/
