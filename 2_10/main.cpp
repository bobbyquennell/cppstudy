/* 
 * File:   main.cpp
 * Author: Bobby
 *
 * Created on January 26, 2013, 9:50 PM
 */
/*newline \n horizontal tab \t
vertical tab \v backspace \b
carriage return \r formfeed \f
alert (bell) \a backslash \\
question mark \? single quote \'
double quote \"
 */
/*Exercise 2.10: Using escape sequences, write a program to print 2M followed by a newline.
Modify the program to print 2, then a tab, then an M, followed by a newline.
 */
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
    cout << "2M" << endl; 
    cout << "2\tM\n\?\a\n\"" <<endl;
    
    return 0;
}

