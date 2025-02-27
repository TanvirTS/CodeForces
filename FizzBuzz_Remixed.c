#include<stdio.h>
int FizzBuzz(int n){
    return (n / 15) * 3 + (n % 15 >= 0) + (n % 15 >= 1) + (n % 15 >= 2);
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("%d\n",FizzBuzz(n));
    }

    return 0;
}
