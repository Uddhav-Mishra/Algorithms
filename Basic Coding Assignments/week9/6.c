#include<stdio.h>
int p ;
typedef struct list{
int item ;
struct list *next ;
}list;

void insert(list *l,int x){
    list *p1 = malloc(sizeof(list)) ;  p1->item = x ;
list *k = (l)->next ;

if( k==NULL){
    p1->next=NULL;   l->next = p1 ;
}
else{
    p1->next = k ;    (l)->next  = p1 ;
}

}

list* search(list *l,int x){
list *k =l->next ;
while(k!=NULL){
   if(k->item==x){break ;} k=k->next ;
}
return k ;
}

void del(list *l,int x){
if(search(l,x)!=NULL){
   list *a = l ;
   list *nex = l->next ;
   while(nex->item!=x){a=a->next ; nex=nex->next ;}
   a->next=nex->next ;
}
}
void print(list *l){ // WORKING
 list *k =(l)->next  ;
while(k!=NULL){
    printf("%d ",k->item) ; k=k->next ;
}
printf("\n") ;
}

int main(){
    int n,i,p,k,j,a[300] ;
    scanf("%d",&p) ;
list head[p] ;
for(i=0;i<p;i++){
    head[i].next = NULL ;
}

int x,y ;
while(1){
    printf("press 1 to add\n") ;
    printf("press 2 to search\n") ;
    printf("press 3 to delete\n") ;
    printf("press 4 to print\n") ;
    printf("press 5 to exit\n") ;
    scanf("%d",&x) ;
    if(x==1){         scanf("%d",&y);      insert(&head[(y%p)],y) ;          }
    else if(x==2){ scanf("%d",&y) ;
    if(search(&head[y%p],y)!=NULL){printf("key present\n");}
    else{   printf("key NOT present\n")  ;  }       }
    else if(x==3){  scanf("%d",&y) ;
        del(&head[y%p],y) ;
    }
    else if(x==4){
      for(i=0;i<p;i++){   print(&head[i]) ; }
    }
    else{
        break;
    }
}


}
