#include <bits/stdc++.h>
using namespace std;

void bfs (map<int, vector<int>> graph, int source) {
    queue<int> q;
    map<int, bool> visited;

    q.push(source);
    visited[source] = true;

    while (!q.empty()) {
        int u = q.front();
        cout << u << " ";

        for (auto v : graph[u]) {
            if (!visited[v]) {
                q.push(v);
                visited[v] = true;
            }
        }
        q.pop();
    }
    cout << endl;
}

int main ()
{
    int nodes, edges;

    cout << "Number of Nodes: "; cin >> nodes;
    cout << "Number of Edges: "; cin >> edges;

    map<int, vector<int>> graph;

    for (int i=0 ; i<edges ; i++) {
        int u, v; cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int source;
    cout << "Source Node: "; cin >> source;

    bfs(graph, source);

    return 0;
}
