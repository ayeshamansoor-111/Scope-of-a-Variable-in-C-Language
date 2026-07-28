#include <stdio.h> 
void add(float, float); 
void subtract(float, float); 
void multiply(float, float); 
void divide(float, float); 
int main() {
    float a, b; 
    printf("Enter the first number >>  "); 
    scanf("%f", &a); 
    printf("Enter the second number >>  "); 
    scanf("%f", &b); 
    add(a, b); 
    subtract(a, b); 
    divide(a, b); 
    multiply (a, b); 
    return 0; 
}
void add(float a, float b) {
    printf("The addition of the two numbers is %f\n", a + b); 
}
void subtract(float a, float b) {
    printf("The subtraction of the two numbers is %f\n", a - b); 
}
void multiply(float a, float b) {
    printf("The multplication of the two numbers is %f\n", a*b); 
}
void divide(float a, float b) {
    if (b == 0) {
        printf("ERROR! Your input is invalid!");
    } else printf("The division of the two numbers is %f\n", a/b); 
}