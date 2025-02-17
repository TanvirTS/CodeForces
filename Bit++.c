#include<stdio.h>
#include<string.h>
int main(){
    int n,x=0;
    char lines[4];
    scanf("%d",&n);
    for (int i=0;i<n;i++) {
        scanf("%s",lines);
        if(strstr(lines, "++"))
         x++;
        else if(strstr(lines, "--"))
        x--;
    }
    printf("%d\n",x);
    return 0;
}
