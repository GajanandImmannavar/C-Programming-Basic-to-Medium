// int (4 bytes) %d for printing
// char (1 byte) %c for printing
// float (4 bytes) %f for printing
// double (8 bytes) %lf for printing


#include <stdio.h>

int main()
{   int employeeId = 101;
    int myAge = 22;
    int Salary = 80000;
    printf("\nEmployee Id is: %d  Age is: %d  Salary is: %d\n", employeeId, myAge, Salary);
    
    double Weight = 10.122314;
    float Number = 12.01f;
    printf("Weight is: %.2lf\n", Weight);
    printf("Float is: %f\n",Number);

    char name[10] = "Gajanand";

    printf("Employee Name:%s  Id:%d  age:%d  Salary:%d\n",name,employeeId,myAge,Salary);

    char Description[]  = "Hi my name is gajanand i complated my be from Nhce of bengaluru and i am exited to work with you and learn from you!";
    printf("Introuduction of Employee:%s\n",Description);


    return 0;
}






// Include the Standard Input/Output library.
// Required to use functions like printf() and scanf().
#include <stdio.h>

// main() is the entry point of the C program.
// int means main() returns an integer value.
int main()
{
    // Declare an integer variable named employeeId
    // and initialize it with the value 101.
    int employeeId = 101;

    // Declare an integer variable named myAge
    // and store the value 22.
    int myAge = 22;

    // Declare an integer variable named Salary
    // and store the value 80000.
    int Salary = 80000;

    // Print integer values.
    // %d is used to print an int value.
    // The variables are matched with the format specifiers
    // in the same order.
    // \n moves the cursor to a new line.
    printf(
        "\nEmployee Id is: %d  Age is: %d  Salary is: %d\n",
        employeeId,
        myAge,
        Salary
    );

    // Declare a double variable.
    // double is generally used when more floating-point
    // precision is needed than float.
    double Weight = 10.122314;

    // Declare a float variable.
    // The f suffix makes 12.01 a float literal.
    float Number = 12.01f;

    // Print the double value.
    // %.2f means display 2 digits after the decimal point.
    // For printf(), %f is sufficient for double too.
    printf("Weight is: %.2f\n", Weight);

    // Print the float value.
    // %f displays a floating-point value.
    // By default, printf() displays 6 digits after the decimal.
    printf("Float is: %f\n", Number);

    // Declare a character array and initialize it with a string.
    // The array stores:
    // G a j a n a n d \0
    char name[10] = "Gajanand";

    // %s is used to print a string (character array).
    // %d is used to print integer values.
    printf(
        "Employee Name: %s  Id: %d  Age: %d  Salary: %d\n",
        name,
        employeeId,
        myAge,
        Salary
    );

    // Declare a character array.
    // The compiler automatically calculates the required size
    // because [] is used without specifying a size.
    char Description[] =
        "Hi, my name is Gajanand. I completed my B.E. from "
        "NHCE, Bengaluru, and I am excited to work and learn with you!";

    // Print the complete string using %s.
    printf("Introduction of Employee: %s\n", Description);

    // Return 0 indicates successful program execution.
    return 0;
}

// C Input/Output — Functions and Format Specifiers
// 1. Important Terms
// | Term        | Specific Name                    | Meaning                                                 |
// | ----------- | -------------------------------- | ------------------------------------------------------- |
// | `printf()`  | **Output Function**              | Displays formatted output on the screen                 |
// | `scanf()`   | **Input Function**               | Reads formatted input from the user                     |
// | `%d`        | **Format Specifier**             | Represents an `int` value                               |
// | `%f`        | **Format Specifier**             | Used for floating-point formatting                      |
// | `%c`        | **Format Specifier**             | Represents a single `char`                              |
// | `%s`        | **Format Specifier**             | Represents a string (`char` array)                      |
// | `"Age: %d"` | **Format String**                | The string containing normal text and format specifiers |
// | `age`       | **Argument / Variable Argument** | The value passed to a function                          |
// | `&age`      | **Address-of Operator**          | Gives the memory address of `age`                       |
// | `\n`        | **Escape Sequence**              | Moves output to the next line                           |



