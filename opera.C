#include <stdio.h>

int main(){
int a, b, r1, r2, r3;
float r4;
      
a = 5;
b = 5;

    r1 = a + b;
    r2 = a - b;
    r3 = a * b;
    r4 = (float)a / b;
    
    printf("%d\n", r1);
    printf("%d\n", r2);
    printf("%d\n", r3);
    printf("%f\n", r4);

    return 0;
}
