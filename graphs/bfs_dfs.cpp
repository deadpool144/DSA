#include<iostream>
#include<vector>
#include<stack>
#include<queue>


using namespace std;


void dfs(stack<int>& s, vector<bool>& visited, vector<vector<int>>& graph,int source) {     // non-recursive DFS
    visited[source] = true; 
    s.push(source);
    while(s.size() > 0){
        int node = s.top();
        s.pop();
        cout << node << " ";
        for(int neg: graph[node]){
            if(!visited[neg]) {
                visited[neg] = true;
                s.push(neg);
            }
        }
    }
}

void recursiveDFS(vector<bool>& visited, vector<vector<int>>& graph, int source){       // recursive DFS
    visited[source] = true;
    cout << source << " ";
    for(int neg: graph[source]){
        if(!visited[neg]) {
            recursiveDFS(visited, graph, neg);
        }
    }
}


int main() {
    stack<int> s;
    vector<vector<int>> graph = {
        {1, 2},
        {0, 3},
        {0, 4},
        {1},
        {2}
    };
    vector<bool> visited(graph.size(), false);
    int source = 0; // Starting node for DFS
    cout << "DFS Traversal: ";
    dfs(s, visited, graph, source);
    return 0;
}
