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
l->next = p ; p->item = x ; p->next = NULL ;

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
while(l !=NULL){printf("%d ",l->item) ;l = l->next ;} printf("\n") ;
}

void InsertAtBeg(list **l,int x){

list *p ;
p = (list *)malloc(sizeof(list)) ;
p->item = x ;
p->next = *l ;
*l = p ;

}

void DelAtBeg(list **head){
*head=(*head)->next ;
}
void DelAtEnd(list *head){

while(head->next->next!=NULL){head=head->next ;}
head->next = NULL ;
}
void mergel(list *a1,list *a2,list **a3){
while(a1!=NULL&&a2!=NULL){
    if(a1->item<=a2->item){
        InsertAtBeg(a3,a2->item) ; a2=a2->next ;
    }
    else{
         InsertAtBeg(a3,a1->item) ; a1=a1->next ;
    }
}

while(a1!=NULL){
     InsertAtBeg(a3,a1->item) ;a1=a1->next ;
}
while(a2!=NULL){
     InsertAtBeg(a3,a2->item) ;a2=a2->next ;
}
PrintList(*a3) ;
}

void reversel(list **l){

list *prev = NULL ; list *cur =*l ; list *nex  ;
while(cur!=NULL){
    nex = cur->next ; cur->next = prev ; prev = cur ;cur=nex ; }
    *l = prev ;
PrintList(*l) ;

}

void reverse2(list *prev,list *cur,list **l){
if(cur->next==NULL){
    *l = cur  ; cur->next=prev ;return;
}
list *nex = cur->next ;
cur->next=prev ;
reverse2(cur,nex,l);
}

int main(){

int n,i,x,y,m     ;
list *a1 = NULL ; list *a2 = NULL ; list *a3 = NULL ;
scanf("%d",&n) ;

for(i=0;i<n;i++){scanf("%d",&x) ; InsertAtBeg(&a1,x) ;}
PrintList(a1) ;
reverse2(NULL,a1,&a1) ;
PrintList(a1) ;
}
