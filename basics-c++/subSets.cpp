// backtaring: This project uses the backtracking technique to generate all subsets of a given set.
#include<iostream>
#include<vector>

using namespace std;


void subSetAll(vector<int>& arr, int i, vector<int>& current,vector<vector<int>>& subSets) {       // for all subsets      
    if (i == arr.size()) {
        subSets.push_back(current);
        return;
    }
    current.push_back(arr[i]);
    subSetAll(arr, i + 1, current, subSets); 
    current.pop_back(); 
    subSetAll(arr, i + 1, current, subSets);
    return;    
}


void subSetNoDublicate(vector<int>& arr, int i, vector<int>& current,vector<vector<int>>& subSets) {        // for dublicated
    if (i == arr.size()) {
        subSets.push_back(current);
        return;
    }
    current.push_back(arr[i]);
    subSetNoDublicate(arr, i + 1, current, subSets); 
    current.pop_back();
    int j = i + 1;
    while(j < arr.size() && arr[j] == arr[i])
    j++; 
    subSetNoDublicate(arr, j, current, subSets);
    return;    
}
    

 int main() {
    vector<int> arr = {1, 2, 2};
    vector<int> temp;
    vector<vector<int>> subSets;
    subSetNoDublicate(arr, 0,temp, subSets);
    
    cout << "Subsets are: " << endl;
    for (vector<int>set:subSets) {
        cout << "{ ";
        for (int num :set) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
    
    return 0;
}