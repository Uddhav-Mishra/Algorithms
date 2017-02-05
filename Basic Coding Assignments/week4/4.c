#include<stdio.h>


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

scanf("%d",&n) ;

for(i=0;i<n;i++){scanf("%d",&a[i]);}

   a[n]=1000000;
merge_sort(a,0,n) ;
i = 0 ;
 ans = 0 ; cnt  = 0 ;
while(i<n){

    lo = i ; hi = n ;

    while(lo<hi){
        md = (lo+hi)/2 ;
        if(a[md]>a[i]){hi = md ;}
        else{lo = md+1 ;}
    }
    y = lo-i ;
    if(y>cnt){cnt =  y ; ans = a[i] ;}

    //printf("y is %d asn is %d cnt is %d\n",y,ans,cnt) ;

    i = lo ;
}
printf("%d",ans) ;

}
