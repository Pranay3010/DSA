// calculater using pointer

// #include<stdio.h>

// int main(){
//    int a = 30;
//    int b = 20;

//    int *ptr1 = &a;
//    int *ptr2 = &b;



//  int sum = *ptr1+*ptr2;
//  int sub = *ptr1-*ptr2;
//  int multiply = *ptr1 * *ptr2;
//  float divison = (float)*ptr1 / *ptr2;

//  printf("%d\n",sum);
 
//  printf("%d\n",sub);
 
//  printf("%d\n",multiply);
 
//  printf("%.2f\n",divison);

//  return 0;


// }

//----------------------------------------------

// make a function for it 

#include<stdio.h>



int Additon (int x, int y){
    int sum = x + y;
    return sum;
}

int Subtraction (int x, int y){
    int sub = x - y;
    return sub;
}

int Multiply(int x, int y){
  int mul = x*y;
  return mul;
  
}

float Divison( int x, int y){
  float div = x/y;
  return div ;
  
}





int main(){
   int a =20;
   int b =10;

   int *ptrA =&a;
   int *ptrB =&b;

   int input ;
   
  printf("For Addition enter 1\n");
  printf("For Subtraction enter 2\n");
  printf("For Multiply enter 3\n");
  printf("For Divion enter 4\n");

   printf("Enter the Desired Operation Number : ");
   scanf("%d",&input);

   if(input==1){
    printf("Addition of A and B :%d",Additon(*ptrA,*ptrB));
   } else if (input==2)
   {
    printf("Subtraction of A and B :%d",Subtraction(*ptrA,*ptrB));
   } else if (input==3)
   {
    printf("Multiplication of A and B :%d",Multiply(*ptrA,*ptrB));

   }
     else if (input==4)
   {
     printf("Divison of A and B :%.2f",Divison(*ptrA,*ptrB));

  
   } else{
     printf("You enterd wrong number");
   }
   





  return 0;
}