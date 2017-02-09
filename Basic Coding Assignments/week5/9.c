#include<stdio.h>
#include<string.h>


int main(){

int i,j,k,a[300],b[200],c[200],n,m,t,x,mx,cnt,ans = 0  ;

scanf("%d",&n) ;

for(i=0;i<n;i++){
    scanf("%d",&a[i]) ;
}

   int max_count = 0;  // for maximum number of 1 around a zero
    int max_index;  // for storing result
    int prev_zero = -1;  // index of previous zero
    int prev_prev_zero = -1; // index of previous to previous zero
int curr ;
// Traverse the input array
for (curr=0; curr<n; ++curr)
    {// If current element is 0, then calculate the difference
        // between curr and prev_prev_zero
if (a[curr] == 0)
    {   // Update result if count of 1s around prev_zero is more
            if (curr - prev_prev_zero > max_count)
            {max_count = curr - prev_prev_zero;
                max_index = prev_zero;
            }
  // Update for next iteration
            prev_prev_zero = prev_zero;
            prev_zero = curr;}  }
  // Check for the last encountered zero
    if (n-prev_prev_zero > max_count){
       max_index = prev_zero;}

 printf("%d",max_index) ;

}
