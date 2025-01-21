#include <iostream> // Header file for input-output operations
using namespace std;

// Class to demonstrate abstraction
class abstraction {
private:
    int a, b; // Private variables, hidden from the outside world

    // Advantage: These variables are secure and cannot be directly accessed 
    // or modified from outside the class, ensuring better data integrity.

public:
    // Public method to set values of private variables
    void set(int x, int y) {
        a = x; // Assign value to variable 'a'
        b = y; // Assign value to variable 'b'

        // Advantage: Controlled access ensures valid data can be set, avoiding errors
        // or unexpected behavior due to direct access to variables.
    }

    // Public method to display the values of private variables
    void display() {
        cout << "a = " << a << endl; // Display value of 'a'
        cout << "b = " << b << endl; // Display value of 'b'

        // Advantage: Only relevant information is exposed to the user.
        // Implementation details, like how the variables are stored or updated, remain hidden.
    }
};

int main() {
    abstraction a; // Create an object of the class

    // Advantage: Encapsulation allows clear separation of data and methods to manipulate it.
    a.set(3, 5);   // Set values for the private variables using the setter method

    // Advantage: Ensures a consistent and predictable way to interact with the object,
    // reducing the chances of misuse or errors.
    a.display();   // Display the values using the display method

    // Advantage: Abstraction reduces complexity for users by exposing only
    // what is necessary, keeping the implementation hidden.

    return 0;      // Return 0 to indicate successful program execution
}
