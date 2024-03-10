#include <bits/stdc++.h>
#define vi vector<int>
#define si set<int>
#define mii map<int, int>
#define pb push_back
#define ff first
#define ss second
using namespace std;

mii shortestPath(map<int, si> graph, int source) {
    mii distance;
    queue<int> q;

    q.push(source);

    while(!q.empty()) {
        int u = q.front();
        q.pop();

        for(auto v: graph[u]) {
            if(distance.find(v) == distance.end()) {
                distance[v] = distance[u] + 1;
                q.push(v);
            }
        }
    }

    return distance;
}

int main() {
    freopen("Exmp-in.txt", "r", stdin);
    freopen("Exmp-1-out.txt", "w", stdout);

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

    mii distance = shortestPath(graph, source);

    for(auto i: distance) {
        cout << "Distance from " << source << " to " << i.ff << " is " << i.ss << endl;
    }

    return 0;
}
