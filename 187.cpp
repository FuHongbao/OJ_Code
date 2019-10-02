/*************************************************************************
	> File Name: 187.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月14日 星期日 19时14分03秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

long long hnt(long long n) {
    if (n == 1) return 1;
    return hnt(n - 1) * 2 + 1;
}

long long hnt2(long long n) {
    if (n == 1) return 1;
    return hnt2(n - 1) * 2 + n;
}

int main() {
    long long n;
    cin >> n;
    cout << hnt(n) << " " << hnt2(n) << endl;

    return 0;
}



