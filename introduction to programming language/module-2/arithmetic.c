#include <stdio.h>;

int main(){
int a = 5;
float b = 2;
int c = 3;
int sum = a + b;
int sub = a - b;
int mul = a * b;
float div = a/b;
int rem = a % c ;
printf("summation = %d\n",sum);
printf("subtraction = %d\n",sub);
printf("multiplication = %d\n",mul);
printf("division = %.2f\n",div);
printf("reminder = %d\n",rem);
    
return 0;
}