/*************************************************************************
	> File Name: 178.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月19日 星期三 12时22分04秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
char zm[30]={ ' ', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
void dg (int n) {
    if (n == 1) {
        cout << "A";
        return ;
    }
    dg(n - 1);
    cout << zm[n];
    dg(n - 1);
}
int main() {
    int n;
    cin >> n;
    dg(n);
    return 0;
}



