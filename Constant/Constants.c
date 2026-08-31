#include <stdio.h>
#define PI 3.14159

int main(){

    const int Age = 20;
    printf("Age is: %d",Age);
    printf("PI values:%f\n",PI);
    // Age = 22; The symbol Age is a constant integer variable defined with a value of 20.
    //            It represents a fixed age value that cannot be modified throughout the program.
    return 0;
}



// Include the Standard Input/Output library.
// It provides functions such as printf().
#include <stdio.h>

// Define a preprocessor macro named PI.
// Before compilation, the preprocessor replaces PI with 3.14159.
#define PI 3.14159

// main() is the entry point of the C program.
// Program execution starts from main().
int main()
{
    // Declare a const-qualified integer variable named Age.
    // The const keyword means the value cannot be modified
    // through this variable after initialization.
    const int Age = 20;

    // printf() is a formatted output function.
    // %d is the Decimal Integer Format Specifier.
    // Age is the argument whose value replaces %d.
    printf("Age is: %d\n", Age);

    // printf() prints the value of PI.
    // %f is the Floating-Point Format Specifier.
    // %.5f means display exactly 5 digits after the decimal point.
    printf("PI value: %.5f\n", PI);

    // return 0 ends the main() function.
    // 0 indicates successful program execution.
    return 0;
}


// const int age = 22;
// │
// ├── const → Type Qualifier
// ├── int   → Data Type
// ├── age   → Identifier
// └── 22    → Integer Literal
// 
// 
// #define PI 3.14159
// │
// ├── #define → Macro Definition Directive
// ├── PI      → Macro Identifier
// └── 3.14159 → Replacement List / Floating-Point Literal