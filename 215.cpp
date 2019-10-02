/*************************************************************************
	> File Name: 215.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月01日 星期一 20时04分56秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
char name[50][20];
int sum[50];


int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int a, b, c, d;
        cin >> name[i];
        cin >> a >> b >> c >> d;
        sum[i] = a + b + c + d;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (sum[i] > sum[j]) {
                swap(name[i], name[j]);
                swap(sum[i], sum[j]);
            }
        }
    }
    for (int i = 0; i < 3; i++) {
        cout << name[i] << endl;
    }
    return 0;
}


