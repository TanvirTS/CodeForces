/*
**Author: Tshahriar32
*/
#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    long long n;
    while(t--){
      scanf("%lld",&n);
      int ways=(n-1)/2;
      printf("%d\n",ways);
    }

    
    return 0;
}
