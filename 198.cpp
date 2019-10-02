/*************************************************************************
	> File Name: 198.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月27日 星期四 22时26分26秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int MAX_N = 1000000007;
int main() {
    int n;
    cin >> n;
    int a = 0, b = 1, c;
    int tmp = 1;
    while((tmp++) < n) {
        c = (a + b) % MAX_N;
        a = b % MAX_N;
        b = c % MAX_N;
    }
    cout << b <<endl;
    return 0;
}




