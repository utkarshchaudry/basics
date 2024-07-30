# experiment 1
## Aim 

To download and install Visual Studio Code (VS Code).
To write and execute a simple "Hello, World!" program in C++.
To write and execute a basic calculator program in C++.

## Theory
Downloading and Installing Visual Studio Code
Visual Studio Code (VS Code) is a lightweight, extensible, open-source code editor developed by Microsoft. It supports various programming languages, including C++, and provides features like IntelliSense, debugging, and Git integration.

### Steps to Download and Install VS Code:
Visit the Official Website: Go to the Visual Studio Code website.
Download the Installer: Select the appropriate installer for your operating system (Windows, macOS, or Linux).
Run the Installer: Follow the on-screen instructions to install VS Code.
Launch VS Code: Open the installed application to start coding.

### Advantages of VS Code:
Lightweight and Fast: Uses fewer system resources compared to full-fledged Integrated Development Environments (IDEs).
Extensibility: Supports a wide range of extensions to enhance functionality.
Integrated Terminal: Allows executing shell commands directly from the editor.
Built-in Git Support: Simplifies version control management.
IntelliSense: Provides intelligent code completions based on variable types, function definitions, and imported modules.

Writing a "Hello, World!" Program in C++
The "Hello, World!" program is traditionally the first program written by beginners learning a new programming language. It demonstrates the basic structure of a C++ program and how to output text to the console.

## Conclusion
Downloading and Installing VS Code: Successfully installed VS Code, a versatile code editor, enabling an efficient coding environment.
"Hello, World!" Program: Understood the basic structure of a C++ program and successfully printed "Hello, World!" to the console.
Calculator Program: Learned to perform basic arithmetic operations using variables, input/output operations, and conditional statements in C++.



# Experiment 2

## Aim
To study and implement the structure of a C++ program focusing on data types.

## Theory

### C++ Program Structure
A C++ program typically consists of the following components:
1. **Preprocessor Directives**: Instructions processed before the actual compilation of code begins.
2. **Namespace Declarations**: Allowing the use of standard C++ library names without prefixing them with `std::`.
3. **Main Function**: The entry point of the program where execution begins.
4. **Statements and Expressions**: The body of the program containing variables, operations, and function calls.
5. **Comments**: Non-executable statements used for documentation.

### Data Types in C++
Data types specify the type of data that a variable can hold. C++ has several built-in data types categorized as follows:

#### Basic Data Types:
1. **Integer Types**:
   - `int`: Represents whole numbers. Size is typically 4 bytes.
   - `short`: Smaller integer type, usually 2 bytes.
   - `long`: Larger integer type, typically 4 or 8 bytes.
   - `long long`: Even larger integer type, usually 8 bytes.
2. **Floating-Point Types**:
   - `float`: Single-precision floating-point. Size is typically 4 bytes.
   - `double`: Double-precision floating-point. Size is typically 8 bytes.
   - `long double`: Extended precision floating-point. Size is usually 8 or 16 bytes.
3. **Character Type**:
   - `char`: Represents a single character. Size is typically 1 byte.
4. **Boolean Type**:
   - `bool`: Represents a boolean value (true or false).

#### Derived Data Types:
1. **Array**: Collection of elements of the same type.
2. **Pointer**: Variable that stores the memory address of another variable.
3. **Reference**: Alias for another variable.
4. **Function**: A block of code that performs a specific task.

#### User-Defined Data Types:
1. **Structure (`struct`)**: Collection of variables of different types.
2. **Class (`class`)**: Collection of variables and functions (methods).
3. **Enumeration (`enum`)**: User-defined type consisting of a set of named values.

## Conclusion
The structure of a C++ program includes preprocessor directives, namespace declarations, the main function, and various statements and expressions. Understanding and implementing different data types is crucial for effective programming in C++. This experiment provided hands-on experience with basic data types in C++ and demonstrated their usage within a simple program.



# Experiment 3

## Aim
To study and implement various operators in C++.

## Theory

### Operators in C++
Operators are special symbols or keywords used to perform operations on operands. C++ provides a rich set of operators classified into several categories:

#### 1. **Arithmetic Operators**:
   - **Addition (`+`)**: Adds two operands.
   - **Subtraction (`-`)**: Subtracts the second operand from the first.
   - **Multiplication (`*`)**: Multiplies two operands.
   - **Division (`/`)**: Divides the numerator by the denominator.
   - **Modulus (`%`)**: Returns the remainder of division.

#### 2. **Relational Operators**:
   - **Equal to (`==`)**: Checks if two operands are equal.
   - **Not equal to (`!=`)**: Checks if two operands are not equal.
   - **Greater than (`>`)**: Checks if the first operand is greater than the second.
   - **Less than (`<`)**: Checks if the first operand is less than the second.
   - **Greater than or equal to (`>=`)**: Checks if the first operand is greater than or equal to the second.
   - **Less than or equal to (`<=`)**: Checks if the first operand is less than or equal to the second.

