/* 
 * File:   3_5.cpp
 * Author: Bobby
 *Exercise
 *3.5:
 *编写程序实现从标准输入每次读入一行文本。然后改写
 *程序，每次读入一个单词。
 * Created on January 30, 2013, 9:15 PM
 */
#include <iostream>
#include<string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using namespace std;
int main(int argc, char** argv) {
    string s1;
    cout << "now while cin"<< endl;
    while(cin >> s1)
    {
        cout << s1 << endl;
    }
    cout << "now getline" <<endl;
    while(getline(cin, s1))
    {
        cout << s1 << endl;
    }
    return 0;
}

