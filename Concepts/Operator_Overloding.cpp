#include<iostream>
using namespace std ;

// Define class B
class B {
     public: 
            int a; // Public data member to store an integer value

            // Overloading the '+' operator
            void operator+(B obj) {
                  // Access the value of 'a' from the current object
                  int val1 = this->a;

                  // Access the value of 'a' from the passed object
                  int val2 = obj.a;

                  // Perform subtraction of val2 from val1 and display the result
                  cout << "OutPut : " << val1 - val2 << endl;
            }

            void operator() (){
                  cout << "I am "<< this->a << "\n";
                  cout <<"I am Breaket :)\n"; 
            }
           
};

int main() {
     B obj1; // Create first object of class B
     B obj2; // Create second object of class B

     obj1.a = 9; // Assign value to the 'a' member of obj1
     obj2.a = 10; // Assign value to the 'a' member of obj2

     // Use the overloaded '+' operator
     obj1 + obj2; 

      // Use the Overloaded '()' Operator
      obj1();
     return 0; 
}

/*
Notes:
1. **Operator Overloading**:
   - Operator overloading allows redefining the functionality of operators for user-defined data types.
   - The `+` operator in this program is overloaded to perform subtraction instead of addition.

2. **How it Works**:
   - `obj1 + obj2` calls the overloaded `operator+` function.
   - `obj1` is the calling object (`this`), and `obj2` is passed as the argument.

3. **Use of `this` Pointer**:
   - The `this` pointer refers to the current object (`obj1` in this case).
   - It is used to access the `a` member of the calling object.

4. **Key Observations**:
   - The result of the operation is printed directly inside the overloaded function.
   - This program demonstrates operator overloading for a binary operator (`+`).

5. **Extension**:
   - This concept can be extended to overload other operators, like `-`, `*`, `/`, or even comparison operators, as needed.

6. **Important Notes**:
   - Not all operators can be overloaded (e.g., `::`, `sizeof`, `.?`, etc.).
   - Overloading should be used carefully to ensure code clarity and maintainability.
*/
