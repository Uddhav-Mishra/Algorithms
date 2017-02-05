#include<stdio.h>
typedef struct book{

char bname[20] ;
char bauthor[20] ;
int edition ;
int isbn ;
int price ;
char publication[20] ;

}book;

void swap ( book *a, book  *b )
{
    book t = *a;
    *a = *b;
    *b = t;
}

int partition (book arr[], int l, int h)
{         int j ;
    int x = arr[h].price;
    int i = (l - 1);

    for ( j = l; j <= h- 1; j++)
    {
        if (arr[j].price <= x)
        {
            i++;
            swap (&arr[i], &arr[j]);
        }
    }
    swap (&arr[i + 1], &arr[h]);
    return (i + 1);
}

void quick_sort(book arr[], int l, int h)
{
    int stack[ h - l + 1 ];
 int top = -1;
 stack[ ++top ] = l;
    stack[ ++top ] = h;

    while ( top >= 0 )
    { h = stack[ top-- ];
        l = stack[ top-- ];

        int p = partition( arr, l, h );

        if ( p-1 > l )
        {
            stack[ ++top ] = l;
            stack[ ++top ] = p - 1;
        }
        if ( p+1 < h )
        {
            stack[ ++top ] = p + 1;
            stack[ ++top ] = h;
        }
    }
}


int main(){

int i,j,k,n,ans,t,done,x,y,lo,hi,md,flag=0;
scanf("%d",&n) ;
book *a = (book *)malloc((sizeof(book))*n) ;

for(i=0;i<n;i++){scanf("%d",&a[i].price) ;}
quick_sort(a,0,n-1) ;

for(i=0;i<n;i++){printf("%d ",a[i].price) ;}

return 0 ;

}
