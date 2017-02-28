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

void reverse(list **l,int x,int index){
int j = 0 ; list *k = *l ;
while(j<(index-1)){ j++ ; k = k->next ;  }
list *st = k ;  list *st1 = st->next ;
j = 1 ; list *en = k ; en=en->next;
while(j<x){en=en->next ; j++ ;}
list *en1 = en->next ;
list *prev,*cur,*nex ;
prev = st1 ; cur = prev->next ; nex = cur->next ;
while(cur!=en){
    cur->next = prev ;
    prev  =cur ; cur=nex ; nex = cur->next ;
}
st->next = en ; st1->next=en1 ;
}

int main(){
list *head=NULL;
InsertAtBeg(&head,4) ;InsertAtBeg(&head,3) ;InsertAtBeg(&head,2) ;InsertAtBeg(&head,1) ;
PrintList(head) ;
reverse(&head,1,2) ;
PrintList(head) ;


}
