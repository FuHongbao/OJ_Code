/*************************************************************************
	> File Name: 153.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月14日 星期五 11时12分18秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int  y,m,q;
    cin >> y >> m >> q;
    if (m == 1 || m == 2) {
        m += 12;
        y --;
    }
    int j = y / 100;
    int k = y % 100 ;
    int h = (q + 26 * (m + 1) / 10 + k + k / 4 + j / 4 + 5 * j) % 7;
    if (h < 2) {
       h += 6; 
    }else {
        h -= 1;
    }
    cout<<h<<endl;
    return 0;
}