#### 3. **Logical Operators**:
   - **Logical AND (`&&`)**: Returns true if both operands are true.
   - **Logical OR (`||`)**: Returns true if at least one of the operands is true.
   - **Logical NOT (`!`)**: Reverses the logical state of its operand.

#### 4. **Assignment Operators**:
   - **Assignment (`=`)**: Assigns the value of the right operand to the left operand.
   - **Add and assign (`+=`)**: Adds the right operand to the left operand and assigns the result to the left operand.
   - **Subtract and assign (`-=`)**: Subtracts the right operand from the left operand and assigns the result to the left operand.
   - **Multiply and assign (`*=`)**: Multiplies the right operand with the left operand and assigns the result to the left operand.
   - **Divide and assign (`/=`)**: Divides the left operand by the right operand and assigns the result to the left operand.
   - **Modulus and assign (`%=`)**: Takes the modulus using the two operands and assigns the result to the left operand.

#### 5. **Increment and Decrement Operators**:
   - **Increment (`++`)**: Increases an integer value by one.
   - **Decrement (`--`)**: Decreases an integer value by one.

#### 6. **Conditional (Ternary) Operator**:
   - **Conditional (`?:`)**: Returns one of two values depending on the result of a condition.

### Example Program
The following example demonstrates the use of various operators in a C++ program:

## Conclusion
The experiment covered various operators in C++, including arithmetic, relational, logical, bitwise, assignment, increment/decrement, and the conditional operator. Understanding and correctly implementing these operators is essential for performing different types of operations and controlling the flow of a C++ program. This experiment provided practical knowledge of how these operators work and their applications in a program.



# Experiment 4

## Aim
To study and implement C++ bitwise operators.

## Theory

### Bitwise Operators in C++
Bitwise operators are used to perform bit-level operations on data. These operators work directly on the binary representation of integers and are used in various low-level programming tasks, such as system programming, device drivers, and encryption algorithms.

#### Types of Bitwise Operators:

1. **Bitwise AND (`&`)**:
   - Performs a bitwise AND operation.
   - Each bit of the result is set to 1 if both corresponding bits of the operands are 1.

2. **Bitwise OR (`|`)**:
   - Performs a bitwise OR operation.
   - Each bit of the result is set to 1 if at least one of the corresponding bits of the operands is 1.

3. **Bitwise XOR (`^`)**:
   - Performs a bitwise XOR (exclusive OR) operation.
   - Each bit of the result is set to 1 if only one of the corresponding bits of the operands is 1.

4. **Bitwise NOT (`~`)**:
   - Performs a bitwise NOT operation.
   - Each bit of the result is the complement (inverse) of the corresponding bit of the operand.

5. **Left Shift (`<<`)**:
   - Shifts the bits of the first operand to the left by the number of positions specified by the second operand.
   - New bits on the right are filled with zeros.

6. **Right Shift (`>>`)**:
   - Shifts the bits of the first operand to the right by the number of positions specified by the second operand.
   - For unsigned types, new bits on the left are filled with zeros.
   - For signed types, the result is implementation-defined (typically filled with the sign bit).

### Bitwise Operations and Their Uses

1. **Bitwise AND (`&`)**:
   - Used to clear specific bits in a number.
   - Example: Masking certain bits for specific operations.

2. **Bitwise OR (`|`)**:
   - Used to set specific bits in a number.
   - Example: Combining multiple flags in a single variable.

3. **Bitwise XOR (`^`)**:
   - Used to toggle specific bits in a number.
   - Example: Flipping bits in encryption algorithms.

4. **Bitwise NOT (`~`)**:
   - Used to invert all bits in a number.
   - Example: Quickly computing the two's complement of a number.

5. **Left Shift (`<<`)**:
   - Used to multiply a number by a power of 2.
   - Example: Efficient arithmetic operations in performance-critical code.

6. **Right Shift (`>>`)**:
   - Used to divide a number by a power of 2.
   - Example: Efficient arithmetic operations in performance-critical code.

### Practical Considerations
- Bitwise operators are generally faster than arithmetic operators because they directly manipulate bits at the hardware level.
- Understanding bitwise operations is essential for tasks involving low-level data manipulation, such as graphics programming, network programming, and cryptography.
- Care must be taken with signed integers when using right shift (`>>`), as the result can be implementation-defined.

## Conclusion
Bitwise operators in C++ provide powerful tools for manipulating individual bits of data. They are used in a variety of low-level programming tasks and can greatly optimize certain types of operations. Understanding and implementing these operators is crucial for efficient and effective programming in system-level applications and performance-critical code. This experiment provided an in-depth understanding of how bitwise operators work and their practical applications.
