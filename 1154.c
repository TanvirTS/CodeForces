/*
**Author: Tshahriar32
*/
#include<stdio.h>
int main(){
    int x1,x2,x3,x4;
    scanf("%d %d %d %d",&x1,&x2,&x3,&x4);
    
    int max = x1;
    if (x2 > max) 
        max = x2;
    if (x3 > max) 
        max = x3;
    if (x4 > max) 
        max = x4;
    
    int a, b, c;
    
    if(max==x1){
        a = max - x4;
        b = max - x2;
        c = max - x3;
        }
    if(max==x2){
        a = max - x4;
        b = max - x1;
        c = max - x3;
        }
    if(max==x3){
        a = max - x4;
        b = max - x2;
        c = max - x1;
        }
    if(max==x4){
        a = max - x1;
        b = max - x2;
        c = max - x3;
        }

    printf("%d %d %d\n",a,b,c);
    
    return 0;
}
