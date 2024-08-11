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

//#14 arguments 

void birthday(char x[], int y){
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!",age);
}

int main()
{
    char name[] = "Bro"
    int age     = 21;

    birthday(name, age);

    return 0;
}

//#15 return statement 

double square(double x)
{
    return x*x 
}

int main()
{
    double x = square(3.14)
    printf("%lf",x);
}

//#15 ternary operators

int findmax(int x, int y){
    //ternary operators = shortcut to if/else when assigning/returning a value
    //(condition) ? value if true : value if false
    

    if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }

    return (x > y) ? x : y
}

int main()
{
    int max = findmax(5, 4)
    printf("%d", max)

}

//#16 function prototypes

void hello(char[], int);    //this is a function prototype
 
int main(){

    // what is it?
    //function declaration, w/o a body, before main()
    //ensure that calls to a function are made with the correct arguments
    
    //IMP NOTES
    //Many C compilers do not check for parameter matching
    //missing arguments will result in unexpected behaviour
    // A function prototype causes the compiler to flag an error if arguments are missing 
    
    char name[] = "bro";
    int age = 21;


    hello(name);
    return 0;
}

void hello(char name[], int age);
{
    printf("%s", name);
    printf("%d", age);
}

//#17 string functions

char str1[] = "bro";
char str2[] = "code";

/*1*/strlwr(str1); //converts the string to lowercase
/*2*/strupr(str1); //convetrs the string to uppercase

/*3*/strcat(str1, str2); //concatinate the first string to the last
/*4*/strncat(str1, str2 , 2); //concatinate the given numbers of strings from second to first 

/*5*/strcpy(str1, str2); //copy str2 to str1
/*6*/strncpy(str1, str2, 4); // copy n characters of strings2 to string1

/*7*/strset(str1, '?'); //sets all char of the strings to a given character
/*8*/strnset(str1, 'x', 1);//set n char of the string to a given character

/*9*/strrev(str1); //reverses  string

/*10*/int result = strlen(str1); //result is the length of the strings
/*11*/int result = strcmp(str1, str2); //compares two strings 

/*12*/int result = strncmp(str1, str2, 1); //string compare n characters
/*13*/int result = strcmpi(str1, str2) //string compare all (ignore lowercases)
/*14*/int result = strnicmp(str1, str2, 1) //string compare n characters (ignore cases)

//#18 for loops 

//for loops = repeats a section of code a limited times

for(int i = 1; i <= 10; i++)
{
    printf("%d\n",i)
}

//#19 while loops

int main()
{
    //while loop = repeats a section of code possibly unlimited times.
    //WHILE some conditions remains true
    //a while loop may not exceute at all

    char name[25];

    printf("\n what is your name?: ");
    fgets(name, 25, stdin);
    name[strlen(name) - 1] = '\0';

    while (strlen(name) == 0)
    {
        printf("\n you did not enter you name");

        printf("what is your name?: ")
        fgets(name, 25, stdin);
        name[strlen(name) - 1] = '\0';
    }
    

    return 0;
}

//#20 do while loops 

int main()
{
    // while loop = check a condition, THEN excecutes a block of code if condition is true
    // do while loops = always executes a block of code once, then checks the condition

    int number = 0;
    int sum = 0;

    do{
        printf("enter a # above 0: ")
        scanf("%d", &number)
        if(number > 0)
        {
            sum +=
        }
    }while (number > 0)
    
    printf("sum: %d", sum)
    
}

//#21 nested loops 

int rows;
int columns;
char symbol;
printf("\n Enter # of rows: ")
scanf("%d", &rows);

printf("\n Enter # of rows: ")
scanf("%d", &columns);

scanf("%c",&symbol)

for (int i = 1; i <= rows; i++)
{
    for (int j = 1; i <= columns; i++)
    {
        printf("%c", symbol);
    }
    printf("\n") 
}

//#22 continue and break statements

int main()
{
    //continue = skip rest of code & forces the next iteration of the loop
    //break = exits a loop/switch

    for (int i = 1; i <= 20; i++) //continue
    {
        if (i == 13)
        {
            continue;
        }
        printf("%d\n", i); 
    }
    
    return 0;

    for (int i = 1; i <=20; i++) //break
    {
        if (i == 13)
        {   
            break;
        }
        printf("%d\n", i);
    }
    
}

//#23 arrays

//array = a data structure that can store many values of the same data type

