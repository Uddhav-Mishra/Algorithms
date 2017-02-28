#include<stdio.h>
typedef struct list{
int item ;
struct list *prev ;
struct list *next ;
}list;

void InsertAtBeg(list **l,int x){
    list *k = NULL ;
list *p = malloc(sizeof(list)) ; p->item = x ;
if(*l!=NULL){
p->next = *l ;
k = *l ; p->prev = k->prev ; k->prev = p ;
k = p->prev ; k->next = p ;
*l = p ;}
else{
    *l = p ; p->next = p ; p->prev = p ;
}
}

void PrintList(list **l){
list *k = *l ;
if(k!=NULL){
    printf("%d " ,k->item) ;
    k = k->next ;
    while(k!=*l&&k!=NULL){
        printf("%d ",k->item) ; k = k->next ;
    }
    printf("\n") ;
}
}
void InsertAtEnd(list **l,int x){
        list *k = NULL ;
list *p = malloc(sizeof(list)) ; p->item = x ;
if(*l==NULL){
    p->next = p ; p->prev = p ; *l = p ;
}
else{
    k = *l ; k = k->prev ; k->next = p ; p->prev = k ;
    k = *l ; k->prev = p ; p->next = k;
}
}

void Insert(list **l,int x,int index){
    int y = 0 ;
    list *k = *l ;
if(*l!=NULL){
   while(y!=index&&k->next!=*l){
        k = k->next ; y++ ;
    }
    if(y==index){
list *p= malloc(sizeof(list)) ;
p->item = x ;
p->prev = k ; p->next = k->next ; k->next = p ;
k = p->next ; k->prev = p ;}
}

}

int main(){
list *head = NULL ;
InsertAtEnd(&head,1) ; PrintList(&head) ;
InsertAtEnd(&head,2) ; PrintList(&head) ;
InsertAtEnd(&head,3) ; PrintList(&head) ;
Insert(&head,4,3) ; PrintList(&head) ;
}
