/* Exercise
3.18:
编写程序来创建有 10 个元素的 vector 对象。用迭代器
把每个元素值改为当前值的 2 倍。
 * File:   3_18.cpp
 * Author: Bobby
 *
 * Created on February 3, 2013, 9:51 PM
 */

#include <cstdlib>
#include<vector>
#include<iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    vector<int> vint;
    int i=0,input;
    cout << "please input 10 int values:" << endl;
    while((cin >> input)&&(i<10))
    {
        vint.push_back(input);
        i++;
    }
    cout << "now we will enlarge the elements' value " << endl;
    vector<int>::size_type cnt = 0;
    for(vector<int>::iterator iter = vint.begin(); iter != vint.end(); iter++)
    {
        *iter = (*iter)*2;
        cout << *iter <<"\t";
        cnt++;
        if(0 ==(cnt%8))
            cout << endl;
    }

    return 0;
}

