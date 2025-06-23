#include<iostream>
#include<vector>

using namespace std;

int main() {
    vector<int> vec0={1,6,9,3,6,3,6,93,};
    vector<int> vec1(10,-1); // Vector of size 10 initialized with -1
    vector<int> vec2(vec0); 

    cout<<"vec0: ";
    for(int i: vec0) 
        cout << i << " ";
    cout << endl;
    cout<<"vec1: ";
    for(int i: vec1) 
        cout << i << " ";
    cout << endl;
    cout<<"vec2: ";
    for(int i: vec2) 
        cout << i << " ";
    cout << endl;

// Demonstrating various vector operations

    //push_back 
    //pop_back
    //insert
    //erase
    // clear
    // size
    // capacity
    // empty
    // front
    // back
    // at
    // [] operator 
    // reserve
    // shrink_to_fit
    return 0;
}