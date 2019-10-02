/*************************************************************************
	> File Name: 152.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月14日 星期五 10时47分16秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

char str[10][20]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

int main() {
    int n;
    cin >> n;
    n += 3;
    if( n > 7 ) {
        n %= 7;
    }
    cout << str[n - 1] << endl;
    return 0;
}




