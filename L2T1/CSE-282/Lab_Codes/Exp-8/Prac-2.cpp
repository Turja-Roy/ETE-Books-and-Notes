#include <bits/stdc++.h>
#define si set<int>
#define vi vector<int>
#define pb push_back
#define mii map<int, int>
#define ff first
#define ss second
#define mkp make_pair
using namespace std;

auto shortestPath (map<int,si> graph, int source) {
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

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output-2.txt", "w", stdout);

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

    auto result = shortestPath(graph, source);

    for (auto it : result) {
        if (it.ff == source) continue;
        cout << "Distance (" << source << "-->" << it.ff << ") : " << it.ss.ff << "\t";
        cout << "Path: ";
        for (auto x : it.ss.ss) cout << x << " ";
        cout << endl;
    }

        if (i != t-1) cout << endl;
    }

    return 0;
}
