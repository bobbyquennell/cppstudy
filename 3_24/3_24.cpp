/* Exercise
3.24:
考虑这样的序列 1，2，3，5，8，13，21，并初始化一个
将该序列数字所对应的位置置为 1 的 bitset<32> 对
象。然后换个方法，给定一个空的 bitset，编写一小段
程序把相应的数位设置为 1。
 * File:   3_24.cpp
 * Author: Bobby
 *
 * Created on February 19, 2013, 9:06 PM
 */

#include <cstdlib>
#include<iostream>
#include<bitset>
#include<vector>
using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    bitset<32> bitsetVec1(0x20212E);
    bitset<32> bitsetVec;
    int input;
    vector<int> vecPosition;//1,2,3,5,8,13,21)
    cout << "please in put 1 2 3 5 8 13 21" << endl;
    while(cin >> input)
    {
      vecPosition.push_back(input);
    }
    for (std::vector<int>::iterator ite = vecPosition.begin(); ite != vecPosition.end(); ++ite)
    {
      bitsetVec.set(*ite);
    }
    cout << bitsetVec1 << endl;
    cout << bitsetVec << endl;
    return 0;
}

