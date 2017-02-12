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


int main(){

int n,i,x,y,m     ;
list *a1 = NULL ; list *a2 = NULL ; list *a3 = NULL ;
scanf("%d%d",&n,&m) ;

    for(i=0;i<n;i++){scanf("%d",&x) ; InsertAtBeg(&a1,x) ;}
    for(i=0;i<m;i++){scanf("%d",&x) ; InsertAtBeg(&a2,x) ;}
//PrintList(a1);PrintList(a2);
         mergel(a1,a2,&a3) ;
         PrintList(a3);
}
