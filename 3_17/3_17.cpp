/* Exercise
3.17:
重做 3.3.2 节 的习题，用迭代器而不是下标操作来访
问 vector 中的元素
 * 
 * Exercise
3.13:
读一组整数到 vector 对象，计算并输出每对相邻元素的
和。如果读入元素个数为奇数，则提示用户最后一个元素
没有求和，并输出其值。然后修改程序：头尾元素两两配
对（第一个和最后一个，第二个和倒数第二个，以此类推），
计算每对元素的和，并输出。
 * 
 * Exercise
3.14:
读入一段文本到 vector 对象，每个单词存储为 vector
中的一个元素。把 vector 对象中每个单词转化为大写字
母。输出 vector 对象中转化后的元素，每八个单词为一
行输出。
 * File:   3_17.cpp
 * Author: Bobby
 *
 * Created on February 3, 2013, 7:59 PM
 */

#include <cstdlib>
#include<iostream>
#include<vector>
#include<string>
#include<cctype>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

#if 0
        /* * Exercise
3.14:
读入一段文本到 vector 对象，每个单词存储为 vector
中的一个元素。把 vector 对象中每个单词转化为大写字
母。输出 vector 对象中转化后的元素，每八个单词为一
行输出。*/
    vector<int> vint;
    int num,sum;
    cout << "please input some int value:" << endl;
    while(cin >> num)
        vint.push_back(num);
    if(0 == vint.size())
    {
        cout << "error: no valid element in the vector" << endl;
        return -1;
    }

    vector<int>::size_type cnt = 0;
#if 0
    for(vector<int>::iterator ite = vint.begin(); ite < (vint.end()-1); ite = ite + 2)
    {
        sum = *ite + *(ite+1);
        cout << sum << " ";
        cnt++;
        if(cnt%6 == 0)
            cout << endl;
        
    }
    if(1 == (vint.size()%2))
    {
        cout << endl << "one element left in the vector,no sum, the element is: " << endl;
        cout << *(vint.end()-1) << endl;
    }
#endif
    vector<int>::const_iterator ifirst,ilast;
    for(ifirst = vint.begin(),ilast = vint.end()-1;
        ilast - ifirst >=1; --ilast,++ifirst)
    {
        cout << "\t" << *ifirst + *ilast << "\t";
        if(cnt%8 == 0)
            cout <<endl;
    }
    if(ifirst == ilast)
    {
        cout << "the middle element has no sum, it is:" << *ifirst << endl;
    }
    return 0;
#endif
    /* * Exercise
3.14:
读入一段文本到 vector 对象，每个单词存储为 vector
中的一个元素。把 vector 对象中每个单词转化为大写字
母。输出 vector 对象中转化后的元素，每八个单词为一
行输出。*/
    vector<string> vstring;
    string word;
    cout << "please type some words: " << endl;
    while(cin >> word)
        vstring.push_back(word);
    vector<string>::size_type cnt;
    for(vector<string>::iterator ielement = vstring.begin(); ielement < vstring.end(); ielement++)
    {
        for(string::size_type charId = 0; charId < (*ielement).size() ; charId++)
        {
            (*ielement)[charId] = toupper((*ielement)[charId]);
        }
        cnt++;
        cout <<"\t"<< *ielement << "\t";
        if(0 == cnt%8)
            cout << endl;
    }
    return 0;
}

