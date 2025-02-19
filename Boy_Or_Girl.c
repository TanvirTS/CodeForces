#include<stdio.h>
#include<string.h>
int main(){
    char name[101];
    int character[26]={0}, 
    count=0;
    
    scanf("%s",name);
    
    int length=strlen(name);
    
    for (int i=0;i<length;i++)
        character[name[i]-'a']=1;
    
    for (int i = 0; i < 26; i++)
        if (character[i]) 
            count++;
    
    printf(count%2==0 ? "CHAT WITH HER!\n" : "IGNORE HIM!\n");

    return 0;
}
