#include<stdio.h>
#include<conio.h>
long int factorial(int n);      // in the range -2,147,483,648 (-2^31) to 2,147,483,647 (2^31 -1)

int main()
{
    int n;
    long int facto;
    printf("Enter value of n:");
    scanf("%d",&n);
    facto=factorial(n);
    printf("%d! = %ld",n,facto);
    return 0;
}

long int factorial(int n)
{
    if(n == 0)
    return 1;
    else
    return n * factorial(n-1);
}


/*long int ko eg:
#include<stdio.h>
int main()
{
    long int a;
    printf("Enter value:\n");
    scanf("%ld",&a);
    printf("The value of a is %ld ",a);
    return 0;
}    
*/