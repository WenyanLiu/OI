#include <iostream>
using namespace std;

int p2946 () {
    int n;
    int a[100];
    
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int max = 0, tmp = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            tmp = 0;
            for (int k = 0; k < n; k++) {
                if (k < i || k > j) {
                    tmp += a[k];
                } else {
                    tmp += 1 - a[k];
                }
            }
            if (max < tmp) {
                max = tmp;
            }
        }
    }
    
    cout << max << endl;
    
    return 0;
}