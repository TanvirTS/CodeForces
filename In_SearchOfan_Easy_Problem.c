#include<stdio.h>
int main(){
    int n,t;
    scanf("%d",&n);
    while(n--){
        scanf("%d",&t);
        if(t==1){
            printf("HARD\n");
            return 0;
        }
    }
    printf("EASY\n");
            
    return 0;
}
