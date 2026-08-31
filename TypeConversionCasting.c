// Type Conversion & Casting

// Type conversion means changing a value from one data type to another.

// Example:

// int a = 10;
// float b = a;

// Here int → float.

// There are two main types:


// | Type                    | Meaning                                 | Example                |
// | ----------------------- | --------------------------------------- | ---------------------- |
// | **Implicit conversion** | C automatically converts the type       | `float x = 10;`        |
// | **Explicit casting**    | You manually tell C to convert the type | `float x = (float)10;` |


// 1. Implicit Type Conversion

// C automatically converts a value when needed.


// int a = 10;
// float b = a;

// Conceptually:

// int 10
//   ↓
// float 10.0

// # include <stdio.h>
// int main(){
//     int a = 10;
//     float b = a;
//     printf("%.1f\n",b);
//     return 0;
// }


// 2. Integer → Floating Point
// int age = 21;
// float value = age;

// The integer can be represented as a floating-point value.

// 21 → 21.0

// This is generally a safe conversion in terms of preserving the integer's value for the usual range where the floating type can represent it exactly.


// 3. Float → Integer

// This is different.

// float price = 10.75;
// int value = price;

// The fractional part is discarded:

// 10.75 → 10

// Example:

// #include <stdio.h>
// int main(){
//     float price = 10.75;
//     int Value = price;
//     printf("%d\n",Value);
//     return 0;
// }

// It does not round:

// 10.75 → 11  ❌
// 10.75 → 10  ✅


// 4. Explicit Type Casting
// You can manually convert a value using:

// (type)value

// Example:

// float result = (float)10;

// Here:

// (float)
//    ↓
// Target type

// 10
//    ↓
// Value being converted

// 5. Integer Division Problem ⭐

// This is one of the most important concepts.

// Consider:

// int a = 10;
// int b = 3;

// float result = a / b;

// You might expect:

// 3.333333

// But you get:

// 3.000000

// Why?

// Because:

// int / int
//    ↓
// integer division
//    ↓
// 3
//    ↓
// float
//    ↓
// 3.0

// The conversion happens after the division.

// 6. Correct Way

// Cast one operand before division:

// float result = (float)a / b;

// Now:

// (float)10 / 3
//      ↓
// 10.0 / 3
//      ↓
// 3.333333

// Example:

// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int b = 3;
//     float result = (float)a/b;
//     printf("%.2f\n",result);
//     return 0;
// }


// float result = (float)a / b;
// │              │
// │              └── Convert a to float for calculation
// │
// └── Store the final result as a float

// 7. One Operand Is Enough

// You don't need to cast both:

// (float)a / b

// is enough.

// Because once one operand is float, the other operand is converted for the arithmetic operation.

// (float)a / b

// is effectively:

// float / int
//     ↓
// float / float


// 8. Common Conversion Examples
// | Expression      | Result Type/Behavior  |
// | --------------- | --------------------- |
// | `10 + 5`        | `int`                 |
// | `10 / 3`        | `int` result: `3`     |
// | `10.0 / 3`      | floating-point result |
// | `(float)10 / 3` | floating-point result |
// | `(int)10.75`    | `10`                  |
// | `(float)10`     | `10.0`                |



// 9. char and Integer Conversion

// Characters are represented using integer character codes.

// Example:

// char ch = 'A';

// printf("%d", ch);

// This prints the numeric character code for 'A' in the execution character set; on the usual ASCII-based systems, it is:

// 65

// You can also convert an integer to a character:

// #include <stdio.h>

// int main()
// {   
//     char ch = 'A';
//     int a = 65;
//     printf("A ascii value:%d\n",(int)ch);
//     printf("65 Aplhabit is:%c\n",(char)a);
//     return 0;
// }

// 10. Type Conversion in Expressions

// Consider:



// int a = 10;
// float b = 2.5;

// float result = a + b;

// C converts a to a floating-point value for the operation:

// 10 + 2.5
//  ↓
// 10.0 + 2.5
//  ↓
// 12.5
// 11. Conversion Can Lose Information

// Some conversions can lose information.

// Floating point → integer
// float x = 10.99;
// int y = x;

// Result:

// y = 10
// Large integer → floating point

// A floating-point type may not represent every integer exactly once integers become sufficiently large.

// So don't assume every conversion preserves the exact original value.


// 12. Implicit vs Explicit

// | Feature    | Implicit               | Explicit                                         |
// | ---------- | ---------------------- | ------------------------------------------------ |
// | Done by    | C                      | Programmer                                       |
// | Syntax     | No cast required       | `(type)value`                                    |
// | Example    | `float x = 10;`        | `float x = (float)10;`                           |
// | Control    | Less direct            | Programmer controls conversion                   |
// | Common use | Compatible conversions | Avoiding integer division, deliberate conversion |


// 13. Type Casting Syntax

// The general syntax is:

// (target_type) expression

// Examples:

// (float)a
// (int)x
// (char)value
// (double)number

// #include <stdio.h>

// int main()
// {   
//     int a = 10;
//     float b = (float)a;
//     printf("Int 10 to Float:%f\n",b);
//     return 0;
// }


#include <stdio.h>

int main()
{   
    int a = 10;
    double b = 10.0123345;
    float c = 10.1;

    printf("int to double:%lf\n",(double)a);
    printf("double to float:%.2f\n",(float)b);
    printf("int to double:%lf\n",(double)a);
    return 0;
}

