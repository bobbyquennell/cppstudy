/* Exercise
3.7:
编一个程序读入两个 string 对象，测试它们是否相等。
若不相等，则指出两个中哪个较大。接着，改写程序测试
它们的长度是否相等，若不相等指出哪个较长。
 * File:   3_7.cpp
 * Author: Bobby
 *
 * Created on January 31, 2013, 10:01 PM
 */

#include <cstdlib>
#include<iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

/*
 * 
 */
int main(int argc, char** argv) {
    string s1, s2;
    string::size_type length;
    cout << "please input 2 strings"<<endl;
    cin >> s1 >> s2;
    if(s1 == s2)
    {
        cout << "the two strings: " << s1 << " and " << s2 << " are equal " << endl;
    }
    else if (s1 > s2)
    {
        cout <<"the first string: " << s1 << " is larger than the second one: " << s2 <<endl;
    }
    else
    {
        cout<< "the second string: " << s2 << " is larger than the first one: " << s1 << endl;
    }
    cout <<"now, start comparing their length ...." << endl;
    if(s1.size() == s2.size())
    {
        length = s1.size();
        cout<< "the two strings have equal size: " << length << endl;
    }
    else if (s1.size() > s2.size())
    {
        cout << "the first string is longer than the second one, its size is: " << s1.size() <<endl;
    }
    else
    {
        cout << "the second string has longer length than the first one, its size is: " <<s2.size() << endl;
        
    }

    return 0;
}

