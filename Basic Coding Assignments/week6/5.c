#include<stdio.h>

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

int first(int arr[], int low, int high, int x)
{
    if (high >= low)
    {
        int mid = low + (high-low)/2;  /* (low + high)/2; */
        if ((mid == 0 || x > arr[mid-1]) && arr[mid] == x)
            return mid;
        if (x > arr[mid])
            return first(arr, (mid + 1), high, x);
        return first(arr, low, (mid -1), x);
    }
    return -1;
}

int main(){

int n,i,j,k,m,a[2000],b[2000],temp[2000],visited[2000];

scanf("%d%d",&m,&n) ;

for(i=0;i<m;i++){scanf("%d",&a[i]); temp[i] = a[i] ;visited[i] = 0;}
for(i=0;i<n;i++){scanf("%d",&b[i]);}



 merge_sort(temp,0,(m-1)) ;
    // Sort elements in temp


    int ind = 0;  // for index of output which is sorted A1[]

    // Consider all elements of A2[], find them in temp[]
    // and copy to A1[] in order.
    for ( i=0; i<n; i++)
    {
        // Find index of the first occurrence of A2[i] in temp
        int f = first(temp, 0, m-1, b[i]);

        // If not present, no need to proceed
        if (f == -1) continue;

        // Copy all occurrences of A2[i] to A1[]
        for ( j = f; (j<m && temp[j]==b[i]); j++)
        {
            a[ind++] = temp[j];
            visited[j] = 1;
        }
    }

    // Now copy all items of temp[] which are not present in A2[]
    for (i=0; i<m; i++)
        if (visited[i] == 0)
            a[ind++] = temp[i];
for(i=0;i<m;i++){printf("%d ",a[i]);}
}