// 2. printf() Function
// Specific Name: Formatted Output Function
// printf("Age: %d\n", age);



// Breakdown

// | Part          | Technical Term                | Meaning                                      |
// | ------------- | ----------------------------- | -------------------------------------------- |
// | `printf`      | **Function Name**             | Name of the output function                  |
// | `()`          | **Function Call Parentheses** | Used to call the function and pass arguments |
// | `"Age: %d\n"` | **Format String**             | Controls how the output is displayed         |
// | `Age:`        | **Literal Text**              | Printed exactly as written                   |
// | `%d`          | **Format Specifier**          | Placeholder for an `int` value               |
// | `\n`          | **Escape Sequence**           | Creates a new line                           |
// | `age`         | **Argument**                  | Variable whose value replaces `%d`           |
// | `;`           | **Statement Terminator**      | Marks the end of the C statement             |


// General Syntax
// printf("format string", argument1, argument2, ...);
// 
// Example:
// 
// int age = 22;
// float salary = 50000.50f;
// 
// printf("Age: %d Salary: %.2f\n", age, salary);
// 
// Matching happens from left to right:
// 
// Format Specifier          Argument
// ────────────────          ────────
// %d              ────────> age
// %.2f            ────────> salary

// 3. scanf() Function
// Specific Name: Formatted Input Function

// scanf("%d", &age);

// Breakdown
// | Part    | Technical Term                | Meaning                                   |
// | ------- | ----------------------------- | ----------------------------------------- |
// | `scanf` | **Function Name**             | Name of the input function                |
// | `()`    | **Function Call Parentheses** | Used to call the function                 |
// | `"%d"`  | **Format String**             | Specifies the expected input format       |
// | `%d`    | **Format Specifier**          | Expects an `int` input                    |
// | `&`     | **Address-of Operator**       | Provides the memory address of a variable |
// | `age`   | **Variable / Argument**       | Variable where the input will be stored   |
// | `&age`  | **Address Argument**          | Address passed to `scanf()`               |
// | `;`     | **Statement Terminator**      | Ends the statement                        |


// 4. Complete Format Specifier Table
// Basic Data Types

// | Data Type | Format Specifier | Specific Format Name                       | `printf()` | `scanf()` | Example                 |
// | --------- | ---------------- | ------------------------------------------ | ---------- | --------- | ----------------------- |
// | `int`     | `%d`             | **Decimal Integer Format Specifier**       | `%d`       | `%d`      | `int age = 22;`         |
// | `float`   | `%f`             | **Floating-Point Format Specifier**        | `%f`       | `%f`      | `float price = 10.5f;`  |
// | `double`  | `%f` / `%lf`     | **Double Floating-Point Format Specifier** | `%f`       | `%lf`     | `double weight = 10.5;` |
// | `char`    | `%c`             | **Character Format Specifier**             | `%c`       | `%c`      | `char grade = 'A';`     |
// | `char[]`  | `%s`             | **String Format Specifier**                | `%s`       | `%s`      | `char name[20];`        |


// 6. Other Common Integer Representations

// The same integer can be displayed in different number systems.

// | Format Specifier | Specific Name                              | Output Representation |
// | ---------------- | ------------------------------------------ | --------------------- |
// | `%d`             | **Signed Decimal Format Specifier**        | Base 10               |
// | `%i`             | **Signed Integer Format Specifier**        | Integer input/output  |
// | `%u`             | **Unsigned Decimal Format Specifier**      | Unsigned base 10      |
// | `%o`             | **Octal Format Specifier**                 | Base 8                |
// | `%x`             | **Lowercase Hexadecimal Format Specifier** | Base 16               |
// | `%X`             | **Uppercase Hexadecimal Format Specifier** | Base 16               |


