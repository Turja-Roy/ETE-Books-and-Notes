#include <bits/stdc++.h>
using namespace std;

int main ()
{
    freopen("input.txt", "r", stdin);
    freopen("Prac-2_out.txt", "w", stdout);

    int t=2;
    for (int k=0 ; k<t ; k++) {
        cout << "===== Graph" << k+1 << "=====\n";
        int nodes, edges; cin >> nodes >> edges;
        map<int, set<int>> graph;

        for (int i=0 ; i<edges ; i++) {
            int u, v; cin >> u >> v;
            graph[u].insert(v);
            graph[v].insert(u);
        }

        for (auto i : graph) {
            cout << i.first << " -> ";

            for (auto j : i.second) cout << j << " ";
            cout << endl;
        }
        if (k != t-1) cout << endl;
    }

    return 0;
}