double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0}

printf("$%.2lf", prices[])

char name[] = "cuh" // this is a string (c language array of char)
                    // not to confuse it with arrays


//#24 printing arrays with loops

double prices[] = {5.0, 10.0, 15.0, 20.0, 25.0}


//printf("%d bytes\n", sizeof(prices));

for(int i = 0; i < sizeof(prices)/sizeof(prices[0]); i++)
{
    printf("$%.2f\n", prices[i])
}

//#25 2D arrays

/*
int numbers[2][3] = {
                        {1 , 2, 3},
                        {4 , 5, 6}
}
*/

int numbers[3][3];

int rows = sizeof(numbers)/sizeof(numbers[0])
int colums = sizeof(numbers[0])/sizeof(numbers[0][0])

numbers[0][0] = 10;
numbers[0][1] = 1;
numbers[0][2] = 22;
numbers[1][0] = 33;
numbers[1][1] = 56;
numbers[1][2] = 12;
numbers[2][0] = 23;
numbers[2][1] = 42;
numbers[2][2] = 87;

for (int i = 0; i < rows; i++)
{
    for (int j = 0; i < columns; j++)
    {
        printf("%d", numbers[i][j]);
    }
    printf("\n");
}

//#26 array of strings

int main() {
    char cars[][10] = {"mustang","corvette","camaro"}

    //cars[0] = "tesla"
    strcpy(cars[0], "Tesla");

    for(int i = 0; i < sizeof(cars)/sizeof(cars[0]); i++)
    {
        printf("%s\n", cars[i])
    }
}


//#27 swapping variables 


 int main()
 {
    char x[] = "water";
    char y[] = "lemonade";
    char temp[15];

    strcpy(temp, x)
    strcpy(x, y)
    strcpy(y, temp)

    printf("x = %c\n", x);
    printf("x = %c\n", y);
 }

 //#28 sort an array

 <stdio.h>

void sort(char array[], int size)
{
   for(int i = 0; i < size - 1; i++)
   {
      for(int j = 0; j < size - i - 1; j++)
      {
         if(array[j] > array[j+1])
         {
            int temp = array[j];
            array[j] = array[j+1];
            array[j+1] = temp;
         }
      }
   }
}

void printArray(char array[], int size)
{
   for(int i = 0; i < size; i++)
   {
      printf("%c ", array[i]);
   }
}

int main()
{ 
   //int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
   char array[] = {'F', 'A', 'D', 'B', 'C'};
   int size = sizeof(array)/sizeof(array[0]);

   sort(array, size);
   printArray(array, size);
 
   return 0; 
}

//#29 structure 

struct Player
{
   char name[12];
   int score;
};

int main()
{
   // struct = collection of related members ("variables") 
   //          they can be of different data types
   //          listed under one name in a block of memory
   //          VERY SIMILAR to classes in other languages (but no methods)

   struct Player player1;
   struct Player player2;

   strcpy(player1.name, "Bro");
   player1.score = 4;

   strcpy(player2.name, "Bra");
   player2.score = 5;

   printf("%s\n", player1.name);
   printf("%d\n", player1.score);

   printf("%s\n", player2.name);
   printf("%d\n", player2.score);

   return 0;
}

//#30 type def

//typedef char user[25];

typedef struct
{
   char name[25];
   char password[12];
   int id;
} User;

int main() 
{
   // typedef = reserved keyword that gives an existing datatype a "nickname"

   User user1 = {"Bro", "password123", 123456789};
   User user2 = {"Bruh", "password321", 987654321};

   printf("%s\n", user1.name);
   printf("%s\n", user1.password);
   printf("%d\n", user1.id);
   printf("\n");
   printf("%s\n", user2.name);
   printf("%s\n", user2.password);
   printf("%d\n", user2.id);

   return 0; 
}

//#31 array of structs 

struct Student
{
   char name[12];
   float gpa;
};

int main()
{
   struct Student student1 = {"Spongebob", 3.0};
   struct Student student2 = {"Patrick", 2.5};
   struct Student student3 = {"Sandy", 4.0};
   struct Student student4 = {"Squidward", 2.0};

   struct Student students[] = {student1, student2, student3, student4};

   for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
   {
      printf("name:%-12s\t", students[i].name);
      printf("gpa: %.2f\n", students[i].gpa);
   }

   return 0;
}

//#32 enums
















