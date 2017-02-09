#include<stdio.h>
#include<string.h>
#include<time.h>
char s[30][30] ; int n ;

int binary_search(char **x){
    int lo = 0 ;  int hi  = n-1; int md ;
    while(lo<=hi){
        md = (lo+hi)/2 ;
        if(strcmp(s[md],x)==0){ return 1 ;}
        else if(strcmp(s[md],x)<0){  hi = md-1 ;}
        else{lo = md + 1 ;}
    }
    return -1 ;
}

void swaps(char **a,char **b){
   char *temp  = *a ;
   *a = *b ;
   *b = temp ;
}
void sw(char **a,char **b){
 *a = *b ;
}

void merge_sort(int l,int r){
if(l<r){
    int m = (l+r)/2 ;
    merge_sort(l,m) ;
     merge_sort(m+1,r) ;
     merge(l,m,r) ;
    }
}

void merge(int l,int m,int r){
int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    char L[n1][30], R[n2][30];

for (i = 0; i < n1; i++)
        sw(L[i],s[l + i]);
    for (j = 0; j < n2; j++)
        R[j] = s[m + 1+ j];


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


int i,j,k;

scanf("%d",&n) ;

for(i=0;i<n;i++){scanf("%s",s[i]) ;}


int done = 1 ;

do{  done = 1 ;
    for(i=0;i<(n-1);i++){
        if(strcmp(s[i],s[i+1])>0){
            swaps(s[i],s[i+1]) ; done = 0  ;
        }
    }
}while(done==0) ;

for(i=0;i<n;i++){printf("%s ",s[i]) ;}

char q[30],w[30] ;

scanf("%s",q) ;
int m = strlen(q)-1 ;

while(m>=0){
        if(binary_search(q)==1){
            printf("%s",q) ;
        }
    q[m] = '\0' ;m-- ;
}

return 0 ;
}
