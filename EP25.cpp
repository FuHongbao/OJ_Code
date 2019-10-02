/*************************************************************************
	> File Name: EP25.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月02日 星期二 14时20分49秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 1000
int fb[2][MAX_N + 5]={0};

int main() {
    int n = 2;
    fb[0][0] = fb[1][0] = 1;
    while (fb[n%2][999] == 0) {
        n++;
        for (int i = 0; i < 1000; i++) {
            fb[n%2][i] += fb[(n-1)%2][i];
        }
        for (int i = 0; i < 1000; i++) {
            if (fb[n % 2][i] >= 10) {
                //fb[n % 2][i + 1] += (fb[n % 2][i] / 10);
                fb[n % 2][i + 1] += 1;
                fb[n % 2][i] %= 10; 
            }
        }
    }
    cout << n << endl;
    return 0;
}

