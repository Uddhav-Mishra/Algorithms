#include<stdio.h>
typedef struct book{

char bname[20] ;
char bauthor[20] ;
int edition ;
int isbn ;
int price ;
char publication[20] ;

}book;

void merge_sort(book ar[],int l,int r){

if(l<r){
    int m = (l+r)/2 ;
    merge_sort(ar,l,m) ;
     merge_sort(ar,m+1,r) ;
     merge(ar,l,m,r) ;
}
}

void merge(book ar[],int l,int m,int r){
int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];

for (i = 0; i < n1; i++)
        L[i] = ar[l + i].price;
    for (j = 0; j < n2; j++)
        R[j] = ar[m + 1+ j].price;


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            ar[k].price = L[i];
            i++;
        }
        else
        {
            ar[k].price = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        ar[k].price = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        ar[k].price = R[j];
        j++;
        k++;
    }

}



int main(){

int i,j,k,n,ans,t,done,x,y,lo,hi,md,flag=0;
scanf("%d",&n) ;
book *a = (book *)malloc((sizeof(book))*n) ;

for(i=0;i<n;i++){scanf("%d",&a[i].price) ;}
merge_sort(a,0,n-1) ;

for(i=0;i<n;i++){printf("%d ",a[i].price) ;}

return 0 ;

}
