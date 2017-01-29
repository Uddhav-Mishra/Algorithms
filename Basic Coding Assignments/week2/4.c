#include<stdio.h>



struct item
{
char itemName[20];
int itemCode;
float price;
int QtyInStock;
int IsHighDemand;
int SoldToday;
}item;

int main(){
struct item *ptr = calloc(1,sizeof(item));
ptr->itemCode = 12 ;
ptr->price = 324 ;
printf("%d",ptr->itemCode) ;
return 0 ;
}
