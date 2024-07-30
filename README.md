# experiment 1
## Aim 
Downloading and Installing VS Code, (Hello World and Calculator 

## Theory
Downloading and Installing Visual Studio Code
Visual Studio Code (VS Code) is a lightweight, extensible, open-source code editor developed by Microsoft. It supports various programming languages, including C++, and provides features like IntelliSense, debugging, and Git integration.

### Downloading and Installing Visual Studio Code
**Visual Studio Code (VS Code)** is a lightweight, extensible, open-source code editor developed by Microsoft. It supports various programming languages, including C++, and provides features like IntelliSense, debugging, and Git integration.

#### Steps to Download and Install VS Code:
1. **Visit the Official Website**: Go to the [Visual Studio Code website](https://code.visualstudio.com/).
2. **Download the Installer**: Select the appropriate installer for your operating system (Windows, macOS, or Linux).
3. **Run the Installer**: Follow the on-screen instructions to install VS Code.
4. **Launch VS Code**: Open the installed application to start coding.

## Code
```#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
//Hello World!
}```


## Conclusion
Downloading and Installing VS Code: Successfully installed VS Code, a versatile code editor, enabling an efficient coding environment.
"Hello, World!" Program: Understood the basic structure of a C++ program and successfully printed "Hello, World!" to the console.
Calculator Program: Learned to perform basic arithmetic operations using variables, input/output operations, and conditional statements in C++.



# Experiment 2

## Aim
To study and implement the structure of a C++ program focusing on data types.

## Theory

The structure of a C++ program includes preprocessor directives, the main function, and various statements and expressions. Data types in C++ specify the type of data that a variable can hold. Basic data types include `int` for integers, `float` and `double` for floating-point numbers, `char` for characters, and `bool` for boolean values. Derived data types include arrays, pointers, and references, while user-defined data types include structs, classes, and enums. Understanding and correctly using data types is essential for effective programming, as they determine the operations that can be performed on the data and how the data is stored in memory.

## Code
```#include <iostream>
using namespace std;
int main() {
     int a1;
     float a2;
      char a3;
      short int a4;
      long int a5;
      double a6;
    

    std::cout << "Size of a1: " << sizeof(a1) << "byte"<< std::endl;
    std::cout << "Size of a2: " << sizeof(a2) << "byte"<< std::endl;
    std::cout << "Size of a3: " << sizeof(a3) << "byte"<< std::endl;
    std::cout << "Size of a4: " << sizeof(a4) << "byte"<< std::endl;
    std::cout << "Size of a5: " << sizeof(a5) << "byte"<< std::endl;
    std::cout << "Size of a6: " << sizeof(a6) << "byte"<< std::endl;
    
    return 0;
/*Size of a1: 4byte
Size of a2: 4byte
Size of a3: 1byte
Size of a4: 2byte
Size of a5: 8byte
Size of a6: 8byte
*/
}


## Conclusion
The structure of a C++ program includes preprocessor directives, namespace declarations, the main function, and various statements and expressions. Understanding and implementing different data types is crucial for effective programming in C++. This experiment provided hands-on experience with basic data types in C++ and demonstrated their usage within a simple program.



# Experiment 3

## Aim
To study and implement various operators in C++.

## Theory

### Operators in C++
Operators are special symbols or keywords used to perform operations on operands. C++ provides a rich set of operators classified into several categories:

#### 1. **Arithmetic Operators**:
   - **Addition (`+`)**
   - **Subtraction (`-`)** 
   - **Multiplication (`*`)**
   - **Division (`/`)**
   - **Modulus (`%`)** 

#### 2. **Relational Operators**:
   - **Equal to (`==`)**
   - **Not equal to (`!=`)**
   - **Greater than (`>`)** 
   - **Less than (`<`)** 
   - **Greater than or equal to (`>=`)** 
   - **Less than or equal to (`<=`)**

#### 3. **Logical Operators**:
   - **Logical AND (`&&`)** 
   - **Logical OR (`||`)** 
   - **Logical NOT (`!`)** 

#### 4. **Assignment Operators**:
   - **Assignment (`=`)**
   - **Add and assign (`+=`)**
   - **Subtract and assign (`-=`)**
   - **Multiply and assign (`*=`)** 
   - **Divide and assign (`/=`)**
   - **Modulus and assign (`%=`)**

#### 5. **Increment and Decrement Operators**:
   - **Increment (`++`)**
   - **Decrement (`--`)**

#### 6. **Conditional (Ternary) Operator**:
   - **Conditional (`?:`)**: Returns one of two values depending on the result of a condition.

## Code
#include<iostream>
using namespace std;
int main(){
    int a,b,c,add,sub,a1,a2,a3,a4,a5,a6,a7;
    int div,prod,mod;

    cout<<"Enter the value for A"<<endl;
    cin>>a;
    cout<<"Enter the value for B"<<endl;
    cin>>b;

    if(b>0 && b<200  && a>0 && a<250){
     //--------COMPARISON OPERATOR //-------LOGICAL OPERATORS

         add=a+b;   //--------ARITHMETIC OPERATORS  //--------ASSIGNMENT OPERATOR
         sub=a-b;   //--------ARITHMETIC OPERATORS
         div=a/b;   //--------ARITHMETIC OPERATORS 
         prod=a*b;  //--------ARITHMETIC OPERATORS
         mod=a%b;   //--------ARITHMETIC OPERATORS

       
         ++a;       //------INCREMENT OPERATOR
         --b;       //------DECREMENT OPERATOR
         

    

    cout<<"Sum of the entered value is "<<add<<endl<<endl;        
    cout<<"Difference of the entered value is "<<sub<<endl<<endl;
    cout<<"Division of the entered value is "<<div<<endl<<endl;
    cout<<"Product of the entered value is "<<prod<<endl<<endl;
    cout<<"Modulus of the entered value is "<<mod<<endl<<endl;
   
    cout<<"Incremented A is "<<a<<endl<<endl;
    cout<<"Decremented B is "<<b<<endl<<endl;
    }
  
    else{
        cout<<endl<<"CHECK THE VALUES OF A AND B, IT SHOULD BE LESS THAN 250(for A) AND 200(for B)"<<endl;
        cout<<"                                    or"<<endl;
        cout<<"               ENTER NON-ZERO NUMBER FOR THE VALUE OF A and B"<<endl<<endl<<endl<<endl;
    };  //--------COMPARISON OPERATOR

    return 0;
/*Enter the value for A
12
Enter the value for B
8
Sum of the entered value is 20

Difference of the entered value is 4

Division of the entered value is 1

Product of the entered value is 96

Modulus of the entered value is 4

Incremented A is 13

Decremented B is 7*/
}

## Conclusion
The experiment covered various operators in C++, including arithmetic, relational, logical, bitwise, assignment, increment/decrement, and the conditional operator. Understanding and correctly implementing these operators is essential for performing different types of operations and controlling the flow of a C++ program. This experiment provided practical knowledge of how these operators work and their applications in a program.



# Experiment 4

## Aim
To study and implement C++ bitwise operators.

## Theory

Bitwise operators in C++ operate on the binary representation of integers. They include the bitwise AND (`&`), which returns a bit set to 1 if both corresponding bits of the operands are 1; the bitwise OR (`|`), which returns a bit set to 1 if at least one of the corresponding bits is 1; the bitwise XOR (`^`), which returns a bit set to 1 if only one of the corresponding bits is 1; the bitwise NOT (`~`), which inverts all bits of the operand; the left shift (`<<`), which shifts bits to the left and fills with zeros; and the right shift (`>>`), which shifts bits to the right. These operators are used for low-level programming tasks, such as setting, clearing, and toggling specific bits, and for performing fast arithmetic operations. Understanding bitwise operators is essential for tasks that require direct manipulation of data at the bit level, such as system programming, graphics, and encryption.

## Code
#include<iostream>
using namespace std;
int main(){
    int a,b,a1,a2,a3,a4,a5,a6;

    cout<<"Enter the value for A"<<endl;
    cin>>a;
    cout<<"Enter the value for B"<<endl;
    cin>>b;
    a1=a&b;    //------BITWISE OPERATOR
    a2=a|b;    //------BITWISE OPERATOR
    a3=a^b;    //------BITWISE OPERATOR
    a4=~b;     //------BITWISE OPERATOR
    a5=a<<2;   //------BITWISE OPERATOR
    a6=a>>2;   //------BITWISE OPERATOR

    cout<<"AND of the entered value is "<<a1<<endl<<endl;
    cout<<"OR of the entered value is "<<a2<<endl<<endl;
    cout<<"XOR of the entered value is "<<a3<<endl<<endl;
    cout<<"NOT of B is "<<a4<<endl<<endl;
    cout<<"LEFT SHIFT of A by 2 is "<<a5<<endl<<endl;
    cout<<"RIGHT SHIFT of A by 2 is "<<a6<<endl<<endl;

    return 0;
/*Enter the value for A
1
Enter the value for B
0
AND of the entered value is 0

OR of the entered value is 1

XOR of the entered value is 1

NOT of B is -1

LEFT SHIFT of A by 2 is 4

RIGHT SHIFT of A by 2 is 0
*/
}

## Conclusion
Bitwise operators in C++ provide powerful tools for manipulating individual bits of data. They are used in a variety of low-level programming tasks and can greatly optimize certain types of operations. Understanding and implementing these operators is crucial for efficient and effective programming in system-level applications and performance-critical code. This experiment provided an in-depth understanding of how bitwise operators work and their practical applications.
