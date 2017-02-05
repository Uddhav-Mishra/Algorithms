#include<stdio.h>
typedef struct book{

char bname[20] ;
char bauthor[20] ;
int edition ;
int isbn ;
int price ;
char publication[20] ;

}book;

void insertion_sort(book arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i].price;
       j = i-1;
   /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j].price > key)
       {
           arr[j+1].price = arr[j].price;
           j = j-1;
       }
       arr[j+1].price = key;
   }
}
int main(){

int i,j,k,n,ans,t,done,x,y,lo,hi,md,flag=0;
scanf("%d",&n) ;
book *a = (book *)malloc((sizeof(book))*n) ;

for(i=0;i<n;i++){scanf("%d",&a[i].price) ;}
insertion_sort(a,n) ;

for(i=0;i<n;i++){printf("%d ",a[i].price) ;}

return 0 ;

}
