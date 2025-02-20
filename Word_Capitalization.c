#include<stdio.h>
#include<ctype.h>
int main() {
    char X[1001];
    scanf("%s",X);
    if (X[0]>='a' && X[0]<='z')
        X[0]=toupper(X[0]);
   
        printf("%s\n",X);
    
    return 0;
}
