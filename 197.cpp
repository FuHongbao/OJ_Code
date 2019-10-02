/*************************************************************************
	> File Name: 197.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月27日 星期四 22时21分06秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 10
int num[MAX_N + 5];
bool cmp (int a, int b) {
    return a > b;
}

int main() {
    for(int i = 0; i < MAX_N; i++) {
        cin >> num[i];
    }
    sort(num, num+10, cmp);
    for (int i = 0; i < MAX_N; i++) {
        cout << num[i];
        if (i != 9) cout<<" ";
    }
    return 0;
}
