#include<stdio.h>
#include<string.h>
int t1=0,t2=0;

typedef struct list{
int item ;
struct list *left,*right ;
}list;

void levelorder(list *node,int level){
 if (node == NULL)
        return;
    if (level == 1)
        printf("%d ", node->item);
    else if (level > 1)
    {
        levelorder(node->left, level-1);
        levelorder(node->right, level-1);
    }
}

list *insert(int x){
list *p = malloc(sizeof(list)) ;
p->item = x ;p->left=NULL;p->right=NULL ;
return p ;
}

int height(list* node)
{if (node==NULL)
        return 0;
    else
    {   int lheight = height(node->left);
        int rheight = height(node->right);
    if (lheight > rheight)
            return(lheight+1);
        else return(rheight+1);}
}

int main(){
int i ;
list *root = insert(1) ;
root->left   = insert(2);
root->right   = insert(3);
root->left->left  = insert(4);
root->left->right  = insert(5);

int h = height(root) ;
for(i=1;i<h;i++){
    levelorder(root,i) ;printf("\n") ;
}
levelorder(root,h) ;
}
