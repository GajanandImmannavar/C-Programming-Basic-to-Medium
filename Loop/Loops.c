// Loops in C

// A loop allows you to execute the same block of code repeatedly while a condition is satisfied.

// Without a loop:

// printf("1\n");
// printf("2\n");
// printf("3\n");
// printf("4\n");
// printf("5\n");

// With a loop:

// for (int i = 1; i <= 5; i++)
// {
//     printf("%d\n", i);
// }
// Basic idea
// Start
//   ↓
// Check condition
//   ↓
// True? ── No ──→ End
//   │
//  Yes
//   ↓
// Execute code
//   ↓
// Update
//   ↓
// Check condition again



// 1. Types of Loops
// C has three main loops:


// | Loop       | Best used when                                        |
// | ---------- | ----------------------------------------------------- |
// | `for`      | You know or can express the iteration pattern clearly |
// | `while`    | Repetition depends mainly on a condition              |
// | `do-while` | The code must execute at least once                   |



// for Loop ⭐
// The for loop is commonly used for counting and array traversal.


// Syntax
// for (initialization; condition; update)
// {
    // code
// }

// #include <stdio.h>

// int main()
// {   
//     int Number = 10;
//     for(int i=0;i<=10;i++)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }


// Understanding the for Loop

// Look at:

// for (int i = 1; i <= 5; i++)

// There are three parts:

// int i = 1
//     ↓
// Initialization

// i <= 5
//     ↓
// Condition

// i++
//     ↓
// Update

// Execution:

// i = 1
//  ↓
// 1 <= 5 → true → print 1
//  ↓
// i++
//  ↓
// i = 2
//  ↓
// 2 <= 5 → true → print 2
//  ↓
// ...
//  ↓
// i = 6
//  ↓
// 6 <= 5 → false
//  ↓
// End



// Even or Odd


// #include <stdio.h>

// int main()
// {  
//     for(int i=0; i<=10;i++)
//     {
//         if (i % 2 == 0)
//         {
//             printf("Even:%d\n",i);
//         }
//     }
//     return 0;
// }


// Print Numbers in Reverse

// #include <stdio.h>

// int main()
// {
//     for(int i=10;i>=0;i--)
//     {
//         printf("%d\n",i);
//     }
//     return 0;
// }


// while Loop

// A while loop repeatedly executes code while a condition is true.

// Syntax
// while (condition)
// {
    // code
// }



// #include <stdio.h>

// int main()
// {   
//     int Num = 0;

//     while(Num<=10)
//     {
//         printf("%d\n",Num);
//         Num++;
        
//     }

//     return 0;
// }

// How while Works
// i = 1
//  ↓
// i <= 5?
//  ↓ Yes
// Print i
//  ↓
// i++
//  ↓
// Check again
// 
// When:
// 
// i = 6
// 
// the condition becomes false:
// 
// 6 <= 5 → false
// 
// and the loop ends.


// Important: Update Your Variable

// Be careful:

// int i = 1;

// while (i <= 5)
// {
//     printf("%d", i);
// }

// This creates an infinite loop because i never changes.

// Correct:

// int i = 1;

// while (i <= 5)
// {
//     printf("%d", i);
//     i++;
// }



// do-while Loop

// A do-while loop executes the body at least once.

// Syntax
// do
// {
    // code
// }
// while (condition);


// #include <stdio.h>

// int main()
// {   
    
//     int i = 0;

//     do{
//         printf("%d\n",i);
//         i++;
//       }


//     while(i<=100);
//     return 0;
// }


// Difference Between while and do-while ⭐

// Consider:
// int i = 10;


// while

// while (i <= 5)
// {
//     printf("%d", i);
// }

// Output:

// Nothing

// Because the condition is checked before the body.

// do-while

// do
// {
//     printf("%d", i);
// }
// while (i <= 5);

// Output:

// 10

// Because the body runs before the condition is checked.

// Remember
// while
//  ↓
// check → execute

// do-while
//  ↓
// execute → check


// for vs while vs do-while

// | Feature               | `for`           | `while`               | `do-while`        |
// | --------------------- | --------------- | --------------------- | ----------------- |
// | Condition checked     | Before body     | Before body           | After body        |
// | Minimum executions    | 0               | 0                     | 1                 |
// | Common use            | Counting        | Condition-based loops | Must execute once |
// | Initialization/update | Often in header | Usually separate      | Usually separate  |



