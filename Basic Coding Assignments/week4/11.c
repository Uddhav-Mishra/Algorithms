#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

void merge(int arr[],int l,int m,int r){
int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];

for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];


    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }

}

void merge_sort(int ar[],int l,int r){

if(l<r){
    int m = (l+r)/2 ;
    merge_sort(ar,l,m) ;
     merge_sort(ar,m+1,r) ;
     merge(ar,l,m,r) ;
}
}


int main(){
int i,n,j,k,ans,cnt,a[2000],lo,hi,md,y ;
clock_t start_t, end_t, total_t ;
start_t  = clock() ;
scanf("%d",&n) ;

for(i=0;i<n;i++){a[i] = rand()%100000000 +1 ;}

merge_sort(a,0,n-1) ;

for(i=0;i<n;i++){printf("%d ",a[i]) ;}
printf("\n") ;
end_t  = clock() ;
total_t = (double)(end_t-start_t) ;
printf("%d",total_t) ;
}
