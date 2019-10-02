/*************************************************************************
	> File Name: 201.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月09日 星期二 16时10分15秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int a[1005];
int main() {
    int n, k;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        a[k] ++;
    }
    int num = 0;
    int index = 0;
    for (int i = 0; i <= 1000; i++) {
        if (a[i] > 0) {
            num ++;
        }
    }
    cout << num << endl;
    for (int i = 0; i <= 1000; i++) {
        if (a[i] == 0) continue;
            if(index)
            cout << " ";
            if(!index){
                index = 1;
            }
            cout << i;

    }
    cout << endl;

    return 0;
}

