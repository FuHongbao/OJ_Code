/*************************************************************************
	> File Name: 171.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月11日 星期四 11时31分46秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;



int main() {
    char n[1050];
    cin >> n;
    int len = strlen(n);
    int zero = 0;
    for (int i = len - 1; i >= 0; i--) {
        if (n[i] == '0') zero += 1;
    }
    if (zero == len - 1 && n[0] == '1') {
        for (int i = 0; i < zero; i++) {
            cout <<"9";
        }
        cout << endl;
    } else {
        for (int i = 0; i < len/2 - 1; i++) {
            cout << n[i];
        }
        int temp = n[len / 2];
        if (len % 2 == 0) {
            for (int i = len / 2 - 1; i >= 0; i--) {
                cout << n[i];
            }
        } else {
            for (int i = len / 2; i >= 0; i--) {
                cout << n[i];
            }
        }
        cout << endl;
    }
    
    return 0;
}





