#include<iostream>
using namespace std;

// Define base class 'animal'
class animal {
     public: 
          // Member function to represent speaking behavior of a generic animal
          void speak() {
               cout << "I am speaking :)\n";
          }
};

// Define derived class 'dog' that inherits from 'animal'
class dog : public animal {
     public: 
          // Member function to represent speaking behavior of a dog
          void speak() {
               cout << "I am Barking :)\n";
          }
};

int main() {
     dog d1; // Create an object of class 'dog'
     d1.speak(); // Call the speak() function for the 'dog' object
     return 0; // Exit the program
}

/*
Notes:
1. **Inheritance**:
   - The `dog` class inherits from the `animal` class using public inheritance.
   - This means the public members of the `animal` class are accessible in the `dog` class.

2. **Function Overriding**:
   - The `speak()` function is defined in both the `animal` and `dog` classes.
   - In the `dog` class, the `speak()` function overrides the base class function.

3. **Output**:
   - When `d1.speak()` is called, the `speak()` function in the `dog` class is executed, resulting in "I am Barking :)".

4. **Polymorphism**:
   - The overridden function demonstrates runtime polymorphism if a pointer or reference to the base class is used to call the function.
   - In this case, since no pointer or reference is used, it demonstrates simple function overriding.

5. **Key Concepts**:
   - Inheritance enables code reuse and hierarchical relationships between classes.
   - Function overriding allows derived classes to provide specific implementations of base class functions.

6. **Extension**:
   - To demonstrate polymorphism, a `virtual` keyword can be added to the `speak()` function in the base class, enabling dynamic binding.

7. **Important Note**:
   - Without the `virtual` keyword in the base class, the derived class's function will always be called when accessed through an object of the derived class, as shown here.
*/
