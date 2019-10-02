/*************************************************************************
	> File Name: 159.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月15日 星期六 10时26分03秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    char c;
    cin >> c;
    char tmp = c;
    int ind = 0;
    for(char i = c; i >= 'A'; i--) {
        for(int k = 0; k < ind; k++) {
            cout<<" ";
        }
        char cc = c - ind;
        for(char j = cc; j >= 'A'; j--) {
            cout<<j;
        }
        for(char j = 'A'; j < cc; j++) {
            cout<<j;
        }
        ind++;
        cout<<endl;
    }

    return 0;
}





