//#1 C whatt all do you need

1. IDE( Text editor) 
2. gcc compiler 

//#2 intro to print cmd

#include<stdio.h>

int main() {

    printf("I like pizza its really good!")
    printf("It's really good!")

}

//#3 how to run a cmd from gcc compiler

/*
(I)   make the file and save it in a folder
(II)  cd directory to the directory where the file is saved
(III) use "gcc SOMEFILENAME"
(IV)  run a.exe of that file
*/

//#4 what are comments and escape sequences 

->comment: a comment a piece of code ignored by the computer and is ment for the readablity of the user 
        single line comment = //
        mutiline commennt   = /* */
                                     

-> escape sequences : char combination consiting of back slashes \ followed by  a letter or combination of digits.
                     they specify actions within line or string of text 
                     \n = newline 
                     \t = tab (equal spacing between two words or similar)
                     also use to litreally print qutoes and slashes like \\"like pizza prolly"\\ or \'like pizza prolly'\

//#5 variables 

//variable = allocate space  in memory to store a value.
            we reffer to a variabls name to acces s the stored value.
            that variable now behaves as if it was the value it contains.
            BUT we need to declare what type of data we are storing.

int age;      //declaration
x = 123;      //initialization
int y = 321;  //declaration + initialization

int age = 21; //integer
float gpa = 2.05; //flaoting point number
char grade = 'C'; //single character
char name[] = "deez"; //char arrays morden day string

printf("hello %s\n", name);
printf("you are %d years old \n", age);
printf("your avg grade is %c\n",grade);
printf("your gpa is %f\n",gpa);
return 0;

//#6 data types

char a =  //%c
char b[]= //%s

float c = 3.12232323;   //%f
double d = 3.121212121; //%lf

bool e = true; //%d

char f = 100;  //%d or %c
unsigned char g = 255; //%d or %c

short int h = //%d
unsigned short int i = //%u

long long int j = //%lld
unsigned long long int k = //%llu 

//#7 foarmat specifires % = defines and formats a type of data to be displayed

%c  = char
%s  = string (array of characters)
%f  = float
%lf = double
%d  = integer

%.1 = decimal precision
%1  = minumum feild width
%-  = left align

//#5 constants 

-> constants : constants are flixed values which cant be altered by the program during its execution 

float pi = 3.14159; //this is changeble variable whos value can be altered 

const float PI = 3.14159; //this is a now a constant value which can not be changed 
                          // THE NORMAL NAMING CONVENTION OF CONSTANT DATA TYPES ARE ALL CAPS

//#6 arethmetic oprators 

(+) = addition
(-) = substraction
(*) = multiplication
(/) = division
(%) = modulus
(++)= increment
(--)= decrement

//#7 augmented assignment operators = used to replace a statement where an oprator takes a variable 
//                                    as one of its arguments and then assign the result back to the same variable
//                                    x = x + 1
//                                    x +=1

//#8 getting input from the user 

#include <string.h>
    
     char name[25]; //25 bytes 
    int age;

    printf("how old are you?");
    //scanf("%d", &age)
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0'

    printf("how old %d years old", age)
     

//#9 math functions (#include <math.h> )

-> gives access to these functions 

 double A = sqrt(9);   //square roots the number 
 double B = pow(2, 4); //two to the power of four
 int    C = round(3.14)//rounds the number
 int    D = ceil(3.14) //rounds up the number
 int    E = floor(3.14)//rounds down the number 
 double F = fabs(-100) //find absolute of a given number (how far is it from 0)
 double G = log(3)     //logrithm of a number 
 double H = sin(45)    //sin function on the given number
 double I = cos(45)    //cos function on the given number
 double J = tan(45)    //tan function on the given number 

//#Project 1: make a algo to find the area and the circumfrence of a circle

#include <stdio.h>

int main(){
    const double PI = 3.14159
    double double circumfrence 
    double circumfrence;
    double area;

    printf("\n Enter the radius of a circle")
    scanf("\n %lf", &radius)

    circumfrence = 2* PI * radius
    area = PI * radius * radius 

    printf("\n circumfrence:  %lf", cirumfrence);
    printf("\n area: %lf",area);

    return 0;
}

//#Project 2: make a algo to find the hypotenuse of a right angled triangle

#include <stdio.h>

int main(){
    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A)

    printf("Enter side B: ");
    scanf("%lf", &B)

    C = sqrt(A*A + B*B)

    printf("Side C: %lf",C)
}

//#10 if and else statements 

if(age >= 18){
    printf("you are now signed up!")
}
else if(age < 0){
    printf("you havent been born yet!")
}
else if(age ==0){
    printf("you cant signup! you were just born")
}

else{
    printf("youre too young to sign up")
}

//#11 switch statements 

-> switch is a more efficent alternative of using many "else if " statements allows a 
   value to be tested for equility against many cases 

char grade;

printf("\n Enter a letter grade")
scanf("%c", &grade)

switch (grade)
{
case A:
    printf("perfect\n";)
    break;

case B:
    printf("you did good/n")

case C:
    printf("okay grade")

case D:
    printf("almost failed")

case F:
    printf("failed")

default
    printf("enter a valid grade")
    break;
}

//#12 logical operators 

=> && = and 
=> || = or 
=> != = not equals to 

// logic operators = && (AND) cheks if two conditions are true

float temp = 25;
bool sunny = false;

if (temp >= 0 && temp <= 30 && sunny == true)
{
    printf("the weather is good \n")
}
else
{
    printf("\n the weather is not good")
}

// logic operators = || (OR) checks if at least one condition is true

float temp = -1000;

if (temp <= 0 || temp >= 30)
{
    printf("the weather is good \n")
}
else
{
    printf("\n the weather is not good")
}

// logical operators = ! (NOT) reverses the state of a condition

bool sunny = true

if(!sunny){
    printf("\n It's sunny outside!")
}
else{
    printf("\n It's sunny outside")
}

//#13 functions in c

void birthday()
{
    printf("\n Happy Birthday to you!")
    printf("\n Happy Birthday to you!")
    printf("\n Happy Birthday to you!")
    printf("\n Happy Birthday to you!")
}

int main()
{
    birthday();
    birthday();
    birthday();
}



abc 