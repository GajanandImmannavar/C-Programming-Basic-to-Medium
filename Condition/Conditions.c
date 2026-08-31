// Conditions — if, else, else-if, Nested if

// Conditions allow a C program to make decisions based on whether something is true or false.

// Condition
//     ↓
//  ┌───────┐
//  │ True? │
//  └───┬───┘
//      ↓
//   Yes / No
//      ↓
//  Execute appropriate code
// 1. if Statement

// Used when you want to execute code only when a condition is true.

// Syntax
// if (condition)
// {
    // code
// }




// Example


// #include <stdio.h>

// int main()
// {
//     int age = 18;
//     if(age>=18)
//     {
//         printf("Your Adult\n");
    
//     }
//     else{
//         printf("Kid\n");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main(){
// int Number = 10;

// int User;

// printf("Enter Number if you your Number Match Hidden Number you will win: ");
// scanf("%d",&User);
// if(Number == User)
// {
//     printf("Your winner!!\n");
// }
// else{
//     printf("Sorry!!\n");
// }
// return 0;
// }

// if-else

// Used when there are two possible paths.


// Syntax
// if (condition)
// {
    // true
// }
// else
// {
    // false
// }

// #include <stdio.h>
// int main()
// {   

//     int marks;
//     printf("Enter Marks to Check Status:");
//     scanf("%d",&marks);

//     if(marks>=35)
//     {
//         printf("Your Pass\n");
//     }
//     else{
//         printf("Sorry!\n");
//     }
//     return 0;
// }


// else-if

// Used when you have multiple conditions.


// #include <stdio.h>
// int main()
// {   
//     float hight;
//     int age;
//     printf("Enter hight:");
//     scanf("%f",&hight);
//     printf("Enter age:");
//     scanf("%d",&age);
//     if(hight==10 && age == 10)
//     {
//         printf("Good fit\n");
//     }

//     else if (hight>10 && age >15)
//     {
//         printf("best fit\n");
//     }

//     else if (hight<10 && age<10)
//     {
//         printf("Not eligible\n");
//     }
    
//     return 0;
// }


// Nested if

// An if inside another if is called a nested if.

// Logic:

// Age >= 18?
//    │
//  ┌─┴─┐
// Yes  No
//  │    │
// ID?  Not eligible
//  │
//  ├── Yes → Entry allowed
//  └── No  → ID required


// #include <stdio.h>

// int main()
// {   
//     int Age;
//     int Id;
//     printf("Enter Age:");
//     scanf("%d",&Age);
//     printf("Enter Id:");
//     scanf("%d",&Id);

//     if(Age>=18)
//     {
//         if(Id == 101)
//         {
//             printf("Allowd\n");
//         }
//         else{

//             printf("Id required\n");

//         }
//     }
//     else{
//         printf("Not Allowed, Please meet Host for further Information\n");
//     }
//     return 0;
// }

// Multiple Conditions with &&

// && means AND.

// Example:

// if (age >= 18 && age <= 60)
// {
//     printf("Eligible");
// }

// Both conditions must be true.

// age >= 18  → TRUE
// age <= 60  → TRUE
//               ↓
//            Eligible
// 7. Multiple Conditions with ||

// || means OR.

// if (day == 6 || day == 7)
// {
//     printf("Weekend");
// }

// Only one condition needs to be true.

// 8. ! — NOT

// ! reverses a condition's truth value.

// if (!(age >= 18))
// {
//     printf("Minor");
// }

// If age >= 18 is false, !(age >= 18) becomes true.

// 9. C Uses 0 and Non-Zero for Conditions

// In C:

// 0       → false
// non-zero → true

// Example:

// if (0)
// {
//     printf("Hello");
// }

// Nothing is printed.

// But:

// if (5)
// {
//     printf("Hello");
// }

// prints:

// Hello

// This becomes important later when learning pointers and other C concepts.

// 10. if with Assignment Mistake ⭐

// Be careful with:

// if (x = 10)

// This is an assignment, not a comparison.

// Usually you want:

// if (x == 10)

// Remember:

// =   → assignment
// ==  → comparison
// 11. Curly Braces {}

// Use braces to clearly define the block:

// if (age >= 18)
// {
//     printf("Adult");
//     printf("Eligible");
// }

// Without braces:

// if (age >= 18)
//     printf("Adult");

// printf("Done");

// Only the first statement belongs to the if.

// For beginners, always use braces.

// if vs else-if vs Nested if

// | Structure   | Use                                      |
// | ----------- | ---------------------------------------- |
// | `if`        | One condition                            |
// | `if-else`   | Two possible paths                       |
// | `else-if`   | Multiple alternative conditions          |
// | Nested `if` | A condition depends on another condition |

// 🧪 Practice

// Write these programs yourself.

// Basic
// Check whether a number is positive.
// Check whether a number is negative or positive.
// Check whether a number is even or odd.
// Check whether a person is eligible to vote.
// Find the larger of two numbers.
// Medium
// Find the largest of three numbers.
// Check whether a number is divisible by both 3 and 5.
// Check whether a year is a leap year.
// Calculate grade using else-if.
// Check whether a number is positive, negative, or zero.
// Nested if
// Check age and ID for entry.
// Check username/password using nested conditions.
// Check whether a student passed and then determine their grade.
// Challenge
// Take three numbers and find the largest without using a built-in function.
// Take a number and determine whether it is:
// Positive even
// Positive odd
// Negative even
// Negative odd
// Zero

// 🧠 Quick Reference

// if
//  ↓
// One condition

// if + else
//  ↓
// Two paths

// if + else-if + else
//  ↓
// Multiple paths

// nested if
//  ↓
// Condition inside condition

// &&
//  ↓
// AND

// ||
//  ↓
// OR

// !
//  ↓
// NOT