/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1,num2;
    float n1,n2;
    printf("Please enter the integer numbers:\n");
    scanf("%d %d\n",&num1,&num2);
    printf("%d %d\n" , (num1+num2),(num1-num2));
    printf("Please enter the float numbers:\n");
    scanf("%f %f\n",&n1,&n2);
    printf("%f %f\n",(n1+n2),(n1-n2));
    
    return 0;
}
