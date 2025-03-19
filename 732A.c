/*
**Author: Tshahriar32
*/
#include<stdio.h>
int main(){
    int k,r;
    scanf("%d %d",&k,&r);
    int s=1;
    while((s*k)%10!=0 && (s*k)%10!=r)
            s++;

    printf("%d\n",s);

    
    return 0;
}
