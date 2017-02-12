#include<stdio.h>
int merge(int arr[],int l,int m,int r){
int ans1= 0;
int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];

for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];


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
            ans1 += (n1-i )  ;
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
return ans1 ;
}
int merge_sort(int ar[],int l,int r){
int ans = 0 ;
if(l<r){
    int m = (l+r)/2 ;
    ans = merge_sort(ar,l,m) ;
     ans += merge_sort(ar,m+1,r) ;
      ans += merge(ar,l,m,r) ;
}
return ans ;
}



int main(){

int n,i,j,k,t,val,cnt,a[200007] ;

scanf("%d",&n) ;

for(i=0;i<n;i++){scanf("%d",&a[i]); }

 int ans2 = merge_sort(a,0,(n-1)) ;
printf("%d\n",ans2) ;

return 0 ;
}
