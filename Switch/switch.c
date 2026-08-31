// switch Statement in C

// The switch statement is used when you want to choose one option from multiple fixed choices.

// It is especially useful for menu-based programs.


// Why switch?

// Suppose you want:

// 1 → Add
// 2 → Subtract
// 3 → Multiply
// 4 → Divide

// You could use many if-else statements, but switch makes this type of logic cleaner.

    //          choice
    //             ↓
    //    ┌────────┼────────┐
    //    ↓        ↓        ↓
    //   case 1   case 2   case 3
    //    ↓        ↓        ↓
    //   Add    Subtract  Multiply


//     Basic Syntax

// switch (expression)
// {
//     case value1:
        // code
//         break;

//     case value2:
        // code
//         break;

//     default:
        // code
// }

// Important parts

// | Keyword   | Purpose                    |
// | --------- | -------------------------- |
// | `switch`  | Starts the selection       |
// | `case`    | Specifies a possible value |
// | `break`   | Exits the switch           |
// | `default` | Runs when no case matches  |



// #include <stdio.h>

// int main()
// {
//     int day = 10;

//     switch (day)
//     {
//         case 1:
//             printf("Monday");
//             break;

//         case 2:
//             printf("Tuesday");
//             break;

//         default:
//             printf("Invalid day");
//     }

//     return 0;
// }


// Taking User Input

// #include <stdio.h>

// int main()
// {
//     int Day;
//     printf("Enter No to Known Day:");
//     scanf("%d",&Day);

//     switch (Day)
//     {

//     case 1:
//         printf("Monday\n");
//         break;

//     case 2:
//         printf("Tuesday\n");
//         break;

//     case 3:
//         printf("Wendsday\n");
//         break;

//     case 4:
//         printf("Thrsday\n");
//         break;

//     case 5:
//         printf("friday\n");
//         break;

//     case 6:
//         printf("Saturday\n");
//         break;

//     case 7:
//         printf("Sunday\n");
//         break;
    
//     default:
//     printf("Invalid Day\n");
//         break;
//     }

//     return 0;
// }

// How it works:

// day = 2
//   ↓
// switch(day)
//   ↓
// case 1? → No
//   ↓
// case 2? → Yes
//   ↓
// "Tuesday"
//   ↓
// break
//   ↓
// exit switch


// Calculator Using switch

// #include <stdio.h>
// int main(){

//     int a,b;
//     char Operator;

//     printf("Enter First Number: ");
//     scanf("%d", &a);

//     printf("Enter Operator: ");
//     scanf(" %c", &Operator);

//     printf("Enter Second Number: ");
//     scanf("%d", &b);

//     switch (Operator)
//     {
//     case '+':
//         printf("Addition Of Two Numbers Is:%d\n",a+b);
//         break;
    
//     case '-':
//         printf("Substraction Of Two Number is:%d\n",a-b);
//         break;
    
//     case '*':
//         printf("Multiplication of Two Numbers is:%d",a*b);
//         break;
//     case '/':
//         printf("Division of Two Numbers is:%d",a/b);
//         break;
//     case '%':
//         printf("Moduls of two Numbers is:%d",a%b);
//         break;
    
//     default:
//         printf("Invalid Operator\n");
//         break;
//     }

//     return 0;
// }

// Fix

// Add a space before %c:

// scanf(" %c", &Operator);

// The space tells scanf():

// Skip any whitespace (spaces, tabs, newlines) and then read the character.


// Multiple Cases Can Share Code



// You can have multiple cases execute the same code.

// For example, checking weekdays vs weekend:


#include <stdio.h>

int main()
{   
    int Day = 6;

    switch (Day)
    {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        printf("Weeak Day\n");
        break;
    case 6:
    case 7:
        printf("Weekend!!\n");
        break;
    
    default:
        break;
    }
    return 0;
}


// If day is 6:

// case 6
//   ↓
// case 7
//   ↓
// "Weekend"
//   ↓
// break

// There is no code between case 6 and case 7, so both cases share the same code.


// What Can switch Use?

// For basic C, think of switch as being used with integral values, such as:

// int
// char
// enum

// Example with char:

// char grade = 'A';

// switch (grade)
// {
//     case 'A':
//         printf("Excellent");
//         break;

//     case 'B':
//         printf("Good");
//         break;

//     default:
//         printf("Other grade");
// }

// A switch is not used directly with strings.


// switch vs if-else

// | `if-else`                   | `switch`                     |                  |                                 |
// | --------------------------- | ---------------------------- | ---------------- | ------------------------------- |
// | Good for ranges             | Good for fixed choices       |                  |                                 |
// | Supports complex conditions | Matches specific case values |                  |                                 |
// | Can use `&&`, `             |                              | `, `<`, `>` etc. | Case labels are constant values |
// | More flexible               | Often cleaner for menus      |                  |                                 |


// Example where if is better:
// if (marks >= 90)

// This checks a range.

// Example where switch is better:
// switch (choice)
// {
//     case 1:
//     case 2:
//     case 3:
// }

// This checks specific choices.





// Important Rules

// Rule 1 — case values must be constant expressions

// Good:

// case 1:
// case 2:
// case 'A':
// Rule 2 — Case values must be unique

// Don't do:

// case 1:
// case 1:
// Rule 3 — break is optional syntactically

// But if you don't want fall-through, use it.

// Rule 4 — default is optional

// But it's usually good practice to handle unexpected values.



// 🧠 Remember
// switch
//    ↓
// expression
//    ↓
// ┌───────────────┐
// │ Match a case? │
// └───────┬───────┘
//         ↓
//       case
//         ↓
//       code
//         ↓
//      break
//         ↓
//   exit switch


// Quick rule:
// if-else → conditions and ranges

// switch → fixed choices



// 📝 Practice

// Write these programs yourself:

// Print day name using switch.
// Print month name using switch.
// Create a calculator using +, -, *, /.

// Create a menu:

// 1. Add
// 2. Subtract
// 3. Multiply
// 4. Divide
// Check whether a day is weekday/weekend.
// Create a grade program using A, B, C, D, F.
// Create a simple food menu using numbers.
// Create a program that takes a character and identifies whether it is a vowel using switch.
// ⭐ Challenge

// Create:

// ===== MENU =====
// 1. Check Even/Odd
// 2. Check Positive/Negative
// 3. Find Square
// 4. Exit

// Use switch to implement the menu.