// bubble sorting algorithm 0(n*n) worst case
void bubble_sorter(int a[],int n){

do{
    done = 1 ;
    for(i=0;i<(n-1);i++){
        if(a[i]>a[i+1]){
            t = a[i] ; a[i] = a[i+1] ; a[i+1] = t ; done  = 0 ;
        }
    }

}while(done==0)    ;

}
