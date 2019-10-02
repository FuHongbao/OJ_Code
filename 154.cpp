/*************************************************************************
	> File Name: 154.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月15日 星期六 08时38分42秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int tmp = n - i + 1;
        for (int j = 0; j < n - i + 1; j++) {
            if(j != 0) cout << " ";
            cout << tmp;
            tmp --;
        }
        cout<<endl;
    }

    return 0;
}



