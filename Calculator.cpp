#include <stdio.h>
#include <math.h>
int main(){

    printf("Hello Welcome to Galib's Calculator\n");
    long long int num1, num2, num3,x;
    x = 100;
    do {
        printf("Choose your function\n");
        printf("1.addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Square\n6.Root\n7.Power\n");
        printf("Enter your choice :");
        scanf("%lld",&x);

    } while(x < 1 or x > 7);


    if (x == 1){
        printf("Insert two numbers :");
        scanf("%lld %lld",&num1,&num2);
        printf("Sum of the numbers is: %lld\n",num1 + num2);
    }

    else if (x == 2){
        printf("Insert two numbers :");
        scanf("%lld %lld",&num1,&num2);
        printf("Substraction of the numbers is: %lld\n",num1 - num2);
    }

    else if (x == 3){
        printf("Insert two numbers :");
        scanf("%lld %lld",&num1,&num2);
        printf("Multiplication of the numbers is: %lld\n",num1 * num2);
    }

    else if (x == 4){
        printf("Insert two numbers :");
        scanf("%lld %lld",&num1,&num2);
        printf("Division of the numbers is: %lld\n",num1 / num2);
    }

    else if (x == 5){
        printf("Insert one number :");
        scanf("%lld ",&num1);
        printf("Square of the number is: %lld\n",num1 * num1);
    }

    else if (x == 6){
        printf("Insert one number asd:");
        scanf("%lld",&num1);
        printf("Root of the number is: %lf\n",sqrt(num1));
    }



    return 0;
}