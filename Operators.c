// C Operators
// An operator is a symbol that tells the C compiler to perform a specific operation on one or more operands.
// Example: 
// int sum = 10 + 20;

// Here:

// | Part      | Technical Term        | Meaning                              |
// | --------- | --------------------- | ------------------------------------ |
// | `10`      | Operand               | First value                          |
// | `+`       | Operator              | Addition operator                    |
// | `20`      | Operand               | Second value                         |
// | `10 + 20` | Expression            | Combination of operands and operator |
// | `sum`     | Identifier / Variable | Stores the result                    |


// Classification of Operators in C

// C operators can be organized into these major categories:

// | Category                | Operators              | Main Purpose                          |    |                               |
// | ----------------------- | ---------------------- | ------------------------------------- | -- | ----------------------------- |
// | Arithmetic Operators    | `+ - * / %`            | Mathematical calculations             |    |                               |
// | Relational Operators    | `== != > < >= <=`      | Compare values                        |    |                               |
// | Logical Operators       | `&&                    |                                       | !` | Combine or reverse conditions |
// | Assignment Operators    | `= += -= *= /= %= ...` | Assign/update values                  |    |                               |
// | Increment/Decrement     | `++ --`                | Increase/decrease by 1                |    |                               |
// | Bitwise Operators       | `& \| ^ ~ << >>`       | Work with individual bits             |    |                               |
// | Conditional Operator    | `?:`                   | Short form of `if-else`               |    |                               |
// | `sizeof` Operator       | `sizeof`               | Find size in bytes                    |    |                               |
// | Comma Operator          | `,`                    | Evaluate expressions sequentially     |    |                               |
// | Address-of Operator     | `&`                    | Obtain address of an object           |    |                               |
// | Indirection/Dereference | `*`                    | Access value through a pointer        |    |                               |
// | Member Access           | `.`                    | Access structure/union member         |    |                               |
// | Pointer Member Access   | `->`                   | Access member through pointer         |    |                               |
// | Array Subscript         | `[]`                   | Access array element                  |    |                               |
// | Function Call           | `()`                   | Call a function                       |    |                               |
// | Type Cast               | `(type)`               | Convert an expression to another type |    |                               |


// Arithmetic Operators

// Arithmetic operators perform mathematical calculations.


// | Operator | Technical Name             | Operation         | Example |
// | -------- | -------------------------- | ----------------- | ------- |
// | `+`      | Addition Operator          | Adds values       | `a + b` |
// | `-`      | Subtraction Operator       | Subtracts values  | `a - b` |
// | `*`      | Multiplication Operator    | Multiplies values | `a * b` |
// | `/`      | Division Operator          | Divides values    | `a / b` |
// | `%`      | Modulus/Remainder Operator | Gives remainder   | `a % b` |




// #include <stdio.h>

// int main(){
//     printf("Addition\n");
//     int A = 10;
//     double B = 10.000;
   
//     printf("Addition of Two Numbers:%f\n", A+B);


//     printf("Sustraction\n");
//     float X = 20.5;
//     int Y = 20;
    
//     printf("%.2f\n",X-Y);
    
//     printf("Multiplication\n");
//     double Num = 10.21345;
//     int N = 10;

//     printf("%.2lf\n",Num*N);

//     printf("Division\n");

//     int Salary = 550000;
//     int Months = 12;

//     printf("Per Month Salary is:%d\n",Salary / Months);

//     printf("Moduls\n");

//     int P = 10;
//     int Q = 2;

//     printf("Moduls of two numbers:%d\n",P%Q);

    

//     return 0;
// }


// Important: Integer Division
// int result = 10 / 3;

// Result:

// 3

// Not:

// 3.333333

// Because both operands are integers.

// To get a floating-point result:

// double result = 10.0 / 3.0;

// Result is approximately:

// 3.333333
// 4. Modulus %

// The % operator gives the remainder after integer division.

// 10 % 3

// means:

// 10 ÷ 3

// Quotient = 3
// Remainder = 1

// Therefore:

// 10 % 3 = 1
// Common uses

// Checking even/odd:

// if (number % 2 == 0)
// {
//     printf("Even");
// }

// Checking divisibility:

// if (number % 5 == 0)
// {
//     printf("Divisible by 5");
// }














// Unary + and -

// #include <stdio.h>

