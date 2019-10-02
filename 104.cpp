/*************************************************************************
	> File Name: 104.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月12日 星期三 20时20分05秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main() {
    char a[10];
    cin >> a;
    if (a[0] == '9' || a[1] == '9' || a[2] == '9') {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    } 
    return 0;
}



