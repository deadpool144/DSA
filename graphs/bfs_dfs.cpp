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

void bfs(queue<int>& q, vector<bool>& visited, vector<vector<int>>& graph, int source) {        //bfs   you can remove the queue and visited since it can be done without it or inside the funcion
    visited[source] = true;
    q.push(source);
    while(q.size() > 0){
        int node= q.front();
        q.pop();
        cout << node << " ";
        for(int neg: graph[node]){
            if(!visited[neg]) {
                visited[neg] = true;
                q.push(neg);
            }
        }
            
    }
}


int main() {
    stack<int> s;
    queue<int> q;
    vector<vector<int>> graph = {
        {1, 2},
        {0, 3},
        {0, 4},
        {1},
        {2}
    };
    vector<bool> visited(graph.size(), false);
    int source = 0; // Starting node for DFS
    cout << "bFS Traversal: ";
    bfs(q, visited, graph, source);
    return 0;
}
