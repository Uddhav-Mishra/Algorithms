#include<stdio.h>
#include<time.h>
int a[10000002],b[1000002],c[1000002],d[1000][100000],e[1002] ;

void count_sort(int n){
int i ;
for(i=0;i<n;i++){   a[b[i]]++ ;  }

for(i=0;i<10000002;i++){    a[i] += a[i-1] ;}

for(i=n-1;i>=0;i--){
   if(a[b[i]]>0){ c[a[b[i]]] = b[i] ; a[b[i]]-- ;}
}

}
void insertion_sort( int arr[],int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i] ;
       j = i-1;

       while (j >= 0 && arr[j]  > key)
       {
           arr[j+1]  = arr[j]    ;
           j = j-1;
       }
       arr[j+1]  = key;
   }

}



void bucket_sort(int n){




}
int main(){

int n,i,j,k,val,cnt ;

scanf("%d",&n) ;
for(i=0;i<n;i++){b[i] = rand()%10000000 ; }

count_sort(n) ;
for(i=1;i<=n;i++){
    printf("%d ",c[i]) ;
}
}


/*// C++ implementation of Radix Sort
#include<iostream>
using namespace std;

// A utility function to get maximum value in arr[]
int getMax(int arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

// A function to do counting sort of arr[] according to
// the digit represented by exp.
void countSort(int arr[], int n, int exp)
{
    int output[n]; // output array
    int i, count[10] = {0};

    // Store count of occurrences in count[]
    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;

    // Change count[i] so that count[i] now contains actual
    //  position of this digit in output[]
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }

    // Copy the output array to arr[], so that arr[] now
    // contains sorted numbers according to current digit
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// The main function to that sorts arr[] of size n using
// Radix Sort
void radixsort(int arr[], int n)
{
    // Find the maximum number to know number of digits
    int m = getMax(arr, n);

    // Do counting sort for every digit. Note that instead
    // of passing digit number, exp is passed. exp is 10^i
    // where i is current digit number
    for (int exp = 1; m/exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

// A utility function to print an array
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// Driver program to test above functions
int main()
{
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr)/sizeof(arr[0]);
    radixsort(arr, n);
    print(arr, n);
    return 0;
}
*/
