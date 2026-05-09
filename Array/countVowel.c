#include<stdio.h>
#include<string.h>
void CheckVowels(char ar[],int n){
    int VowelCount = 0;
    int ConCount = 0;

    strlwr(ar);
   printf("%s\n", ar);
    for (char i = 0; i < n ; i++)
    {

         
        if(ar[i]=='a' || ar[i]=='e' || ar[i]=='i' || ar[i]=='o' || ar[i]=='u'){
            VowelCount+=1;
        } else {
            ConCount+=1;
        }
    }
    printf("Vowel Count is: %d",VowelCount);
    printf("\nConsonent Count is: %d",ConCount);
    

}



int main(){

    char arr[] = "Ramesh babu";
    int n = sizeof(arr)/sizeof(arr[0]);

    CheckVowels(arr,n);

    return 0;
}