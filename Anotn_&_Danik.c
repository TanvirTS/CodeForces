#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char c[n+1];
    scanf("%s",c);
    int ant=0,dan=0;
    for(int i=0;i<n+1;i++){
        if(c[i]=='A')
            ant++;
        else if(c[i]=='D')
            dan++;
    }
    if(ant>dan)
        printf("Anton\n");
    else if(dan>ant)
        printf("Danik\n");
    else if(ant==dan)
        printf("Friendship");
    


    return 0;
}
