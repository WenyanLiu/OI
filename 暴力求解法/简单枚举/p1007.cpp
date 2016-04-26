#include <iostream>
using namespace std;

int p1007() {
    
    int k;
    cin >> k;
    
    double Sn = 0;
    int n;
    
    for (n = 1; Sn <= k; n++) {
        Sn += 1.0/n;
    }
    cout << n-1 << endl;
    
    return 0;
}