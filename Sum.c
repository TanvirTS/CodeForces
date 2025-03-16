/*
**Author: Tshahriar32
*/
#include<stdio.h>
int main(){
    int a,b,c,t;
    scnaf("%d",&t);
    while(t--){
        scanf("%d %d %d",&a,&b,&c);

        if((a+b)==c)
            printf("YES\n");
        else if((a+c)==b)
            printf("YES\n");
        else if((c+b)==a)
            printf("YES\n");
        else
            printf("NO\n");
    }


    return 0;
}
