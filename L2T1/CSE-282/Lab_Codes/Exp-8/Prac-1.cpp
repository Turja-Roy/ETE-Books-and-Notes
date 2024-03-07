#include <bits/stdc++.h>
#define si set<int>
#define mii map<int, int>
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

        for(auto v: graph[u])
            if(distance.find(v) == distance.end()) distance[v] = distance[u] + 1, q.push(v);
    }

    return distance;
}

int main() {
    freopen("input.txt", "r", stdin);

    int t=2;
    for (int i=0 ; i<t ; i++) {
        cout << "===== Graph " << i+1 << " =====\n";
        int nodes, edges; cin >> nodes >> edges;
        map<int, si> graph;


        for(int i = 0; i < edges; i++) {
            int u, v; cin >> u >> v;

            graph[u].insert(v);
            graph[v].insert(u);
        }

        int source; cin >> source;

        mii distance = shortestPath(graph, source);

        for(auto i: distance)
            cout << "Distance from " << source << " to " << i.ff << " is " << i.ss << endl;

        if (i != t-1) cout << endl;
    }

    return 0;
}
