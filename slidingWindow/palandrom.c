#include<stdio.h>
#include<string.h>

int isPalindrome(char str[]){
    int len = strlen(str);
    int s = 0;
    int e = len - 1;

    while (s < e) {
        if (str[s] != str[e]) {
            return 0;
        }
        s++;
        e--;
    }

    return 1;
}

int main(){
    char str[] = "madam";
    if(isPalindrome(str)){
        printf("The word is palindrome\n");
    }else{
        printf("The word is not palindrome\n");
    }
    return 0;
}