#include<stdio.h>
#include<conio.h>
int fibo(int);

int main()
{
    int n,i;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Fibonacci numbers up to %d terms:\n",n);
    for(i=0;i<=n;i++)
    {
	printf("%d\n",fibo(i));
    }
    return 0;
}

int fibo(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}
