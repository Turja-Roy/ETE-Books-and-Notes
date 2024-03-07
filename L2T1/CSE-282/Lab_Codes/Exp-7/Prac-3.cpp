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

        for (auto v : graph[u])
            if (!visited[v]) q.push(v), visited[v] = true;

        q.pop();
    }
    cout << endl;
}

int main ()
{
    freopen("input.txt", "r", stdin);
    freopen("Prac-3_out.txt", "w", stdout);

    int t=2;
    for (int i=0 ; i<t ; i++) {
        cout << "===== Graph" << i+1 << "=====\n\n";
        int nodes, edges;
        cin >> nodes >> edges;

        map<int, vector<int>> graph;

        for (int i=0 ; i<edges ; i++) {
            int u, v; cin >> u >> v;

            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        auto it = graph.begin();
        int source = std::advance( it, random_0_to_n(graph.size()) );

        bfs(graph, source);
        if (i != t-1) cout << endl;
    }

    return 0;
}
