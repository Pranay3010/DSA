// Dynamic memory

#include<stdio.h>
#include<stdlib.h>
int main(){

   // malloc(size);
   // returns type is  void * (pointer)
   // Garbage value always generate by using malloc

   int *p;
// p = malloc(4);
   p = malloc(sizeof(int));     // use this 


   *p = 20;

   printf("%d",*p);




   // calloc

   // calloc(size,size);
   // returns type is  void * (pointer)
   // 0 is initialize not garbage value

    int *c = calloc(1,sizeof(int));
    printf("\n%d",*c); // returns 0 if no value is assigned

    *c= 30;
    printf("\n%d",*c);


// free 
   
    if (c!=NULL || p!=NULL){
        free(c);
        free(p);
        printf("\nDELETED");
    }
    
    
    printf("\n%d",*p);
    printf("\n%d",*c);

    

    return 0;
}