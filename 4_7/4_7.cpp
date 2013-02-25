/* Exercise
4.7:
编写必要的代码将一个数组赋给另一个数组，然后把这段
代码改用 vector 实现。考虑如何将一个 vector 赋给另
一个 vector。
 * File:   4_7.cpp
 * Author: Bobby
 *
 * Created on February 25, 2013, 9:39 PM
 */

#include <cstdlib>
#include<vector>
#include<string>
#include<iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

/* part1  将一个数组赋给另一个数组 */
    int array1[] = {0,1,2,3,4,5,6,7};
    int array2[8];
    for(int i = 0; i < 8; ++i)
    {
        array2[i] = array1[i];
        cout << array2[i] << "\t";
    }
    cout << endl;
/* part2 将一个vector赋给另一个vector */
    vector<int> vec1, vec2, vec3;
    for(vector<int>::size_type x = 0;x != 10; x++)
    {
        vec1.push_back(x);
        vec3.push_back(x+2);
    }
    vec3.push_back(999);
    vec2 = vec1;
    vec3 = vec1;
    for(vector<int>::iterator ite2 = vec2.begin(); ite2 != vec2.end();ite2++)
    {
        cout << *ite2 << "\t";
    }
    cout << endl;
    for(vector<int>::iterator ite3 = vec3.begin(); ite3 != vec3.end();ite3++)
    {
        cout << *ite3 << "\t";
    }
    cout << endl;
    return 0;
}

