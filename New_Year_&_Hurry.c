/*
**Author: Tshahriar32
*/
#include<stdio.h>
int main(){
    int n,k,solved_in_min=0,total_min,solved=0;
    scanf("%d %d",&n,&k);
    total_min=240-k;
    for(int i=1;i<=n;i++){
        solved_in_min+= (5*i);
        if(solved_in_min>total_min)
            break;
        
        solved++;
     }
     printf("%d\n",solved);
   
    return 0;
}
