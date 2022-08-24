//CHAPTERS 1-4

// Chapter 1...
#include <iostream> // Input/Output Library, used to deal with I/O

int main()
{
    std::cout << "Hello World!\n";
    
    /*
-> Every C++ program must have a main function where the statements
    are ran sequentially
-> Programs are finished when the last statement inside of main
    is executed
-> std::cout << allows us to send data to the console output
-> line 6 contains a return statement which returns a value of
    0 which indicates that the program ran successfully
*/

// Variables!

    int x; // Defines a variable named x of type integer
    // double width; // Defines a variable named width of type double
    int j, k; // Variables can be defined in one statement by a comma

    int y, z;
    int width;
    width = 5; // has a value of 5
    width = 7; // now has a value of 7
    
    // Initalization
    // Variables can be intialized in many ways
    int a; // no initalization
    int b = 5; // Initalization after equals sign (copy Intialization)
    int c(6); // Intialization in parenthesis (Direct Initialization)
    int d{ 7 }; // Initialization in braces ()
    std::cout << b; // Outputs the variable value
    std::cin >> b; // Inputs a replacement value for the variable from keyboard
    // Multiple Intialization
    int e = 1, f = 2;

    // Intro to Iostream
    std::cout << "Duh Shit__"; // Prints 'Duh Shit' to console
    // Endline
    std::cout << "Last name ever first name greatest" << std::endl; // <- used to endline/start new line
   /* endl vs \n
   endl will return a new line AND flush the output
   \n will return a new line BUT NOT flush the output
   in most cases \n will be more useful
   */

    int g = 77;
    std::cout << "g is equal to " << g << '\n';
    std::cout << "And that's it!";
    // << is the insertion operator (for iostream)
    // >> is the extraction operator
    // std::cin reads input from the keyboard using the extraction operator and must have a variable to store a value
    int h{};
    std::cin >> h;
    std::cout << "You entered " << h << '\n';

// It is generally good practice to avoid using extra whitespace where it is not needed.
    return 0;
}

