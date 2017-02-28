#include<stdio.h>

typedef struct list{
int item ;
struct list *next ;
}list;


void PrintList(list *l){
while(l !=NULL){printf("%d ",l->item) ; l = l->next ;} printf("\n") ;
}

void Del(list **l,list *j){

list *p = *l ;
if(p==j){
*l = p->next ;}
else{
    while(p->next!=j){
        p = p->next ;
    }
    p->next = j->next ;
}

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

void ans(list **head,list **even,list **odd){
list *k = *even ; list *l = *odd ;
if(k==NULL){
     *head = *odd ;
}
else if(l=NULL){
     *head = *even ;
}
else{

while(k->next!=NULL){k=k->next ;}
k->next = *odd ;  *head = *even ;
}

}


int main(){

list *k = NULL ;
list *odd = NULL ; list *even = NULL ;

int n,i,x  ;
scanf("%d",&n) ;
for(i=0;i<n;i++){scanf("%d",&x) ; InsertAtBeg(&k,x) ;
if(x%2==0){
    InsertAtBeg(&even,x) ;
}
else{
     InsertAtBeg(&odd,x) ;
}
}
PrintList(even) ;
PrintList(odd) ;

ans(&k,&even,&odd) ;
PrintList(k) ;
}


