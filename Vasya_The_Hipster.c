/*
**Author: Tshahriar32
*/
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int different_days = (a < b) ? a : b; 
    int remaining_socks = (a > b) ? (a - b) : (b - a); 

    int same_days = remaining_socks / 2;  

    printf("%d %d\n", different_days, same_days);

    
    return 0;
}
