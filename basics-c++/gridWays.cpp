// you have been given a task to implement a function that calculates the number of ways to reach the  top left corner of a grid to the bottom right corner of a grid. 

#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> dp(100, vector<int>(100, -1));

int travelWays(int m,int n){ //suppost it as matrix of m rows and n columns
    if(m == 1 && n == 1) 
    return 1;
    if(m <= 0 || n <= 0)
    return 0;
    if(dp[m][n]!=-1)
    return dp[m][n];
    
    return dp[m][n] = travelWays(m-1, n) + travelWays(m, n-1);

}

int main() {
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int ways = travelWays(m, n);
    cout << "Number of ways to travel from top left to bottom right: " << ways << endl;

    return 0;
}