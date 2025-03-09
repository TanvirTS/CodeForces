/*
 ** Author: Tshahriar32
*/
#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int main(){
    char s[1010];
    bool letters[26]={false};
    int count=0;
    fgets(s, sizeof(s), stdin);
    for(int i=0; s[i]!='\0';i++){
        if(s[i]>='a' && s[i]<='z'){
            if(!letters[s[i]-'a']){
                letters[s[i]-'a']=true;
                count++;
            }
        }
    }
    printf("%d\n",count);

    return 0;
}
