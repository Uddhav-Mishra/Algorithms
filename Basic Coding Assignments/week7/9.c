#include<stdio.h>
typedef struct list{
int item ;
struct list *next ;
}list;

void PrintList(list **l){
list *p = *l ;
while(p->next!=*l){
    printf("%d ",p->item) ; p=p->next ;
}
 printf("%d\n",p->item) ;
}

void InsertAtEnd(list **l,int x){
list *p = malloc(sizeof(list)) ;  p->item = x ;
list *k = *l ;
if(*l==NULL){*l = p ;p->next = p;}
else{
    while(k->next!=*l){
        k=k->next ;
    }
    k->next = p ; p->next = *l ;
    }
}

void Del(list **l,list *k){
list *j = *l ;
if(k==*l){
  while(j->next!=*l){j=j->next ;}
  j->next = k->next ; *l = k->next ;//printf("option one\n") ;
}
else{
    while(j->next!=k){j = j->next ;}
    j->next = k->next ;
}

}

int main(){

list *head  = NULL ;
int i,k,n ;

scanf("%d%d",&n,&k) ;
for(i=1;i<=n;i++){InsertAtEnd(&head,i) ;}
PrintList(&head) ;
list *j = head ; list *p =NULL ;
while(head->next!=head){
    i = 1 ;
    while(i<k){
        i++  ; j = j->next ;
    }
    p = j ; j=j->next ;
    Del(&head,p) ;
}
printf("%d",head->item) ;

}
/*

scanf("%d%d",&n,&k) ;
for(i=1;i<=n;i++){InsertAtEnd(&head,i) ;}
PrintList(&head) ;
list *j = head ;
while(head->next!=head){
    i = 1 ;
    while(i<k){
        i++  ; j = j->next ;
    }
    p = j ; j=j->next ;
    Del(&head,p) ;
}
printf("%d",head->item) ;



InsertAtEnd(&head,1) ;
InsertAtEnd(&head,2) ;
InsertAtEnd(&head,4) ;   PrintList(&head) ;

*/
