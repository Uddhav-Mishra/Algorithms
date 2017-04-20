#include<stdio.h>
#define V 10
int stack[1000][2];
int top;
int isSafe(int x,int y,int G[V][V],int Sol[V][V])
{
    if(x>=0 && x<V && y>=0&&y<V && G[x][y]==1 && !Sol[x][y])
        return 1;
    else
    return 0;
}
void push(int x,int y)
{   top++;
    stack[top][0]=x;
    stack[top][1]=y;
}
void pop()
{
    top--;
}
int MazeRecur(int G[V][V], int Sol[V][V], int x,int y)
{
stack[top][0]=0;
stack[top][1]=0;
    while(top>=0){
    x=stack[top][0];
    y=stack[top][1];

    if(isSafe(x,y,G,Sol)==1)
    {

    if(x==V-1 &&y==V-1)
    {
          Sol[x][y]=1;
          break;
    }

    Sol[x][y]=1;
    push(x-1,y);
    push(x,y-1);
    push(x+1,y);
    push(x,y+1);

    }
    else
    {
        pop();
    }
}
       if(top>0)return 1;
       else return 0;
}
int main()
{

 int G[V][V]={0};
 int sol[V][V] = {0},i,j;

    for(i=0;i<V;i++)
        for(j=0;j<V;j++)
        scanf("%d",&G[i][j]);

    if(MazeRecur(G,sol,0,0)==1)
        {
            printf("Solution Exists\n");
            for(i=0; i<V;i++)
            {
                for(j=0; j<V; j++)
                printf("%d\t",sol[i][j]);
                printf("\n");
            }
      }
    else
        printf("No Solution Exists");

 return 0;
}