// xample:

// int number = 255;

// printf("Decimal: %d\n", number);
// printf("Octal: %o\n", number);
// printf("Hexadecimal: %x\n", number);
// printf("Hexadecimal: %X\n", number);

// Output:
// Decimal: 255
// Octal: 377
// Hexadecimal: ff
// Hexadecimal: FF

// 7. Floating-Point Format Specifiers

// | Data Type     | Function   | Format Specifier | Specific Name                                    | Example                  |
// | ------------- | ---------- | ---------------- | ------------------------------------------------ | ------------------------ |
// | `float`       | `printf()` | `%f`             | **Floating-Point Output Format Specifier**       | `printf("%f", number);`  |
// | `float`       | `scanf()`  | `%f`             | **Floating-Point Input Format Specifier**        | `scanf("%f", &number);`  |
// | `double`      | `printf()` | `%f`             | **Floating-Point Output Format Specifier**       | `printf("%f", weight);`  |
// | `double`      | `scanf()`  | `%lf`            | **Double Floating-Point Input Format Specifier** | `scanf("%lf", &weight);` |
// | `long double` | `printf()` | `%Lf`            | **Long Double Floating-Point Format Specifier**  | `printf("%Lf", value);`  |
// | `long double` | `scanf()`  | `%Lf`            | **Long Double Floating-Point Format Specifier**  | `scanf("%Lf", &value);`  |
// 
// 
// Important Rule
// Data Type       printf()       scanf()
// ─────────       ────────       ────────
// float           %f             %f
// double          %f             %lf
// long double     %Lf            %Lf
// Why is double different?
// 
// In printf(), a float argument is automatically promoted to double.
// 
// But scanf() needs to know the exact type and memory location where it should store the input.
// 
// Therefore:
// 
// double weight;
// 
// scanf("%lf", &weight);
// 8. Character and String Format Specifiers


// | Data             | Format Specifier | Specific Name                  | Example      |
// | ---------------- | ---------------- | ------------------------------ | ------------ |
// | Single character | `%c`             | **Character Format Specifier** | `'A'`        |
// | String           | `%s`             | **String Format Specifier**    | `"Gajanand"` |

// 
// Character
// char grade = 'A';
// 
// printf("Grade: %c\n", grade);
// 
// Here:
// 
// 'A'
//  │
//  └── Character Constant
// String
// char name[] = "Gajanand";
// 
// printf("Name: %s\n", name);
// 
// Here:
// 
// "Gajanand"
    //  │
    //  └── String Literal
// 9. Width and Precision in printf()
// 
// Format specifiers can contain additional formatting instructions.
// 
// Example:
// 
// printf("%.2f", number);
// 
// Breakdown:
// 
// % . 2 f
// │ │ │ └── Conversion Specifier
// │ │ └──── Precision
// │ └────── Precision Separator
// └──────── Format Specifier Begins
// Precision
// double number = 12.345678;
// 
// printf("%.1f\n", number);
// printf("%.2f\n", number);
// printf("%.3f\n", number);
// 
// Output:
// 
// 12.3
// 12.35
// 12.346


// | Format | Specific Term                 | Meaning                                     |
// | ------ | ----------------------------- | ------------------------------------------- |
// | `%f`   | Default Floating-Point Format | Default precision is 6 digits after decimal |
// | `%.1f` | Precision Format              | 1 digit after decimal                       |
// | `%.2f` | Precision Format              | 2 digits after decimal                      |
// | `%.3f` | Precision Format              | 3 digits after decimal                      |
// 






