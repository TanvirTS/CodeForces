#include<stdio.h>
#include<string.h>
int main(){
    int n,count=0;
    char s[51]; 
    scanf("%d",&n);
    scanf("%s",s);
    for (int i=1;i<n;i++){
        if (s[i]==s[i - 1])
            count++;
        
    }
    
    printf("%d\n", count);
    return 0;
}
