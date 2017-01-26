
void insertion_sort(book arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i].price;
       j = i-1;
   /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && arr[j].price > key)
       {
           arr[j+1].price = arr[j].price   ;
           j = j-1;
       }
       arr[j+1].price = key;
   }

}
