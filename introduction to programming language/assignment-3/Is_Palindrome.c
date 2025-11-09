#include <stdio.h>
#include <string.h>

int is_palindrome(char arr[],int size){
char revStr[size];
int isPalindrome =1;
for(int i=0;i<size;i++){
    revStr[i]=arr[(size-1)-i];
}

for(int i=0;i<size;i++){
    if(arr[i]!=revStr[i]){
      isPalindrome = 0;
      break;
    }
    
}

return isPalindrome;

}
int main(){
   char str[1001];
   scanf("%s",str);
   int size= strlen(str);
   int res = is_palindrome(str,size);
   if(res==1){
    printf("Palindrome");
   }else{
    printf("Not Palindrome");
   }

    return 0;
}