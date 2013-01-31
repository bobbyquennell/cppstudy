/* Exercise
3.10:
编一个程序，从 string 对象中去掉标点符号。要求输入
到程序的字符串必须含有标点符号，输出结果则是去掉标
点符号后的 string 对象。
 * File:   3_10.cpp
 * Author: Bobby
 *
 * Created on January 31, 2013, 10:45 PM
 */

#include <iostream>
#include<string>
#include<cctype>
using std::string;
using std::getline;
using std::cin;
using std::cout;
using std::endl;


/*
 * 
 */
int main(int argc, char** argv) {
    string s1;
    cout << "please input a string with some punctuation" << endl;
    getline(cin, s1);
    cout << s1 << endl;
   cout << "now ,we will delete all punctuation in the string" << endl;
   for(string::size_type i =0; i < s1.size(); i++)
   {
       if(ispunct(s1[i]))
       {
           s1[i] = '\0';
       }
   }
   cout <<"deleting complete " << endl
        << " the result is: " << s1 << endl;
    return 0;
}

