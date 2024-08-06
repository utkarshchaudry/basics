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

## Conclusion
Implementing decision-making statements in C++ is fundamental for developing flexible and dynamic programs. 
By using constructs like if, if-else, else-if, and switch, we can control the flow of a program and make it responsive 
to different inputs and conditions. This experiment demonstrated how these statements enable efficient decision-making processes in C++, 
allowing for the creation of robust applications that handle diverse scenarios and user interactions effectively.
