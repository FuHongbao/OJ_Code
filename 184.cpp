/*************************************************************************
	> File Name: 184.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月17日 星期一 13时47分45秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

void tao(int n, int &x) {
    if (n == 1) {
        return ;
    }
    x = (x+1)*2;
    tao(n-1, x);
}

int main() {
    int n, x = 1;
    cin >> n;
    tao(n, x);
    cout << x << endl;
    return 0;
}




