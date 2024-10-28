#include <stdio.h>

/*
 Declaring a variable in C language
*/
int main() {
int num = 10; //interger type variable

// declare a variable
int myNum; 

//assign a value to variable
myNum = 5;
printf("%d\n", num);
printf("%d\n", myNum);

int x = 50; //interger variable
float z = 3.0; //float variable
char c = 'A'; //character variable

//output statements
printf("%d\n", x); //output interger
printf("%f\n", z); //output float number
printf("%c\n", c); //output character
printf("My float number is %f, my interger number is %d and my letter is %c\n", z, x, c); //output multiple statements
// output values without variables
printf("My favourite number is: %d\n", 10);
printf("My favourite letter is: %c\n", 'M');

//Add variable together
int sum = myNum + num;
printf("%d\n", sum);

//Declare Multiple Variables
int a=1, b=2, d=4;
printf("%d\n", a + b + d);

// Double Numbers
float dd = 10.99;
printf("%lf\n", dd);
return 0; //end statements
}

/*
User Data
*/
int mainn() {
    char userGender = 'M';
    int userAge = 20;
    float userHeight = 1.7;

    // output user data
    printf("User Gender: %c\n", userGender);
    printf("User Age: %d\n", userAge);
    printf("User Height: %f", userHeight);
}



