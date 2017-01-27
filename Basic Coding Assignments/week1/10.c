#include<stdio.h>

int main(){

int i,j,a[100001],carry,val,x,y,tot,n ;
a[1]= 1 ;
for(i=2;i<=10000;i++)a[i]=0;
x = 1 ;
scanf("%d",&n) ;

for(i=2;i<=n;i++){
    carry = 0 ; j = 0 ;
    for(j=1;j<=x;j++){
         tot = a[j]*i + carry ;
a[j] = tot%10 ;
carry = tot/10 ;
    }
    while(carry){
             x++;
        a[x] = carry%10 ;
        carry/=10 ;

    }
}
for(i=x;i>=1;i--){printf("%d",a[i]) ;}

return 0 ;

}
