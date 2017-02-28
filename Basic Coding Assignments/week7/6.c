#include<stdio.h>

typedef struct list{
char item ;
struct list *prev ;
struct list *next ;
}list;

void InsertAtBeg(list **l,char x){
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

void InsertAtEnd(list **l,char x){
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

int main(){
list *head1 = NULL ; list *head2 = NULL ;
char s[200] ;
scanf("%s",s) ; int i  ;

for(i=0;i<strlen(s);i++){
    InsertAtBeg(&head1,s[i]) ;
    InsertAtEnd(&head2,s[i]) ;
}
int flag=1 ;
while(head1!=NULL&&head2!=NULL){
    if(head1->item!=head2->item){
        flag=0; break;
    }
    head1=head1->next ;  head2=head2->next ;
}
if(flag==0){
    printf("NOT PALINDROME") ;
}
else{
    printf("Palindrome") ;
}

}
