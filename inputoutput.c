#include <stdio.h>

int main(){

    char name[] = "Gajanand";
    int Age = 22;
    char grade = 'A';
    float hight = 12.5f;

    printf("Name is:%s\n",name);
    printf("Age is:%d\n",Age);
    printf("Grade is:%c\n",grade);
    printf("Hight is:%.1f\n",hight);
    return 0;
}



// Taking Input — scanf()
// scanf() is used to read formatted input from the user.


#include <stdio.h>

int main(){

    char name[50];
    int age;
    char color[50];
    
    // printf("Give your name age one favourate color\n");
    printf("Enter your Name:");
    scanf("%s",name);
    printf("Enter Age:");
    scanf("%d",&age);
    printf("Enter Color:");
    scanf("%s",color);
    
    printf("Given Information is:\n");
    printf("Your Name is:%s\n",name);
    printf("Your Age is:%d\n",age);
    printf("Your Color is:%s\n",color);

    return 0;
}





// Printing Variables Using printf()


#include <stdio.h>

int main()
{
    // Declare a character array and initialize it with a string literal.
    // name can store a string of characters.
    char name[] = "Gajanand";

    // Declare an integer variable and initialize it with an integer literal.
    int age = 22;

    // Declare a character variable and initialize it with a character constant.
    char grade = 'A';

    // Declare a float variable and initialize it with a floating-point literal.
    // The 'f' suffix makes 12.5 a float literal.
    float height = 12.5f;

    // printf() is a formatted output function.
    // %s is the String Format Specifier.
    // name is the argument passed to printf().
    printf("Name is: %s\n", name);

    // %d is the Decimal Integer Format Specifier.
    // age is the integer argument.
    printf("Age is: %d\n", age);

    // %c is the Character Format Specifier.
    // grade is the character argument.
    printf("Grade is: %c\n", grade);

    // %.1f is a Floating-Point Format Specification.
    // .1 means display 1 digit after the decimal point.
    // height is the floating-point argument.
    printf("Height is: %.1f\n", height);

    // return 0 indicates successful program execution.
    return 0;
}


// printf() Format Specifier Table

// | Data                 | Example      | Format Specifier | Specific Technical Name                                | Purpose                      |
// | -------------------- | ------------ | ---------------- | ------------------------------------------------------ | ---------------------------- |
// | String               | `"Gajanand"` | `%s`             | **String Format Specifier**                            | Prints a string              |
// | Integer              | `22`         | `%d`             | **Decimal Integer Format Specifier**                   | Prints an `int`              |
// | Character            | `'A'`        | `%c`             | **Character Format Specifier**                         | Prints one character         |
// | Float                | `12.5f`      | `%f`             | **Floating-Point Format Specifier**                    | Prints floating-point value  |
// | Float with precision | `12.5f`      | `%.1f`           | **Floating-Point Format Specification with Precision** | Prints 1 digit after decimal |

// Taking Input — scanf()

#include <stdio.h>

int main()
{
    // Character array used to store the user's name.
    // The array can hold up to 49 characters plus '\0'
    // when used safely with %49s.
    char name[50];

    // Integer variable used to store the user's age.
    int age;

    // Character array used to store the user's color.
    char color[50];

    // Display a message asking the user for their name.
    printf("Enter your Name: ");

    // scanf() is a formatted input function.
    // %49s tells scanf() to read a string with a maximum
    // of 49 characters, leaving one position for '\0'.
    // name is the character array where the input is stored.
    scanf("%49s", name);

    // Ask the user to enter their age.
    printf("Enter Age: ");

    // %d is the Decimal Integer Format Specifier.
    // &age gives scanf() the address of the age variable
    // so it knows where to store the entered integer.
    scanf("%d", &age);

    // Ask the user to enter their favorite color.
    printf("Enter Color: ");

    // %49s reads a word into the color array safely.
    scanf("%49s", color);

    // Display a heading before printing the entered information.
    printf("\nGiven Information is:\n");

    // %s prints the string stored in name.
    printf("Your Name is: %s\n", name);

    // %d prints the integer stored in age.
    printf("Your Age is: %d\n", age);

    // %s prints the string stored in color.
    printf("Your Color is: %s\n", color);

    // Indicate successful program execution.
    return 0;
}


// printf() vs scanf() — Master Table

// | Data Type | Example         | `printf()` | `scanf()` | `&` Required in `scanf()`? |
// | --------- | --------------- | ---------- | --------- | -------------------------- |
// | `int`     | `int age`       | `%d`       | `%d`      | Yes                        |
// | `float`   | `float height`  | `%f`       | `%f`      | Yes                        |
// | `double`  | `double weight` | `%f`       | `%lf`     | Yes                        |
// | `char`    | `char grade`    | `%c`       | `%c`      | Yes                        |
// | String    | `char name[50]` | `%s`       | `%s`      | No, for the array name     |


// Master Table for Your Notes


// | Operation        | Function   | Function Type             | Format String | Format Specifier | Argument / Destination |
// | ---------------- | ---------- | ------------------------- | ------------- | ---------------- | ---------------------- |
// | Display `int`    | `printf()` | Formatted Output Function | `"%d"`        | `%d`             | `age`                  |
// | Display `float`  | `printf()` | Formatted Output Function | `"%.2f"`      | `%f`             | `height`               |
// | Display `double` | `printf()` | Formatted Output Function | `"%.2f"`      | `%f`             | `weight`               |
// | Display `char`   | `printf()` | Formatted Output Function | `"%c"`        | `%c`             | `grade`                |
// | Display string   | `printf()` | Formatted Output Function | `"%s"`        | `%s`             | `name`                 |
// | Read `int`       | `scanf()`  | Formatted Input Function  | `"%d"`        | `%d`             | `&age`                 |
// | Read `float`     | `scanf()`  | Formatted Input Function  | `"%f"`        | `%f`             | `&height`              |
// | Read `double`    | `scanf()`  | Formatted Input Function  | `"%lf"`       | `%lf`            | `&weight`              |
// | Read `char`      | `scanf()`  | Formatted Input Function  | `"%c"`        | `%c`             | `&grade`               |
// | Read string      | `scanf()`  | Formatted Input Function  | `"%49s"`      | `%s`             | `name`                 |


// The 5 rules to memorize
