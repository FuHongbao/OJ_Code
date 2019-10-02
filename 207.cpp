/*************************************************************************
	> File Name: 207.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月09日 星期二 16时39分59秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int sum[50] = {0};

int get_max(int a, int b) {
    return a > b ? a : b;
}

int get_min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n;
    cin >> n;
    int a, b, c, d;
    char name[50], max_name[50];
    int max = -1, min = 99999;
    int max_sum = -1; 
    for (int i = 0; i < n; i++) {
        cin >> name;
        cin >> a >> b >> c >> d;
        sum[i] = (a + b + c + d);
        if (sum[i] > max_sum) {
            max_sum = sum[i];
            strcpy(max_name, name);
        }
        max = get_max(max, a); 
        max = get_max(max, b); 
        max = get_max(max, c); 
        max = get_max(max, d); 
        min = get_min(min, a);
        min = get_min(min, b);
        min = get_min(min, c);
        min = get_min(min, d);
    }
    for (int i = 0; i < n; i++) {
        cout << sum[i] << endl; 
    }
    cout << max_name << endl;
    cout << max << " " << min << endl;
    return 0;
}



