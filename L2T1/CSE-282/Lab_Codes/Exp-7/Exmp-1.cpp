#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int nodes, edge, u, v;

    cout << "Enter Number of Nodes: ";
    cin >> nodes;
    cout << "Enter Number of Edges: ";
    cin >> edge;

    map<int, vector<int>> graph;

    for (int i=0 ; i<edge ; i++) {
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout << "Adjacency List: " << endl;
    for (auto i : graph) {
        cout << i.first << " --> ";
        for (auto j : i.second) {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
