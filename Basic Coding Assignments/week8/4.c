#include<stdio.h>

typedef struct list{
int item ;
struct list *next ;
}list;


void PrintList(list *l){
while(l !=NULL){printf("%d ",l->item) ; l = l->next ;} printf("\n") ;
}

void InsertAtEnd(list **l,int x){
list *p = malloc(sizeof(list)) ;  p->item = x ;
list *k = *l ;
if(*l==NULL){*l = p ;p->next = NULL;}
else{
    while(k->next!=NULL){
        k=k->next ;
    }
    k->next = p ; p->next = NULL ;
    }
}

void InsertAtBeg(list **l,int x){

list *p ;
p = (list *)malloc(sizeof(list)) ;
p->item = x ;
p->next = *l ;
*l = p ;

}

void delete(list **l,list *k){
if(k==(*l)){   *l = k->next ;  }
else{
    list *j = *l ;
    while(j->next!=k){j=j->next ;}
    j->next = k->next ;
}
}

void removal(list **l,list *j,int x){
list *k = j->next ;
while(k!=NULL){
    if(k->item==x){
        delete(l,k) ;
    }
    k=k->next ;
}
}

void Remove(list **l){
list *k = *l; list *j ;
while(k->next!=NULL){
    removal(l,k,k->item) ;
    k = k->next ;
}
}

int main(){

list *head= NULL ;

InsertAtBeg(&head,1) ;InsertAtBeg(&head,2) ;InsertAtBeg(&head,3) ;InsertAtBeg(&head,8) ;InsertAtBeg(&head,4) ;
InsertAtBeg(&head,1) ;InsertAtBeg(&head,2) ;InsertAtBeg(&head,8) ;InsertAtBeg(&head,4) ;
PrintList(head) ;

Remove(&head) ;
PrintList(head) ;

}
