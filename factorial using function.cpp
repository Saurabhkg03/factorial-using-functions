#include <stdio.h>

int calfact(int); 
int main()
{
    int a;

    printf("Enter the any number-");
    scanf("%d", &a);
    calfact(a);
	
}

int calfact(int x)
{
    int i,fact;
    fact =1;
    for(i=1;i<=x;i++)
    {
        fact=fact*i;
    }
    printf("The factorial is-%d",fact);
    return 0;
}