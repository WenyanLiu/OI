#include <iostream>
using namespace std;

int n, tot = 0, vis[3][26] = {0};

void search(int cur) {
    int i;
    if (n == cur) {
        tot++;
    } else for (i = 0; i < n; i++) {
        if (!vis[0][i] && !vis[1][cur-i+n] && !vis[2][cur+i]) {
            vis[0][i] = vis[1][cur-i+n] = vis[2][cur+i] = 1;
            search(cur+1);
            vis[0][i] = vis[1][cur-i+n] = vis[2][cur+i] = 0;
        }
    }
}

int main() {
    cin >> n;
    search(0);
    cout << tot << endl;
    return 0;
}