#include<stdio.h>
#include<string.h>
int t1=0,t2=0;

typedef struct list{
int item ;
struct list *left,*right ;
}list;
list *a[1000] ;
list *b[1000] ;
void postorder(list *node){
 a[t1] = node ;t1++; list *g ;
 while(t1>0){
    g = a[t1-1] ; t1-- ;
    b[t2]=g ;t2++;
   if(g->left!=NULL) {a[t1]=g->left ;t1++;}
     if(g->right!=NULL) {a[t1]=g->right ;t1++;}
 }
 while(t2>0){
    printf("%d ",b[t2-1]->item) ; t2-- ;
 }
}

list *insert(int x){
list *p = malloc(sizeof(list)) ;
p->item = x ;p->left=NULL;p->right=NULL ;
return p ;
}

int main(){

list *root = insert(1) ;
root->left   = insert(2);
root->right   = insert(3);
root->left->left  = insert(4);
root->left->right  = insert(5);

postorder(root) ;
}
