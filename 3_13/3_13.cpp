/* 
 * Exercise
3.13:
读一组整数到 vector 对象，计算并输出每对相邻元素的
和。如果读入元素个数为奇数，则提示用户最后一个元素
没有求和，并输出其值。然后修改程序：头尾元素两两配
对（第一个和最后一个，第二个和倒数第二个，以此类推），
计算每对元素的和，并输出。
 * File:   3_13.cpp
 * Author: Bobby
 *
 * Created on February 3, 2013, 2:27 PM
 */

#include <cstdlib>
#include<iostream>
#include<string>
#include<vector>
using std::string;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

/*
 * 
 */
int main(int argc, char** argv) {
    vector<int> vec1,sum;
    int input,result;
    vector<int>::size_type loopsize;
    cout<<"please input several int value: " <<endl;
    while(cin >> input)
        vec1.push_back(input);
#if 0
    if(0 == (vec1.size()%2))
    {
        loopsize = vec1.size();
    }
    else
    {
        loopsize = vec1.size() - 1;
        cout << "the last element has no sum, the element's value is: "
             << vec1[vec1.size() - 1] << endl;
    }
    
    for(vector<int>::size_type x = 0; x != loopsize; x++ )
    {
        result = vec1[x]+vec1[x+1];
        x = x+1;
        sum.push_back(result);
    }
    cout << "the sum of two adjacent numbers is: " << endl;
    for(vector<int>::size_type y = 0; y != sum.size(); ++y)
    {
        cout << sum[y] << endl;
    }
#endif
    vector<int>::size_type size = vec1.size();
    vector<int>sum2;
    int result2 = 0;
    if(0 == (vec1.size()%2))
    {
        loopsize = vec1.size()/2;
    }
    else
    {
        loopsize = (vec1.size()-1)/2;
        cout << "the middle element: " << vec1[loopsize] << " has no sum" << endl;
    }
    for(vector<int>::size_type x = 0; x != loopsize; ++x)
    {
        result2 = vec1[x]+vec1[vec1.size()-1-x];
        sum2.push_back(result2);
    } 
    cout << "the sum the the first and the last element and so forth is :" << endl;
    for(vector<int>::size_type y = 0; y != sum2.size(); ++y)
    {
        cout << sum2[y] << endl;
    }
    
    return 0;
}

