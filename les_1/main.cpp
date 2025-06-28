#include<iostream>

#include <iostream>
#include <streambuf>
#include <string>



int main() {

    /* One downside of assignment is that assigning a value to a just-defined object
    *  requires two statements: one to define the variable, and another to assign the value. 
    */

    int w {5}; // direct-list-initialization
    int x = 10; // copy -initialization
    int y(15); // direct  -initialization  // used when values are explicitly cast to another type //felt like function call earlier


    // if you try to list-initialize a variable using a value that the variable can not safely hold, the compiler is required to produce a diagnostic
    // int z{3.14}; // error: narrowing conversion from 'double' to 'int'
    // int z(3.14); // ok: direct-initialization, but value is truncated to 3
    [[maybe_unused]] double pi{3.14}; // direct-list-initialization, no error
    // even if pi is not used, it wont show a warnign because we have specified maybe_unused



    ///// COUT BUFFERING /////
    // Statements in our program request that output be sent to the console. However, that output is typically 
    // not sent to the console immediately. Instead, the requested output “gets in line”, and is stored in a 
    // region of memory set aside to collect such requests (called a buffer). Periodically, the buffer is flushed, 
    // meaning all of the data collected in the buffer is transferred to its destination (in this case, the console).


    // std::endl is a manipulator that flushes the output buffer, ensuring that all output is sent to the console immediately.
    // Thats why it is inefficient to use std::endl for every output statement, as it forces the buffer to flush each time.
    // Instead, we can use '\n' to insert a newline without flushing the buffer,


    std::cout << "w: " << w << ", x: " << x << ", y: " << y << std::endl;

    int a{},b{},c{};
    /*
    std::cin >> a;
    std::cout << a << std::endl;
    std::cin >> b; std::cout << b << std::endl;
    std::cin >> c; std::cout << c << std::endl;

    */

    // as far as exctractor is concerned if above happens then 
    // if I enter 5a 4 then it gets taken as 5a 4 \n now 5 is extracted and stored in a
    // but when b scans the buffer it finds a non-numeric character 'a' and enters a fail state. b's value is not changed 
    // then nothing gets extracted for c, so it remains 0

    // for decimals same thing happens it extracts integer part and rest stays there whenever something else access it 
    // gives fail state


    /*
    char ch{};
    std:: cin >> a >> ch >>b;
    std::cout<< a << " " << ch << " "<< b<< std::endl; // validly accepts 5a 4 as 5 a and 4 ... stream extracts 5 and leaves a 4 which is valid for ch
    */

    /*
    double d{};
    std::cin >> a>>d;
    std::cout << a << " " << d << std::endl; // validly handles 2.3 as 2 is exctracted and .3 is valid for d
    */
    // if we want to handle the fail state we can use std::cin.clear() to clear the fail state

    /*
    std:: cout << (x=5) << std::endl; // assignment operator returns the value assigned, so it prints 5
    x=5 evaluated to x
    std::cout << x  // has side effect of printing value of x to console, evaluates to std::cout
    */
    // (std::cout << (x=5)) << 2 << std::endl; // prints 52, as the assignment operator returns the value assigned, so it prints 5 and then 2


    return 0;
}
