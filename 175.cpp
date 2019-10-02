/*************************************************************************
	> File Name: 175.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月19日 星期三 11时55分23秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int a[4] = {0};
int main() {
    int n, k;
    cin >> n;
    while(n --) {
        cin >> k;
        if (k >=90 && k <= 100) a[0]++;
        else if (k >= 80 && k <= 89) a[1]++;
        else if (k >= 60 && k <= 79) a[2]++;
        else if (k < 60) a[3]++;
    }
    cout << "You " << a[0] << endl;
    cout << "Liang " << a[1] << endl;
    cout << "Zhong " << a[2] << endl;
    cout << "Cha " << a[3] << endl;

    return 0;
}



