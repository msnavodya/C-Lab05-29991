/*#include <stdio.h>

int main() {
    int number = 0;

    while (number <= 100) {
        printf("%d ", number);
        number++;
    }

    return 0;
}

#include <stdio.h>

int main() {
    int number = 0;

    do {
        printf("%d ", number);
        number++;
    } while (number <= 100);

    return 0;
}



#include <stdio.h>

int main() {
    for (int number = 0; number <= 100; number++) {
        printf("%d ", number);
    }

    return 0;
}




#include <stdio.h>

int main() {
    int marks[10];
    int total = 0;

    printf("Enter the 10 marks:\n");

    // Read the marks from the user
    for (int i = 0; i < 10; i++) {
        printf("Mark %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Calculate the average
    float average = (float) total / 10;

    printf("Total marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    // Check if the average is a pass or fail
    if (average < 50) {
        printf("Fail!\n");
    } else {
        printf("Pass!\n");
    }

    return 0;
}



#include <stdio.h>

int main() {
    int number,factorial=1;


    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf(" Factorial is not defined for negative numbers.\n");
        return 0;
    }

    for (int i = number; i > 0; i--) {
        factorial *= i;
    }

    printf("Factorial of %d is: %llu\n", number, factorial);

    return 0;
}




#include <stdio.h>

int main() {
    int number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);


    while (number != 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}


#include <stdio.h>

int main() {
    int number, reversed Number = 0;

    printf("Enter a number: ");
    scanf("%d", &number);


    do {
        int digit = number % 10;
        reversed Number = reversed Number * 10 + digit;
        number /= 10;
    } while (number != 0);

    printf(" %d\n", reversed Number);

    return 0;
}



#include <stdio.h>

 int power(int base, int exponent) {
     int result = 1;

    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    int base, exponent,result;


    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("4Exponent should be non-negative.\n");
        return 0;
    }

    result = power(base, exponent);

    printf("%d raised to the power of %d is: %lld\n", base, exponent, result);

    return 0;
}



#include <stdio.h>

int main() {
    int n = 10;
    int fib[n];


    fib[0] = 0;
    fib[1] = 1;


    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }


    printf("First 10 numbers of the Fibonacci sequence:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", fib[i]);
    }
    printf("\n");

    return 0;
}





#include <stdio.h>
#include <math.h>


int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if ("is Armstrong Number",number) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}





#include <stdio.h>

int main() {
    char letter;

    printf("ASCII values for letters A to Z:\n");

    for (letter = 'A'; letter <= 'Z'; letter++) {
        printf("%c - %d\n", letter, letter);
    }

    return 0;
}




#include<stdio.h>
int main()
{
    int x,y;
    //main loop
    for (x=1;x<=5;x++)
    {
        //inner loop
        for(y=1;y<=x;y++)
        {
            printf("*");
        }
        printf("\n");
    }
}



#include <stdio.h>
              int isPrime(int num) {
              int i;
              if (num<= 1)
             {
                    return 0;
             }
            for (i = 2; i < num; i++)
           {
            if (num % i == 0) {
                    return 0;
           }
          }

               return 1;
          }
        int main()
             {
            int num;
             printf("Enter a number: ");
            scanf("%d", &num);

          if (isPrime(num))
           {
                 printf("%d is a prime number.\n", num);
         }
        else
      {
        printf("%d is not a prime number.\n", num);
    }
return 0;
 }


#include <stdio.h>

void printFactors(int num) {
    int i;

    printf("Factors of %d: ", num);

    // Iterate from 1 to num and check for factors
    for (i = 1; i <= num; i++) {
        if (num % i == 0)
            printf("%d ", i);
    }

    printf("\n");
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printFactors(number);

    return 0;
}




#include <stdio.h>

int main() {
    int num, sum = 0;

    printf("Enter numbers to add (enter -1 to stop):\n");

    while (1) {
        scanf("%d", &num);

        if (num == -1)
            break;

        sum += num;
    }

    printf("Sum of the numbers: %d\n", sum);

    return 0;
}


#include <stdio.h>

int main() {
    int arr[10];
    int i;

    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Entered array: ");

    for (i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
*/



#include <stdio.h>

int main() {
    int arr[10];
    int i, count = 0;

    printf("Enter 10 integers:\n");

    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }

    printf("Count of even numbers: %d\n", count);

    return 0;
}
