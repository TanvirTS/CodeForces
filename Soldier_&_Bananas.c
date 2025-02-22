#include<stdio.h>
int main(){
    int k,n,w;
    scanf("%d %d %d",&k,&n,&w);
    long long price=(long long)k*(w*(w+1))/2;
    long long borrow=price-n;
    if (borrow<0){
        borrow=0;
    }
    printf("%lld\n",borrow);
    return 0;
}
