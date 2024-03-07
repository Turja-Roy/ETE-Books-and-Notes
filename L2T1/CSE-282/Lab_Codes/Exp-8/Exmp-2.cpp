#include <bits/stdc++.h>
#define vi vector<int>
#define si set<int>
#define mii map<int, int>
#define pb push_back
#define ff first
#define ss second
#define mkp make_pair
using namespace std;

map<mii, vi> shortestPath(map<int, si> graph, int source) {
    queue<int> q;
    mii distance, parent;
    map<int, bool> visited;

    for (auto it : graph) distance[it.ff] = INT_MAX, parent[it.ff] = -1;

    distance[source] = 0;
    q.push(source);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto v : graph[u]) {
            if (distance[v] == INT_MAX) {
                distance[v] = distance[u] + 1;
                parent[v] = u;
                q.push(v);
            }
        }
    }

    map<mii, vi> result;

    return result;
}

int main() {
    freopen("Exmp-in.txt", "r", stdin);

    int nodes, edges;
    map<int, si> graph;

    // cout << "Number of Nodes: ";
    cin >> nodes;
    // cout << "Number of Edges: ";
    cin >> edges;

    // cout << "Enter the edge connnections:" << endl;
    for(int i = 0; i < edges; i++) {
        int u, v; cin >> u >> v;

        graph[u].insert(v);
        graph[v].insert(u);
    }

    // cout << "Enter source: ";
    int source; cin >> source;

    map<mii, vi> result = shortestPath(graph, source);

    for (auto it : result) {
        for (auto i : it.ff) {
            cout << "Distance from " << source << " to " << i.ff << " is: " << i.ss << endl;
        }
        cout << "Path from " << source << " to " << it.ff.begin()->ff << " is: ";
        for (auto i : it.ss) {
            cout << i << " ";
        }
    }

    return 0;
}
