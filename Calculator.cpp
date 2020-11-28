#include <stdio.h>
#include <math.h>
int main(){

    
    printf(" / ____|     | (_) |   ( )      / ____|    | |          | |     | |           \n");
    printf("| |  __  __ _| |_| |__ |/ ___  | |     __ _| | ___ _   _| | __ _| |_ ___  _ __\n");
    printf("| | |_ |/ _` | | | '_ \  / __| | |    / _` | |/ __| | | | |/ _` | __/ _ \| '__|\n");
    printf("| |__| | (_| | | | |_) | \__ \ | |___| (_| | | (__| |_| | | (_| | || (_) | |   \n");
    printf(" \_____|\__,_|_|_|_.__/  |___/  \_____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   \n");
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
        printf("Insert one number :");
        scanf("%lld",&num1);
        printf("Root of the number is: %lf\n",sqrt(num1));
    }



    return 0;
}
