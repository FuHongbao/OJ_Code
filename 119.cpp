/*************************************************************************
	> File Name: 119.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月05日 星期三 20时22分00秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

int main() {
    int y, m ,d;
    int mth[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> y >> m >> d;
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
        mth[2] = 29;
    } 
    int td = d - 1, tm = m, ty = y;
    if (td <= 0) {
        tm -= 1;
        if (tm <= 0) {
            tm = 12;
            ty --;
        }
        td = mth[tm];
    }
    cout << ty << " " << tm << " " << td << endl;
    td = d + 1, tm = m; ty = y;
    if (td > mth[tm]) {
        td = 1;
        tm += 1;
        if (tm > 12) {
            tm = 1;
            ty ++;
        }
    }
    cout << ty << " " << tm << " " << td << endl;
    return 0;
}

