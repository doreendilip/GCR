#include <stdio.h>

int main()
{
    int a,b,gcd;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("Enter second number :");
    scanf("%d",&b);

    for (int i=1;i<=a;i++)
    {
      if (a%i==0 && b%i==0)
        {
          gcd = i;
        }
    }
    if (gcd == 1){
        printf ("\nThey are relatively prime");
    }
    else{
        printf ("\nThey are not relatively prime");
    }

    return 0;
}
