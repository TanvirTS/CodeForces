#include<stdio.h>
#include<string.h>
int main(){
    char s[101],t[101];
    scanf("%s",s);
    scanf("%s",t);
    int len_s= strlen(s);
    int len_t = strlen(t);
    if (len_s<len_t) {
        printf("NO\n");
        return 0;
    }
    int reverse=1;
    for (int i=0;i<len_s;i++) {
        if (s[i]!=t[len_s-i-1]){
            reverse=0;
            break;
        }
    }

    if (reverse)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
