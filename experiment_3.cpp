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
}
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
