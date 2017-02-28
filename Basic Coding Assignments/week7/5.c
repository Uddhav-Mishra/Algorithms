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
k = *l ; p->prev = NULL ; k->prev = p ;

*l = p ;}
else{
    *l = p ; p->next = NULL ; p->prev = NULL ;
}
}

void InsertAtEnd(list **l,int x){
        list *k = NULL ;
list *p = malloc(sizeof(list)) ; p->item = x ;
if(*l==NULL){
    p->next = NULL; p->prev = NULL ; *l = p ;
}
else{ k = *l ;
    while(k->next!=NULL){
        k = k->next ;
    }
    k->next = p ; p->prev= k ; p->next = NULL ;
}
}

void PrintList(list **l){
list *k = *l ;
while(k!=NULL){
    printf("%d ",k->item) ; k = k->next ;
}
printf("\n") ;
}
void ReverseA(list **l){
list *k = *l ; list *p = NULL ;
while(k->next!=NULL){
        p = k->next ;
k->next = k->prev ;
k->prev = p ;
    k = k->prev ;
}
p = k->next ;
k->next = k->prev ;
k->prev = p ;
*l = k ;
}

list* ReverseB(list *k){
list *p = NULL ;
if(k->next==NULL){
    p = k->next ;
k->next = k->prev ;
k->prev = p ;
return k ;
}
else{
    p = k->next ;
k->next = k->prev ;
k->prev = p ;
    return ReverseB(k->prev) ;
}

}
int main(){

list *head = NULL ;
InsertAtBeg(&head,1) ; //PrintList(&head) ;
InsertAtEnd(&head,2) ; //PrintList(&head) ;
InsertAtEnd(&head,3) ; PrintList(&head) ;

head = ReverseB(head) ;
PrintList(&head) ;
}