// int main(){

//     int Num = 10;
//     printf("%d\n",+Num);
//     printf("%d\n",-Num);
//     return 0;
// }

// | Operator | Technical Name       | Meaning                  |
// | -------- | -------------------- | ------------------------ |
// | `+x`     | Unary Plus Operator  | Indicates positive value |
// | `-x`     | Unary Minus Operator | Negates the value        |













// Relational Operators

// Relational operators compare two values.


// | Operator | Technical Name                 | Meaning               |
// | -------- | ------------------------------ | --------------------- |
// | `==`     | Equality Operator              | Equal to              |
// | `!=`     | Inequality Operator            | Not equal to          |
// | `>`      | Greater-Than Operator          | Greater than          |
// | `<`      | Less-Than Operator             | Less than             |
// | `>=`     | Greater-Than-or-Equal Operator | Greater than or equal |
// | `<=`     | Less-Than-or-Equal Operator    | Less than or equal    |


// #include <stdio.h>

// int main(){

//     int Num1 = 10;
//     int Num2 = 20;

//     printf("%d\n",Num1<Num2);
//     printf("%d\n",Num2>Num1);
//     printf("%d\n",Num1==Num2);
//     printf("%d\n",Num1!=Num2);


//     printf("%d\n",Num1>=Num2);
//     printf("%d\n",Num2>=Num1);
//     printf("%d\n",Num1<=Num2);
    
//     return 0;
// }







// Logical Operators

// Logical operators are mainly used with conditions.

// | Operator | Technical Name       | Meaning                      |                     |                                     |
// | -------- | -------------------- | ---------------------------- | ------------------- | ----------------------------------- |
// | `&&`     | Logical AND Operator | Both conditions must be true |                     |                                     |
// | `        |                      | `                            | Logical OR Operator | At least one condition must be true |
// | `!`      | Logical NOT Operator | Reverses logical value       |                     |                                     |



// #include <stdio.h>

// int main(){

//     int Age = 18;
//     if(Age >= 18 && Age <= 60)
//     {
//         printf("Age is Valid for Licience\n");
//     }
    
//     return 0;
// }

// true && false → false
// false && true → false
// false && false → false
// true && true →    true






// #include <stdio.h>

// int main()
// {

//     int Age = 15;
//     if(Age == 12 || Age < 12)
//     {
//         printf("Kid\n");
//     }
//     else{
//         printf("Adult\n");
//     }
//     return 0;
// }


// Only one condition needs to be true.

// true || false → true
// false || true → true
// false || false → false







// #include <stdio.h>
// int main()
// {

//     int Number = 101;
//     printf("%d\n",!Number);
//     return 0;
// }

// !true → false
// !false → true



// Assignment Operators


// Assignment operators assign or update values.

// | Operator | Technical Name                     | Equivalent                     |        |    |
// | -------- | ---------------------------------- | ------------------------------ | ------ | -- |
// | `=`      | Assignment Operator                | `a = b`                        |        |    |
// | `+=`     | Addition Assignment Operator       | `a = a + b`                    |        |    |
// | `-=`     | Subtraction Assignment Operator    | `a = a - b`                    |        |    |
// | `*=`     | Multiplication Assignment Operator | `a = a * b`                    |        |    |
// | `/=`     | Division Assignment Operator       | `a = a / b`                    |        |    |
// | `%=`     | Modulus Assignment Operator        | `a = a % b`                    |        |    |
// | `<<=`    | Left-Shift Assignment Operator     | `a = a << b`                   |        |    |
// | `>>=`    | Right-Shift Assignment Operator    | `a = a >> b`                   |        |    |
// | `&=`     | Bitwise AND Assignment Operator    | `a = a & b`                    |        |    |
// | `^=`     | Bitwise XOR Assignment Operator    | `a = a ^ b`                    |        |    |
// | `=`      | Bitwise OR Assignment Operator     | `a = a | b`                    |        |    |


// Assignment Operator
// #include <stdio.h>

// int main()
// {   
//     int Num = 10;
//     int Num2 = Num;
//     printf("%d\n",Num2);
//     return 0;
// }





// Addition Assignment Operator

// #include <stdio.h>

// int main (){

//     int a = 10;
//     int b = 20;
//     printf("%d\n",b+=a);
//     return 0;
// }

