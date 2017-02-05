#include<stdio.h>
int bin_search(int arr[],int lo,int hi,int key){
int flag = 0;
int md ;
    while(lo<=hi){
        md = (lo+hi)/2 ;
        if(arr[md]==key){flag = 1; return flag ; }
        else if(arr[md]<key){     lo = md + 1 ;     }
        else{    hi = md-1 ;       }
    }
    return flag ;
}
void merge_sort(int ar[],int l,int r){

if(l<r){
    int m = (l+r)/2 ;
    merge_sort(ar,l,m) ;
     merge_sort(ar,m+1,r) ;
     merge(ar,l,m,r) ;
}
}

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
int main(){

int i,j,k,n,a[200],b[200],ans,t,done,x,y,lo,hi,md,z=0;
ans = 0 ;
scanf("%d%d",&n,&x) ;

for(i=0;i<n;i++){
    scanf("%d",&a[i]) ;
}
merge_sort(a,0,n-1) ;

for(i=0;i<n;i++){

    if(a[i]>x){ break; }

    y = x-a[i] ;

    if(y<x){lo = 0 ; hi = i-1 ;  z =  bin_search(a,lo,hi,y) ;   if(z==1)break;  }
    else{   lo = i+1 ; hi = n-1 ;  z =  bin_search(a,lo,hi,y) ;   if(z==1)break; }

}

if(z==1){printf("Yes\n") ;}
else{  printf("No\n") ; }

return 0 ;

}
