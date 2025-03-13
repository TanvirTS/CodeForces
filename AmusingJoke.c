/*
**Author: Tshahriar32
*/
#include<stdio.h>
#include<string.h>
#define Lenth 101
int main(){
    char guest[Lenth],host[Lenth],pile[Lenth];
    int letters[26]={0};

    scanf("%s",guest);
    scanf("%s",host);
    scanf("%s",pile);

    for(int i=0;guest[i]!='\0';i++)
        letters[guest[i]-'A']++;

    for(int i=0;host[i]!='\0';i++)
        letters[host[i]-'A']++;

    for(int i=0;pile[i]!='\0';i++)
        letters[pile[i]-'A']--;
      
    for(int i=0;i<26;i++){
      if(letters[i]!=0){
        printf("NO\n");
        return 0;
      }
    }
    printf("YES\n");
    
    
    return 0;
}
