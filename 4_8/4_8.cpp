/* Exercise
4.8:
编写程序判断两个数组是否相等，然后编写一段类似的程
序比较两个 vector。
 * File:   4_8.cpp
 * Author: Bobby
 *
 * Created on February 26, 2013, 12:15 PM
 */

#include <cstdlib>
#include<iostream>
#include<vector>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    const size_t array_size = 8;
    int i= 0;
    int array_index = 0;
    const vector<int>::size_type vec_size = 10;
    int array1[array_size];
    int array2[array_size];
    // initialize array1[]
    cout<< "please input " << array_size <<" numbers to initialize array1[]" << endl;
    while((cin >> i)&&(array_index < array_size))
    {
        array1[array_index] = i;
        array_index ++;      
    }
    for(int i = 0; i < array_size; i++)
    {
        cout << array1[i] << "\t";
        if((i-1) == array_size)
            cout << endl;
    }
    array_index = 0;
    cout<< "please input " << array_size <<" numbers to initialize array2[]" << endl;
    while((cin >> i)&&(array_index < array_size))
    {
        array2[array_index] = i;
        array_index ++;      
    }
    for(int i = 0; i < array_size; i++)
    {
        cout << array2[i] << "\t";
        if((i-1) == array_size)
            cout << endl;
    }
    bool isSame = true;
    vector<int> vec1,vec2;
    //for(vector<int>::size_type i = 0; i != vec_size; i++)
    cout << "please input several int value to initialize vector1, \"-1\" to end" << endl;
    while((cin >> i)&&(i != -1))
    {
        vec1.push_back(i);
    }
    cout << "please input several int value to initialize vector2, \"-1\" to end" << endl;
    while((cin >> i)&&(i != -1))
    {
        vec2.push_back(i);
    }
    
    //check whether two arrays are equal;
    for(size_t ix = 0; ix < array_size; ix++)
    {
        if(array1[ix] != array2[ix])
        {
            cout << "array1 and array2 is different in element" << ix << endl;
            isSame = false;
            //break;
        }
    }
    if(isSame == true)
    {
        cout << "the two arrays are equal" << endl;
    }
    // check whether two vectors are equal;
     //vec2.push_back(10);
    if(vec1 == vec2)
    {
        cout << "the two vectors are equal" << endl;
    }
    else
    {
        cout << "the two vectors are different" << endl;
    }
    
    return 0;
}

