#include<stdio.h>

typedef struct list{
int item ;
struct list *next ;
}list;

void InsertAtEnd(list *l,int x){

while(l->next!=NULL){
    l = l->next ;
}
list *p ;
p = (list *)malloc(sizeof(list)) ;
l->next = p ; p->next = NULL ; p->item = x ;

}

void Insert(list *l,int x,int y){

while(l->next->item!=y){
    l = l->next ;
}
list *p ;
p = (list *)malloc(sizeof(list)) ;
p->next = l->next ; l->next = p ; p->item = x ;

}

void PrintList(list *l){
while(l !=NULL){printf("%d",l->item) ;l = l->next ;};
}

void InsertAtBeg(list **l,int x){

list *p ;
p = (list *)malloc(sizeof(list)) ;
p->item = x ;
p->next = *l ;
*l = p ;

}


int main(){

int n,i,x,y     ;
list *head = NULL ;

scanf("%d",&y) ; InsertAtBeg(&head,y) ;
scanf("%d",&y) ; InsertAtBeg(&head,y) ;
PrintList(head) ;


scanf("%d",&y) ; InsertAtEnd(head,y) ;
PrintList(head) ;
scanf("%d%d",&x,&y) ; Insert(head,x,y) ;
PrintList(head) ;

}
