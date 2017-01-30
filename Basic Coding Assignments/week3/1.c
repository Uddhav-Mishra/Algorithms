#include<stdio.h>



int main(){
int n,k,i,j,a[20],dig ;
scanf("%d",&n) ;
char *one_dig[] = { "zero", "one", "two", "three", "four",
                              "five", "six", "seven", "eight", "nine"};
char *two_dig[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen",
                     "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty",
                             "sixty", "seventy", "eighty", "ninety"};
char *tens_power[] = {"hundred", "thousand"};

k = n ;
i=1;dig=0;
while(k){
  a[i] = k%10 ; k/=10;i++;  dig++;
}

if(dig==1){
   printf("%s",one_dig[a[1]]) ;
}
else if(dig==2){
    if(a[2]==1){printf("%s",two_dig[a[1]+1]);}
    else{printf("%s ",tens_multiple[a[2]]);
    printf("%s ",one_dig[a[1]] );
    }
}
else if(dig==3){
     printf("%s hundred ",one_dig[a[3]]) ;
     if(a[2]==0){  printf("%s",one_dig[a[1]]) ;}
     else{
         if(a[2]==1){printf("%s",two_dig[k%10]);}
    else{printf("%s ",tens_multiple[a[2]]);
    printf("%s ",one_dig[a[1]] );
    }
     }
}
else if(dig==4){

     printf("%s thousand",one_dig[a[4]]) ;

    if(a[3]!=0){
        printf("%s hundred",one_dig[a[3]]) ;}
        if(a[2]==0){  printf("%s",one_dig[a[1]]) ;}
     else{
         if(a[2]==1){printf("%s",two_dig[k%10]);}
    else{printf("%s ",tens_multiple[a[2]]);
    printf("%s ",one_dig[a[1]] );
    }
     }

}

return 0 ;

}

