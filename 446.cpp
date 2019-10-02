/*************************************************************************
	> File Name: 446.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月11日 星期日 22时27分09秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int inx = 0, num;
    for (int i = 1; i <= n; i++) {
        num = 1;
        for (int j = 1; j <= n; j++) {
            if (j == 1 || j == n) {
                cout <<"1 ";
                continue;
            }
            if (i == j || (i+j == n+1)) {
                num = i;
            }
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
