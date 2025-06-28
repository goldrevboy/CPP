#include<iostream>
#include <cstdlib> // for EXIT_SUCCESS and EXIT_FAILURE
#include "add.h"

// int add(int a, int b); // Forward declaration of the function

int main() {

    /*
    int a{};
    std::cin >> a ;

    if (std::cin.fail()) {
        std::cerr << "Invalid input detected. Please enter valid integers." << std::endl;
        return EXIT_FAILURE; // Return failure code
    }
    */

    // Function main will implicitly return 0 if no return statement is provided
    
    /*
    void doSomething(int) // ok: unnamed parameter will not generate warning
    {
    }
    */

    // If the object is a class type object, prior to destruction, a special function called a destructor is invoked. 
    // In many cases, the destructor does nothing, in which case no cost is incurred. We introduce destructors in lesson 15.4 -- Introduction to destructors.

    // Return by value returns a temporary object (that holds a copy of the return value) to the caller.

    // if a forward declaration is made and the function is called, but the program never defines the function,
    //  the program will compile okay, but the linker will complain that it can’t resolve the function call.


    std::cout << add(3,4) << std::endl; // This will cause a linker error if add is not defined

    // The add function is defined in another file (add.cpp), so we need to link that file during compilation.
    // we also need to declare the function prototype before using it in main.

    // Most naming collisions occur in two cases:

    // 1. Two (or more) identically named functions (or global variables) are introduced into separate files 
    // belonging to the same program. This will result in a linker error, as shown above.
    // 2. Two (or more) identically named functions (or global variables) are introduced into the same file. This will result in a compiler error.


    /////// NAMESPACE ///////
    // A namespace provides another type of scope region (called namespace scope) that allows you to declare or define names inside of it for the purpose of disambiguation. 
    // The names declared in a namespace are isolated from names declared in other scopes, allowing such names to exist without conflict.
    // A namespace may only contain declarations and definitions. Executable statements are only allowed as part of a definition (e.g. of a function).

    // by default global namespace

    // :: symbol is an operator called the scope resolution operator


    // Preprocessor directives (often just called directives) are instructions that start with a # symbol and end with a newline
    #define CASE_A

    #ifdef CASE_A
    std::cout << "Case A is defined" << std::endl;
    #endif

    // #ifndef does if not defined adn #if 0 is false

    /*
    #define FOO 9 // Here's a macro substitution

    #ifdef FOO // This FOO does not get replaced with 9 because it’s part of another preprocessor directive
        std::cout << FOO << '\n'; // This FOO gets replaced with 9 because it's part of the normal code
    #endif

    */

    // # define doesn't understand functions and stuff so it is accessible anytime after defined


    // in main if I use #define smtg and another function other file uses #ifdef then it won't take the one defined in main

    // header files
    // Conventionally, header files are used to propagate a bunch of related forward declarations into a code file.
    // When you #include a file, the content of the included file is inserted at the point of inclusion. This provides a useful way to pull in declarations from another file

    // avoid function and variable definitions in your header files (for now)
    // we will encounter additional kinds of definitions that can be safely defined in header files (because they are exempt from the ODR). 
    // This includes definitions for inline functions, inline variables, types, and templates. 

    //this doesn’t work if it is a parameter with a different type instead of a return type. This is because C++ supports overloaded functions (functions with the same 
    // name but different parameter types), so the compiler will assume a function with a mismatched parameter type is a different overload. Can’t win em all.

    /////////HEASDER GUARDS////////
    // Header guards are a common technique to prevent multiple inclusions of the same header file.
    // They are used to ensure that the contents of a header file are only included once in a single translation unit, preventing redefinition errors.
    // Header guards are typically implemented using preprocessor directives.
    /*
    #ifndef SOME_UNIQUE_NAME_HERE
    #define SOME_UNIQUE_NAME_HERE

    // your declarations (and certain types of definitions) here

    #endif
    */


    // header guard doesn't prevent loading a header file multiple times in different files,
    // but it does prevent the same header file from being loaded multiple times in the same file (translation unit).

    // one can use #pragme once to achieve the same effect as header guards, but it is not as portable as the traditional header guard method.
    // The #pragma directive was designed for compiler implementers to use for whatever purposes they desire.
    // With the exception of #pragma once, do not expect a pragma that works on one compiler to be supported by another.

    return EXIT_SUCCESS; // Return success code
}
