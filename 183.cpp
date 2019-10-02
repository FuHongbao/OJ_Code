/*************************************************************************
	> File Name: 183.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月27日 星期四 15时57分30秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int func(int x) {
    if (x <= 1) return x;
    if (x % 2 == 0) {
        return 3 * func(x / 2) - 1;
    } else {
        return 3 * func((x+1) / 2) - 1;
    } 
}

int main() {
    int x;
    cin >> x;
    cout << func(x) <<endl;
    return 0;
}


