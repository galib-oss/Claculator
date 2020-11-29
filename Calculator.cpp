#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){

    
    printf(" / ____|     | (_) |   ( )      / ____|    | |          | |     | |            \n");
    printf("| |  __  __ _| |_| |__ |/ ___  | |     __ _| | ___ _   _| | __ _| |_ ___  _ __ \n");
    printf("| | |_ |/ _` | | | '_ \  / __| | |    / _` | |/ __| | | | |/ _` | __/ _ \| '__|\n");
    printf("| |__| | (_| | | | |_) | \__ \ | |___| (_| | | (__| |_| | | (_| | || (_) | |   \n");
    printf(" \_____|\__,_|_|_|_.__/  |___/  \_____\__,_|_|\___|\__,_|_|\__,_|\__\___/|_|   \n");
    long long int num1, num2, num3,x;
    char g;
    x = 100;

    do {
        printf(" Choose your function\n");
        printf(" 1.addition\n 2.Substraction\n 3.Multiplication\n 4.Division\n 5.Square\n 6.Root\n 7.Power\n 8.Factorial\n");
        printf(" Enter your choice :");
        scanf("%lld",&x);

    } while(x < 1 or x > 8);


    if (x == 1){
        printf(" Insert two numbers :");
        scanf("%lld %lld",&num1,&num2);
        printf(" Sum of the numbers is: %lld\n",num1 + num2);
        printf(" Press Enter to exit...");
        getchar();
        getchar();
        
    }

    else if (x == 2){
        printf(" Insert two numbers :");
        scanf("%lld %lld",&num1,&num2);
        printf(" Substraction of the numbers is: %lld\n",num1 - num2);
        printf(" Press Enter to exit...");
        getchar();
        getchar();
    }

    else if (x == 3){
        printf(" Insert two numbers :");
        scanf("%lld %lld",&num1,&num2);
        printf(" Multiplication of the numbers is: %lld\n",num1 * num2);
        printf(" Press Enter to exit...");
        getchar();
        getchar();
    }

    else if (x == 4){
        printf(" Insert two numbers :");
        scanf("%lld %lld",&num1,&num2);
        printf(" Division of the numbers is: %lld\n",num1 / num2);
        printf(" Press Enter to exit...");
        getchar();
        getchar();
    }

    else if (x == 5){
        printf(" Insert one number :");
        scanf("%lld ",&num1);
        printf(" Square of the number is: %lld\n",num1 * num1);
        printf(" Press Enter to exit...");
        getchar();
        getchar();
    }

    else if (x == 6){
        printf(" Insert one number :");
        scanf("%lld",&num1);
        printf(" Root of the number is: %lf\n",sqrt(num1));
        printf(" Press Enter to exit...");
        getchar();
        getchar();
    }

    else if (x == 7){
        printf(" Insert one number and the power :");
        scanf("%lld",&num1,&num2);
        long long int ans = 1;
        for (int i = 1; i <= num2;i++){
            ans *= num1;
        }
        printf(" The answer is: %lf\n",ans);
        printf(" Press Enter to exit...");
        getchar();
        getchar();
    }

    
     else if (x == 8){
        printf(" Insert one number :");
        scanf("%lld",&num1);
        long long ans = 1;
        for (int i = 1; i <= num1; i++){ 
            ans *= i;
        }
        printf(" Factorial of the number is: %lld\n", ans);
        printf(" Press Enter to exit...");
        getchar();
        getchar();
    }

    return 0;
}