// Nested Loops

// A loop inside another loop is called a nested loop.

// Example
// #include <stdio.h>

// int main()
// {
//     for (int i = 1; i <= 3; i++)
//     {
//         for (int j = 1; j <= 3; j++)
//         {
//             printf("* ");
//         }

//         printf("\n");
//     }

//     return 0;
// }
// Think:

// Outer loop
//    ↓
//  ┌─────────────┐
//  │ Inner loop  │
//  │ Inner loop  │
//  │ Inner loop  │
//  └─────────────┘
//    ↓
// Next outer iteration

// Nested loops become important for patterns, matrices, and some DSA problems.



// Sum of Numbers

// #include <stdio.h>

// int main()
// {   
//     int sum = 0;
//     for (int i=0; i<=10;i++)
//     {
//         sum +=i;
//         printf("Sum of Numbers:%d\n",sum);
//     }
//     return 0;
// }



// #include <stdio.h>

// int main()
// {   
//     int Num = 2;
//     for(int i=1; i<=10;i++)
//     {
//         printf("%d * %d = %d\n",Num,i,Num*i);
//     } 
//     return 0;
// }


// break

// break immediately terminates the nearest loop.


// #include <stdio.h>
// int main()
// {   
//     for (int i=0;i<=10;i++)
//     {
//         if(i==5)
//         {
//             break;
//         }
//         printf("%d\n",i);
//     }
//     return 0;
// }

// continue

// continue skips the rest of the current iteration and moves to the next iteration.


// #include <stdio.h>
// int main(){
//     int Num = 10;
//     for(Num=0;Num<=10;Num++)
//     {
//         if(Num==5){
//             continue;
//         }
//         printf("%d\n",Num);
//     }
//     return 0;
// }

// At i == 3:

// continue
//    ↓
// skip printf()
//    ↓
// next iteration


// break vs continue

// | `break`                           | `continue`                                |
// | --------------------------------- | ----------------------------------------- |
// | Stops the loop                    | Skips current iteration                   |
// | Execution leaves the loop         | Loop continues                            |
// | Used when you found what you need | Used when you want to ignore an iteration |


// break
//  ↓
// EXIT LOOP
// continue
//  ↓
// NEXT ITERATION


// Common Beginner Mistakes


// Mistake 1 — Infinite loop
// int i = 1;

// while (i <= 10)
// {
//     printf("%d", i);
// }

// i never changes.



// Mistake 2 — Wrong condition
// for (int i = 1; i < 10; i++)

// prints:

// 1 2 3 4 5 6 7 8 9

// Whereas:

// for (int i = 1; i <= 10; i++)

// prints:

// 1 2 3 4 5 6 7 8 9 10

// Pay attention to < vs <=.

// Mistake 3 — Wrong update
// for (int i = 1; i <= 10; i--)

// The loop moves away from the stopping condition and may never terminate.

// 📝 Practice Problems

// Start with these in order.

// Basic
// Print numbers from 1 to N.
// Print numbers from N to 1.
// Print even numbers from 1 to N.
// Print odd numbers from 1 to N.
// Print multiples of 5.
// Find sum from 1 to N.
// Find factorial of N.
// Print multiplication table.
// Number Problems
// Count digits of a number.
// Find sum of digits.
// Reverse a number.
// Check palindrome.
// Check prime.
// Print prime numbers in a range.
// Generate Fibonacci series.
// Find GCD.
// Find LCM.
// Nested Loop


// Print:
// *
// **
// ***
// ****
// *****


// Print:
// *****
// ****
// ***
// **
// *


// Print:
// 1
// 12
// 123
// 1234
// 12345



// 🧠 Quick Reference
// for
//  ↓
// Best for counting/repetition patterns

// while
//  ↓
// Best when repetition depends on a condition

// do-while
//  ↓
// Body executes at least once

// break
//  ↓
// Exit loop

// continue
//  ↓
// Skip current iteration
// Most important loop pattern
// for (int i = 0; i < n; i++)
// {
    // work
// }

// You will see this pattern constantly when working with arrays and DSA.