#include<stdio.h>

int main(){

int i,j,a[11],carry,val,x,y,tot,n ;

a[10] = 1 ;
for(i=0;i<10;i++)a[i]=0;

scanf("%d",&n) ;


for(i=1;i<=n;i++){

j = 10 ; carry = 0 ;

while(j>=1){
 tot = a[j]*2 + carry ;
a[j] = tot%10 ;
carry = (tot - a[j])/10 ;
j--;
}

}

for(i=0;i<=9;i++){
if(a[i]==0&&a[i+1]!=0){j = i+1 ;break;} }

for(i=j;i<=10;i++)printf("%d",a[i]) ;

return 0 ;

}
