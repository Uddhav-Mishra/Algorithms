// worst case O(n*n)
void swap ( book* a, book* b )
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

