#include<iostream>
#include<vector>

using namespace std;

vector<int> arr[5];


void createGraph() {
    // Example: Adding edges to the graph
    arr[0].push_back(1);
    arr[0].push_back(2);
    arr[1].push_back(0);
    arr[1].push_back(3);
    arr[2].push_back(0);
    arr[2].push_back(4);
    arr[3].push_back(1);
    arr[4].push_back(2);
}


void addEdge(int u, int v) {
    arr[u].push_back(v);
    arr[v].push_back(u); // For undirected graph
}


void printGraph() {
    for(int i = 0; i < 5; i++) {
        cout << "Node " << i << ": ";
        for(int j : arr[i]) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    createGraph();
    printGraph();
    addEdge(1, 4);
    cout << "After adding edge (1, 4):" << endl;
    printGraph(); 
    return 0;
}