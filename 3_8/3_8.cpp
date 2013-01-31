/* Exercise
3.8:
编一个程序，从标准输入读取多个 string 对象，把它们
连接起来存放到一个更大的 string 对象中。并输出连接
后的 string 对象。接着，改写程序，将连接后相
邻 string 对象以空格隔开
 * File:   3_8.cpp
 * Author: Bobby
 *
 * Created on January 31, 2013, 10:28 PM
 */

#include <cstdlib>
#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
 * 
 */
int main(int argc, char** argv) {
    string s1, s2, s3, s4, stotal;
    cout << "please input 4 strings:" <<endl;
    cin >> s1 >> s2 >> s3 >> s4;
    cout << "now, add 4 strings to one string:" << endl;
    stotal = s1 + s2 + s3 + s4;
    cout << "the result is: " << stotal << endl;
    cout << " add 4 strings to one, but with a space gap between each string" << endl;
    stotal = s1 + " " + s2 + " " + s3 + " " + s4;
    cout << " the result is : " << stotal << endl;
    return 0;
}

