#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char a[101];
    char b[101];
    scanf("%s",a);
    scanf("%s",b);
    for (int i=0;i<strlen(a);i++) {
        a[i]=tolower(a[i]);
        b[i]=tolower(b[i]);
    }
    int compare=strcmp(a,b);

    if (compare<0)
        printf("-1\n");
    else if (compare>0)
        printf("1\n");
    else
        printf("0\n");
    
    return 0;
}
