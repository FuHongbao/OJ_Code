/*************************************************************************
	> File Name: EP34.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月01日 星期一 22时37分21秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 3000000

void init(long long *num) {
    int tmp = 1;
    for (int i = 1; i < 10; i++) {
        tmp *= i;
        num[i] = tmp;
    }
}

bool is_valid(int x, long long *num) {
    long long tmp = 0;
    int index = x;
    while (x) {
        tmp += num[x % 10];
        x /= 10;
    }
    return tmp == index;
}

long long get_sum(long long *num) {
    long long sum = 0;
    for (int i = 10; i <= MAX_N; i++) {
        if (is_valid(i, num)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    long long num[15] = {0};
    long long sum = 0;
    init(num);
    num[0] = 1;
    sum = get_sum(num);
    cout << sum << endl;
    return 0;
}


