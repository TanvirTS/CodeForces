/*

 ** Author: Tshahriar32

*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdbool.h>
#define Alphabet 26
int main(){
  int n;
  scanf("%d",&n);
  char words[n+1];
  scanf("%s",words);
  if(n< Alphabet){
    printf("NO\n");
    return 0;
  }
  bool letters[Alphabet]={false};
  int count=0;
  for(int i=0;i<n;i++){
    char ch=towlower(words[i]);
    if(ch>='a' && ch<='z'){
      int index= ch - 'a';
      if(!letters[index]){
        letters[index]=true;
        count++;
      }
      if(count==Alphabet){
        printf("YES\n");
        return 0;
      }
    }
  }

  printf("NO\n");


  return 0;
}
