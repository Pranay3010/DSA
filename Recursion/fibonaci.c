#include <stdio.h>

void fibo(int a, int b, int n) {

    if (n == 0) {
        return;
    }

    printf("%d ", a);

//       3, 2+3
//       2, 1+2   
//       1, 1+1
//       1, 0+1
    fibo(b, a + b, n - 1);
}

int main() {

    int n;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    fibo(0, 1, n);

    return 0;
}