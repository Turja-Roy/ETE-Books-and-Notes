#include <bits/stdc++.h>
#define vi vector<int>
#define si set<int>
#define mii map<int, int>
#define pb push_back
#define ff first
#define ss second
#define mkp make_pair
using namespace std;

map<int,pair<int,vi>> shortestPath (map<int,si> graph, int source) {
    mii dist, parent;
    dist[source]=0, parent[source]=-1;

    map<int,pair<int,vi>> result;

    queue<int> q;
    q.push(source);

    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (auto v : graph[u]) {
            if (!dist.count(v)) {
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push(v);

                vi path;
                int x = v;
                while (x != -1) {
                    path.pb(x);
                    x = parent[x];
                }
                reverse(path.begin(), path.end());
                result[v] = mkp(dist[v], path);
            }
        }
    }

    return result;
}

vi paths (map<int,si>graph, mii parent, int source, int dest) {
    vi path;
    int u = dest;
    while (u != -1) {
        path.pb(u);
        u = parent[u];
    }
    reverse(path.begin(), path.end());
    return path;
}

int main() {
    freopen("Exmp-in.txt", "r", stdin);
    freopen("Exmp-2-out.txt", "w", stdout);

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

    auto result = shortestPath(graph, source);

    for (auto it : result) {
        if (it.ff == source) continue;
        cout << "Distance from " << source << " to " << it.ff << " is " << it.ss.ff << endl;
        cout << "Path: ";
        for (auto x : it.ss.ss) cout << x << " ";
        cout << endl;
    }

    return 0;
}
