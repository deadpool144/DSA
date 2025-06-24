// backtaring: This project uses the backtracking technique to generate all subsets of a given set.
#include<iostream>
#include<vector>

using namespace std;


void subSetAll(vector<int>& arr, int i, vector<int>& current,vector<vector<int>>& subSets) {
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
    

 int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> temp;
    vector<vector<int>> subSets;
    subSetAll(arr, 0,temp, subSets);
    
    cout << "Subsets are: " << endl;
    for (const auto& subset : subSets) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }
    
    return 0;
}