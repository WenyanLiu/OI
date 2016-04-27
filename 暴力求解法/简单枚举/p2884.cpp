#include <iostream>
#include <string>
using namespace std;

int str2num (string str) {
    int n = 0;
    int i;
    int len = int(str.length());
    for (i = 0; i < len; i++) {
        n *= 10;
        n += str[i] - '0';
    }
    return n;
}

int p2884() {
    string str_in;
    cin >> str_in;
    int i;
    int i_eq = int(str_in.find('='));
    
    for(i = 1; i < i_eq; i++) {
        if(str2num(str_in.substr(0,i)) + str2num(str_in.substr(i,i_eq-i)) == str2num(str_in.substr(i_eq+1)))
            break;
    }
    
    if(i >= i_eq) {
        cout << "Impossible!" << endl;
    } else {
        str_in.insert(i, "+");
        cout << str_in << endl;
    }
    return 0;
}