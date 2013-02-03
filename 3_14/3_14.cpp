/* 
 * Exercise
3.14:
读入一段文本到 vector 对象，每个单词存储为 vector
中的一个元素。把 vector 对象中每个单词转化为大写字
母。输出 vector 对象中转化后的元素，每八个单词为一
行输出。
 * File:   main.cpp
 * Author: Bobby
 *
 * Created on February 3, 2013, 4:08 PM
 */
#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

/*
 * 
 */
int main(int argc, char** argv) {
    vector<string> vtext;
    string word;
    cout << "please input some sentence:" << endl;
    while(cin >> word)
        vtext.push_back(word);
    cout << endl << " starting transforming from lower to upper " << endl;
    for(vector<string>::size_type x = 0; x != vtext.size(); ++x)
    {   
        for(string::size_type y = 0; y !=vtext[x].size(); ++y)
        {
            vtext[x][y]= toupper(vtext[x][y]);
        }
        cout << vtext[x] << " ";
        if(0 == (x+1)%8)
            cout << endl;
    }
    return 0;
}

