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
    for (int k=0 ; k<t ; k++) {
        cout << "===== Graph " << k+1 << " =====\n";
        int nodes, edges;
        cin >> nodes >> edges;

        map<int, vector<int>> graph;

        for (int i=0 ; i<edges ; i++) {
            int u, v; cin >> u >> v;

            graph[u].push_back(v);
            graph[v].push_back(u);
        }

        srand((unsigned) time(NULL));
        auto it = graph.begin();
        for (int i=0 ; i<rand() % graph.size() ; i++) it++;
        int source = it->first;

        bfs(graph, source);
        if (k != t-1) cout << endl;
    }

    return 0;
}
