#include <bits/stdc++.h>
using namespace std;

int main ()
{
    freopen("input.txt", "r", stdin);
    freopen("Prac-1_out.txt", "w", stdout);

    int t=2;
    for (int i=0 ; i<t ; i++) {
        cout << "===== Graph" << i+1 << "=====\n\n";
        int nodes, edges; cin >> nodes >> edges;
        vector<vector<int>> adj_mat(nodes, vector<int>(nodes, 0));

        for (int i=0 ; i<edges ; i++) {
            int u, v; cin >> u >> v;
            adj_mat[u][v] = 1;
            adj_mat[v][u] = 1;
        }

        for (int i=0 ; i<nodes ; i++) {
            for (int j=0 ; j<nodes ; j++) cout << adj_mat[i][j] << " ";

            cout << endl;
        }
        if (i != t-1) cout << endl;
    }

    return 0;
}
