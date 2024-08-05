# Experiment 5

## Aim
To study and implement C++ decision-making statements.

## Theory
Decision-making statements in C++ are essential for controlling the flow of a program based on specific conditions. 
These include if, if-else, else-if, and switch statements, which allow the program to make choices and execute different blocks of code 
depending on the conditions. The if statement checks a condition and executes the associated code if it's true. The if-else statement 
provides an alternative block of code for when the condition is false, while the else-if ladder evaluates multiple conditions sequentially. 
The switch statement evaluates an expression and executes a corresponding block of code, offering a more structured approach when dealing 
with multiple discrete values. Understanding and implementing these decision-making statements is crucial for creating programs that can respond 
dynamically to varying inputs and scenarios.

## Code
```
#include <iostream>
using namespace std;

int main() {
    char letter;

    // Prompt the user to enter a letter
    cout << "Enter a letter: ";
    cin >> letter;

    // Check if the letter is a vowel
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' ||
        letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U') {
        cout << letter << " is a vowel." << endl;
    } else {
        // If not a vowel, assume it's a consonant (no validation for input)
        cout << letter << " is a consonant." << endl;
    }

    return 0;
}
```

## Conclusion
Implementing decision-making statements in C++ is fundamental for developing flexible and dynamic programs. 
By using constructs like if, if-else, else-if, and switch, we can control the flow of a program and make it responsive 
to different inputs and conditions. This experiment demonstrated how these statements enable efficient decision-making processes in C++, 
allowing for the creation of robust applications that handle diverse scenarios and user interactions effectively.
