# Experiment 5

## Aim
To study and implement C++ decision-making statements.

## Theory

Decision-making in C++ allows programs to run certain parts of the code depending on specific conditions. This helps make the code flexible and adaptable. C++ offers several decision-making statements, such as:

- `if`
- `else if`
- `else`
- `switch`
- `default`

### `if` Statement

The `if` statement is the simplest form of decision-making. It checks a condition and runs a block of code if the condition is true.

**Syntax:**

```cpp
if (condition) {
    // Runs this code if the condition is true
}
```

### `else if` Statement

The `if-else` statement allows for choosing between multiple paths. If the `if` condition is false, the `else if` condition is checked, and its code block runs if the condition is true.

**Syntax:**

```cpp
if (condition_a) {
    // Runs this code if condition_a is true
} else if (condition_b) {
    // Runs this code if condition_a is false and condition_b is true
} else {
    // Runs this code if both condition_a and condition_b are false
}
```

### `switch` and `default` Statements

The `switch` statement is a better choice when there are many conditions to check. It evaluates one expression and runs the matching `case` block. The `switch` statement is usually easier to read and less prone to mistakes than many `else if` statements. The `default` block acts like an `else` statement, running if none of the cases match.

**Syntax:**

```cpp
switch (expression) {
    case value_1:
        // Runs this code if expression matches value_1
        break;
    case value_2:
        // Runs this code if expression matches value_2
        break;
    default:
        // Runs this code if no case matches
        break;
}
```

Using `switch` is often better when you have multiple specific values to check, as it is easier to type and debug. However, it doesn't provide a significant speed advantage over `else if` statements. For more complex decisions, you might use lookups or hash tables.

## Code
```
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 variables: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"a is the largest number: "<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<"b is the largest number: "<<endl;
    }
    else if(c>a && c>b)
    {
        cout <<"c is the largest number: "<<endl;
}
    int month;
cout<<"Enter a number between 1 to 12"<< endl;
cin>>month;
switch (month)
{
    case 1:
    cout<<"Jan"<<endl;
    break;

    case 2:
    cout<<"February"<<endl;
    break;

    case 3:
    cout<<"march"<<endl;
    break;
    
    case 4:
    cout<<"April"<<endl;
    break;
    
    case 5:
    cout<<"May"<<endl;
    break;

    case 6:
    cout<<"June"<<endl;
    break;

    case 7:
    cout<<"July"<<endl;
    break;

    case 8:
    cout<<"August"<<endl;
    break;
    
    case 9:
    cout<<"September"<<endl;
    break;

    case 10:
    cout<<"October"<<endl;
    break;

    case 11:
    cout<<"November"<<endl;
    break;

    case 12:
    cout<<"December"<<endl;
    break;

    default:
    cout<<"Invalid input"<<endl;

}
}
```
## Output
![image](https://github.com/user-attachments/assets/43dd58e1-ffa0-4110-8dae-5099a03c04b9)

## Conclusion
In this experiment we learnt how to implement all the type of decision making statement loops like for, while and do while in C++ programming language



# Experiment 6

## Aim
To learn how to use loops like `for`, `while`, and `do-while` in C++.

## Theory

Loops are used to run a block of code multiple times, from a set number of times to possibly infinitely, depending on conditions or iterations. In this experiment, we will learn about three types of loops in C++:

1. **`for` Loop**

   A `for` loop runs a block of code for a specific number of times. It keeps running until a certain condition is met.

   **Syntax:**

   ```cpp
   for (initialization; test_condition; counter) {
       // Code to run on each loop
   }
   ```

2. **`while` Loop**

   A `while` loop runs a block of code as long as a certain condition is true. It stops running when the condition becomes false.

   **Syntax:**

   ```cpp
   while (condition) {
       // Code to run while the condition is true
   }
   ```

3. **`do-while` Loop**

   A `do-while` loop runs a block of code at least once. It then continues to run the code as long as the condition is true. The condition is checked after the code runs, so it always runs at least once.

   **Syntax:**

   ```cpp
   do {
       // Code to run at least once and repeat while the condition is true
   } while (condition);
   ```
## Code
```
#include <iostream>
using namespace std;

int main() {
    // Using while loop
    int i = 0;
    cout << "Using while loop:" << endl;
    while (i < 100) {
        cout << "hello world while loop " << endl;
        i++;
    }

    cout << endl; 

    // Using for loop
    cout << "Using for loop:" << endl;
    for (int j = 0; j < 100; j++) {
        cout << "hello world for loop" << endl;
    }

    cout << endl; 

    // Using do-while loop
    int k = 0;
    cout << "Using do-while loop:" << endl;
    do {
        cout << "hello world do-while loop" << endl;
        k++;
    } while (k < 100);

    return 0;
}
```
## Output
![image](https://github.com/user-attachments/assets/105f26f5-d73d-460d-b972-8cf8175f2873)

## Conclusion

In this experiment we learnt how to implement all the type of decision making statement loops like for, while and do while in C++ programming language