// Subtraction Assignment Operator


// #include <stdio.h>
// int main()
// {   
//     int Num1 = 10;
//     int Num2 = 20;

//     printf("%d\n",Num1-=Num2);
//     return 0;
// }


// Left Shift <<

// #include <stdio.h>
// int main()
// {
//     int A = 10;
//     printf("%d\n",A<<1);
//     return 0;
// }

// Right Shift >>

// #include <stdio.h>

// int main()
// {
//     int b = 101;
//     printf("%d\n",b>>1);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int a = 5;

//     printf("Original: %d\n", a);
//     printf("Left shift by 1: %d\n", a << 1);
//     printf("Left shift by 2: %d\n", a << 2);

//     return 0;
// }


// Bitwise AND &

// Rule:
// 1 & 1 = 1
// 1 & 0 = 0
// 0 & 1 = 0
// 0 & 0 = 0

// 5 = 0101
// 3 = 0011
//     ----
// &   0001
//     ----
    // 1

// #include <stdio.h>

// int main()
// {   int a = 10;
//     int b = 10;
//     printf("%d\n",a & b);
//     return 0;
// }


// Bitwise OR |
// 1 | 1 = 1
// 1 | 0 = 1
// 0 | 1 = 1
// 0 | 0 = 0


// 5 = 0101
// 3 = 0011
//     ----
// |   0111
//     ----
//     7


// #include <stdio.h>
// int main()
// {   
//     int m = 1;
//     int n = 2;
//     printf("%d\n",m | n);

//     return 0;
// }


// Bitwise XOR ^

// XOR means Exclusive OR.

// The result is 1 when the two bits are different.

// 1 ^ 1 = 0
// 1 ^ 0 = 1
// 0 ^ 1 = 1
// 0 ^ 0 = 0

// 5 = 0101
// 3 = 0011
//     ----
// ^   0110
//     ----
//     6


// #include <stdio.h>
// int main()
// {   
//     int p = 101;
//     int q = 10;
//     printf("%d\n",p^q);
//     return 0;
// }

// Quick comparison

// Using:

// a = 5 = 0101
// b = 3 = 0011


// | Operator | Binary Result | Decimal |
// | -------- | ------------- | ------: |
// | `a & b`  | `0001`        |     `1` |
// | `a \| b` | `0111`        |     `7` |
// | `a ^ b`  | `0110`        |     `6` |


// Bitwise Assignment Operators

// | Operator | Meaning                | Equivalent   |
// | -------- | ---------------------- | ------------ |
// | `&=`     | Bitwise AND assignment | `a = a & b`  |
// | `\|=`    | Bitwise OR assignment  | `a = a \| b` |
// | `^=`     | Bitwise XOR assignment | `a = a ^ b`  |
// | `<<=`    | Left shift assignment  | `a = a << b` |
// | `>>=`    | Right shift assignment | `a = a >> b` |



// Bitwise AND assignment
// #include <stdio.h>
// int main()
// {  
//     int Number1 = 10;
//     int Number =  1;
//     Number1 &= Number;
//     printf("%d\n",Number1); 
//     return 0;
// }

// Bitwise OR assignment 

// #include <stdio.h>
// int main()
// {
//     int x = 2;
//     int y = 1;
//     x |= y;
//     printf("%d\n",x);
// }


// XOR Assignment ^=

// #include <stdio.h>

// int main()
// {
//     int A = 10;
//     int B = 2;
//     printf("%d\n",A^=B);
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int a = 5;
//     int b = 3;
//     printf("Bitwise Operator\n");
//     printf("a & b = %d\n", a & b);
//     printf("a | b = %d\n", a | b);
//     printf("a ^ b = %d\n", a ^ b);
//     printf("Bitwise Assignment operator\n");
//     a = 5;
//     a &= b;
//     printf("a &= b: %d\n", a);

//     a = 5;
//     a |= b;
//     printf("a |= b: %d\n", a);

//     a = 5;
//     a ^= b;
//     printf("a ^= b: %d\n", a);

//     return 0;
// }

// Easy memory trick
// AND  &  → Both bits must be 1
// OR   |  → At least one bit must be 1
// XOR  ^  → Bits must be different

// And:

// a &= b  → a = a & b
// a |= b  → a = a | b
// a ^= b  → a = a ^ b

