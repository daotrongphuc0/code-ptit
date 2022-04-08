#include <bits/stdc++.h>
using namespace std;

// pre: root left right
// in: left root right
// post: left right root

vector<int> in, pre, post;

int Search(int p) {
    for (int i = 0; i < in.size(); i++) {
        if (in[i] == p) return i;
    }
    return -1;
}

void postOrder(int lp, int li, int ri) {
    int x = Search(pre[lp]);
    int left = x - li;
    if (left > 0) postOrder(lp + 1, li, x - 1);
    int right = ri - x;
    if (right > 0) postOrder(lp + left + 1, x + 1, ri);
    cout << pre[lp] << " ";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        in.resize(n);
        pre.resize(n);
        for (int i = 0; i < n; i++) cin >> in[i];
        for (int i = 0; i < n; i++) cin >> pre[i];
        postOrder(0, 0, n - 1);
        cout << "\n";
    }
    return 0;
}