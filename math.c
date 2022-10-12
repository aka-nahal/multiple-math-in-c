#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    int q;
    double d;
    printf(" 1.Odd/Even \n 2.Postive/Negative \n 3.Square of numbers \n 4.Square root of number \n");
    printf("Enter the corresponding number to enter into the function \n");
    scanf("%d",&a);
    
    switch(a)
    {
        case 1:

   
   printf("Enter any number:- \n");
    scanf("%d",&q);
    if(q % 2 == 0)
        printf("%d is even.", q);
    else
        printf("%d is odd.", q);
    
   break;

   case 2:
     printf("Enter any number:- \n");
    scanf("%d",&q);
        if (q <= 0) { 
        if (q == 0)
            printf("You entered 0");
        else
            printf("You entered a negative number.");
    } 
    else
        printf("You entered a positive number.");

    
    
    
    break;
    
    case 3:
    printf("enter any number: \n");
    scanf("%d",&q);
    
    printf("Square is %d",q*q);
    
    break;
    case 4:
    printf("Enter any number: \n");
    scanf("%lf",&d);
    
    printf("Square root is %lf",sqrt(d));
    
    
}
 printf("Thanks For using our program");
    return 0;
}
