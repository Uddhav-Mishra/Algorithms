#include<stdio.h>
int a[300],b[300],t1=0,t2=0 ;

void push(int  x){
a[t1]=x ; t1++;
}

void pop(){
t1-- ;
}

int top(){
return a[t1-1] ;
}

int isEmpty(){
if(t1==0){return 1 ;}
return 0 ;
}

int main(){

int n,i,p,k,j ,x,y,ans,m ;


scanf("%d",&n) ;
for(i=0;i<n;i++){scanf("%d",&b[i]) ;}

i =  0 ;
k=0; ans = 0 ;
 int max_area = 0;
    int tp;
    int area_with_top;

     i = 0;
    while (i < n)
    {
        if (isEmpty()==1 || b[top()] <= b[i])
             push(i++);
    else
        {
            tp =  top();
            pop();
    area_with_top = b[tp] * ( isEmpty()==1 ? i : i -  top() - 1);

            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }

    while (isEmpty() == 0)
    {
        tp =  top();
         pop();
        area_with_top = b[tp] * (isEmpty()==1 ? i : i -  top() - 1);

        if (max_area < area_with_top)
            max_area = area_with_top;
    }


printf("%d",max_area) ;

}
