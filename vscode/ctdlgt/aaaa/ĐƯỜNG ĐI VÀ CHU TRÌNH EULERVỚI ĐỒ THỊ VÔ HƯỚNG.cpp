#include <bits/stdc++.h>
using namespace std;
#define max 1010

int v, e, a[max][max], vs[max], deg[max];

void Init() {
    cin >> v >> e;
    memset(a, 0, sizeof(a));
    memset(vs, 0, sizeof(vs));
    memset(deg, 0, sizeof(deg));
    for (int i = 0; i < e; i++) {
        int v1, v2;
        cin >> v1 >> v2;
        a[v1][v2] = 1;
        a[v2][v1] = 1;
    }
}

void BFS(int u) {
    queue<int> q;
    q.push(u);
    vs[u] = 1;
    while (!q.empty()) {
        int vv = q.front();
        q.pop();
        for (int i = 1; i <= v; i++) {
            if (!vs[i] && a[vv][i]) {
                q.push(i);
                vs[i] = 1;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        Init();
        BFS(1);
        int ans = 0;
        int lt = 1;
        for (int i = 1; i <= v; i++) {
            if (vs[i] == 0) {
                lt = 0;
                break;
            }
        }
        int dem = 0;
        if (lt) {
            for (int i = 1; i <= v; i++) {
                deg[i] = 0;
                for (int j = 1; j <= v; j++) {
                    if (a[i][j] == 1)
                        deg[i]++;
                }
                if (deg[i] % 2 == 1) {
                    ++dem;
                }
            }
            if (dem == 0) {
                ans = 2;
            } else if (dem <= 2)
                ans = 1;
        }
        cout << ans << "\n";
    }
    return 0;
}