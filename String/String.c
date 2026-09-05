// Declaring a String Initializing a String

// #include <stdio.h>

// int main()
// {  
//     char Name[10] = "Gajanand";

//     printf("Printing Whole String: ");
//     printf("%s\n",Name);

//     printf("Printing Charster: \n");
//     for (int i=0; i<10; i++)
//     {
//         printf("%c\n",Name[i]);
//     }

//     return 0;
// }


// Updating a String Character

// #include <stdio.h>

// int main()
// {  
//     char Name[]="Gajanand";

//     Name[7]= 'a';

//     printf("%s\n",Name);
//     return 0;
// }

// Count the characters manually using a loop.

// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char name[10];
//     int count=0;
//     printf("Enter Name for counting Charceters: ");
//         scanf("%9s",name);
//     printf("Name is %s",name);
//     for(int i=0; name[i]!='\0'; i++)
//     {
//         count++;
//     }

//     printf("Total characters in String is: %d",count);

//     printf("\n");
//     return 0;
// }



// Print a string in reverse order.

// #include <stdio.h>

// int main()
// {   
//     char Name[]="Gajanand";
//     printf("Originamal Name is: %s\n",Name);


//     for(int i=8; i>=0; i--)
//     {
//         printf("%c",Name[i]);
//     }
//     printf("\n");
//     return 0;
// }


#include <stdio.h>

char *Nameprinting(char Name[]);

int main()
{
    char Name[10];

    printf("Enter Your Name: ");

    scanf("%s",Name);

    char Greet[10]="Hello";

    char *Result = Nameprinting(Name);

    printf("%s %s",Greet,Result); // output Hello Gajanand

    printf("\n");

    return 0;

}

char *Nameprinting(char Name[])
{
    return Name;
}

// Imp Notes

// Yes — you're **very close**, but there is one important distinction:

// > `Name` and `*Name` do **not** mean "first character vs all characters."

// Let's use your `"Gajanand"` example.

// ### 1. The string in memory

// ```text
// Name
//  ↓
// ┌───┬───┬───┬───┬───┬───┬───┬───┬─────┐
// │ G │ a │ j │ a │ n │ a │ n │ d │ \0  │
// └───┴───┴───┴───┴───┴───┴───┴───┴─────┘
//   0   1   2   3   4   5   6   7    8
//   ↑
//   first character
// ```

// `Name` represents the **address of the first element**.

// So conceptually:

// ```text
// Name
//  ↓
// address of Name[0]
//  ↓
// address of 'G'
// ```

// ---

// ### 2. What does `Name[0]` mean?

// ```c
// Name[0]
// ```

// means:

// > Go to index 0 and get the character stored there.

// So:

// ```text
// Name[0] → 'G'
// ```

// Therefore:

// ```c
// char ch = Name[0];
// ```

// stores only:

// ```text
// G
// ```

// ---

// ### 3. What does `*Name` mean?

// This is the important part.

// ```c
// *Name
// ```

// means:

// > Go to the address stored in `Name` and get the value there.

// Since `Name` points to the first character:

// ```text
// Name
//  ↓
// address of 'G'
//  ↓
// *Name
//  ↓
// 'G'
// ```

// So:

// ```c
// *Name
// ```

// is equivalent to:

// ```c
// Name[0]
// ```

// ### Therefore:

// ```text
// Name[0] → G
// *Name   → G
// ```

// **Both give only `G`.**

// ---

// ## 4. Then why does `%s` print the whole string?

// This is the part that usually causes confusion.

// When you do:

// ```c
// printf("%s", Name);
// ```

// `printf` knows `%s` means:

// > Start at this address and keep reading characters until `'\0'`.

// So:

// ```text
// Name
//  ↓
// G → a → j → a → n → a → n → d → \0
//      ↓
//    print everything
// ```

// Output:

// ```text
// Gajanand
// ```

// But:

// ```c
// printf("%c", *Name);
// ```

// means `%c`:

// > Print only the character I give you.

// So:

// ```text
// *Name → G
// ```

// Output:

// ```text
// G
// ```

// ---

// ## 5. Your function example

// If you write:

// ```c
// char *Nameprinting(char Name[])
// {
//     return Name;
// }
// ```

// You're returning the **address of the first character**:

// ```text
// return Name
//       ↓
// address of G
//       ↓
// Result
// ```

// Then:

// ```c
// printf("%s", Result);
// ```

// `%s` starts from that address and reads:

// ```text
// G → a → j → a → n → a → n → d → \0
// ```

// So it prints:

// ```text
// Gajanand
// ```

// ### Very important

// ```text
// char *Result = Nameprinting(Name);
//              ↑
//        stores an address
// ```

// It does **not** mean `*Result` contains the whole string.

// Actually:

// ```text
// Result  → address of G
// *Result → G
// ```

// And:

// ```text
// Result[0] → G
// Result[1] → a
// Result[2] → j
// ...
// ```

// So remember this:

// | Expression            | Meaning                                    | Result     |
// | --------------------- | ------------------------------------------ | ---------- |
// | `Name`                | address of first character                 | address    |
// | `Name[0]`             | character at index 0                       | `G`        |
// | `*Name`               | value at first address                     | `G`        |
// | `Name[1]`             | character at index 1                       | `a`        |
// | `printf("%c", *Name)` | print first character                      | `G`        |
// | `printf("%s", Name)`  | print string from first address until `\0` | `Gajanand` |

// ### The key idea

// **`*Name` does NOT return index 0 to the end.**

// It returns **only the value at the first address**, which is `G`.

// **`%s` is what causes the complete string to be printed**, because `%s` keeps reading from that address until `'\0'`.
// 
// You're very close 👍 — but **`*Result` does NOT give the address of the string**.
// 
// Let's separate the three things clearly.
// 
// Suppose:
// 
// ```c
// char Name[] = "Gajanand";
// char *Result = Name;
// ```
// 
// Memory looks like:
// 
// ```text
// Address       Value
// 1000          'G'
// 1001          'a'
// 1002          'j'
// 1003          'a'
// 1004          'n'
// 1005          'a'
// 1006          'n'
// 1007          'd'
// 1008          '\0'
// ```
// 
// And:
// 
// ```text
// Result = 1000
// ```
// 
// ### Now:
// 
// **1. `&Result`**
// 
// This is the **address of the pointer variable `Result` itself**.
// 
// ```text
// &Result → address where Result is stored
// ```
// 
// For example, maybe `&Result = 2000`.
// 
// ---
// 
// **2. `Result`**
// 
// This is the **address stored inside Result**:
// 
// ```text
// Result → 1000 → 'G'
// ```
// 
// So yes:
// 
// > ✅ `Result` gives the address of the first character.
// 
// ---
// 
// **3. `*Result`**
// 
// `*` means **dereference**: go to the address stored in `Result` and get the value there.
// 
// ```text
// Result → 1000 → 'G'
                //   ↑
            //    *Result
// ```
// 
// Therefore:
// 
// ```text
// *Result → 'G'
// ```
// 
// ❌ `*Result` does NOT give the address of the string.
// 
// ### The important rule
// 
// ```text
// &Result  → address of Result variable
// Result   → address of first character
// *Result  → first character
// ```
// 
// And then:
// 
// ```c
// printf("%s", Result);
// ```
// 
// `%s` receives `Result` (the address of the first character) and reads:
// 
// ```text
// G → a → j → a → n → a → n → d → '\0'
// ```
// 
// So your mental model should be:
// 
// > **`Result` gives `%s` the starting address. `%s` then reads the whole string until `'\0'`. `*Result` only gives the first character.**
// 
// 


