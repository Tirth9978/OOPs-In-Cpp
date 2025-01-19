#include<iostream>  
#include<string>    
using namespace std;

// Base class 'animal'
class animal {
     public: 
          // Function to demonstrate the behavior of animals
          void bark() {
               cout << "Bark\n";  // Prints "Bark"
               return;
          }
};

// Base class 'human'
class human {
     public: 
          // Function to demonstrate the behavior of humans
          void Speak() {
               cout << "Speak\n";  // Prints "Speak"
               return;
          }
};

// Derived class 'hybrid' inheriting from both 'animal' and 'human'
// This demonstrates the concept of multiple inheritance
class hybrid : public animal, public human {

};

int main() {
     hybrid h1;  // Creating an object of the 'hybrid' class

     // Accessing the Speak function from the 'human' class
     h1.Speak();  

     // Accessing the bark function from the 'animal' class
     h1.bark();   

     return 0;  // Program ends
}

/*
Notes on Multiple Inheritance:
1. Multiple inheritance allows a derived class to inherit from more than one base class.
2. In this example, the 'hybrid' class inherits from both the 'animal' and 'human' classes.
3. Advantages:
   - Enables a class to combine functionality from multiple base classes.
   - Promotes code reuse and modular design.
4. Disadvantages:
   - Can lead to ambiguity if multiple base classes have methods with the same name.
   - Increases complexity in class hierarchy management.
5. Use Case:
   - Useful in scenarios where a single derived class needs behaviors or properties from multiple independent classes.
*/
