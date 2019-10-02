/*************************************************************************
	> File Name: 196.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月27日 星期四 22时15分09秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 50
int floor[MAX_N + 5];

int main() {
    int n;
    cin >> n;
    floor[1] = 0;
    floor[2] = floor[3] = 1;
    for (int i = 4; i <= n; i++) {
        floor[i] = floor[i-2] + floor[i-3];
    }
    cout << floor[n] << endl;
    return 0;
}