// 10. Field Width
// 
// Example:
// 
// printf("%10d\n", 123);
// 
// 10 is called the Field Width.
// 
// % 10 d
// │ │  └── Decimal Integer Conversion
// │ └──── Field Width
// └────── Format Begins
// 
// It reserves at least 10 character positions.
// 
// Example:
// 
// printf("|%10d|\n", 123);
// 
// Output:
// 
// |       123|
// 
// Left alignment:
// 
// printf("|%-10d|\n", 123);
// 
// Output:
// 
// |123       |





// 11. Anatomy of a Format Specifier
// 
// A general format specification can look like:
// 
// %[flags][width][.precision][length]conversion
// 
// For example:
// 
// printf("%-10.2f", number);


// Breakdown:

// | Part | Specific Technical Term    | Meaning                             |
// | ---- | -------------------------- | ----------------------------------- |
// | `%`  | **Format Specifier Start** | Begins the conversion specification |
// | `-`  | **Flag**                   | Left-aligns the output              |
// | `10` | **Field Width**            | Minimum width of the output         |
// | `.2` | **Precision**              | Controls decimal places for `%f`    |
// | `f`  | **Conversion Specifier**   | Specifies floating-point conversion |

// So:

// %-10.2f

// means:

// Left-align
//      +
// Minimum width = 10
//      +
// 2 decimal places
//      +
// Floating-point value


// 12. printf() and scanf() Comparison

// | Feature                         | `printf()`                    | `scanf()`                                                       |
// | ------------------------------- | ----------------------------- | --------------------------------------------------------------- |
// | Specific function type          | **Formatted Output Function** | **Formatted Input Function**                                    |
// | Main purpose                    | Display data                  | Read data                                                       |
// | Data direction                  | Program → Screen              | User → Program                                                  |
// | Requires format specifier       | Yes, for formatted values     | Yes                                                             |
// | Integer                         | `%d`                          | `%d`                                                            |
// | Float                           | `%f`                          | `%f`                                                            |
// | Double                          | `%f`                          | `%lf`                                                           |
// | Character                       | `%c`                          | `%c`                                                            |
// | String                          | `%s`                          | `%s`                                                            |
// | Usually uses `&` with variables | No                            | Yes, except character arrays such as `name` when used with `%s` |

// 13. The Most Important Beginner Cheat Sheet

// Keep this at the top of your notes:

// | Variable Data Type | Variable Example        | `printf()` Format Specifier | `scanf()` Format Specifier | Specific Name                              |
// | ------------------ | ----------------------- | --------------------------- | -------------------------- | ------------------------------------------ |
// | `int`              | `int age;`              | `%d`                        | `%d`                       | Decimal Integer Format Specifier           |
// | `float`            | `float price;`          | `%f`                        | `%f`                       | Floating-Point Format Specifier            |
// | `double`           | `double weight;`        | `%f`                        | `%lf`                      | Double Floating-Point Format Specifier     |
// | `char`             | `char grade;`           | `%c`                        | `%c`                       | Character Format Specifier                 |
// | `char[]`           | `char name[50];`        | `%s`                        | `%s`                       | String Format Specifier                    |
// | `long int`         | `long int number;`      | `%ld`                       | `%ld`                      | Long Decimal Integer Format Specifier      |
// | `long long int`    | `long long int number;` | `%lld`                      | `%lld`                     | Long Long Decimal Integer Format Specifier |
// | `unsigned int`     | `unsigned int number;`  | `%u`                        | `%u`                       | Unsigned Decimal Integer Format Specifier  |
// 
// 
// Memory shortcut
// %d  → Decimal Integer
// %f  → Floating-Point
// %lf → Double input with scanf()
// %c  → Character
// %s  → String
// 
// So whenever you see:
// 
// printf("Age: %d\n", age);
// 
// you should identify it like this:
// 
// printf()              → Formatted Output Function
// "Age: %d\n"           → Format String
// Age:                  → Literal Text
// %d                    → Decimal Integer Format Specifier
// \n                    → Newline Escape Sequence
// age                   → Function Argument / Variable
// ;                     → Statement Terminator