/*************************************************************************
	> File Name: 164.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月15日 星期六 18时54分21秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    if (n % m != 0) {
        cout << n/m+1 << endl;
    } else {
        cout << n/m <<endl;
    }

    return 0;
}


