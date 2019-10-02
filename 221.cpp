/*************************************************************************
	> File Name: 221.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月10日 星期三 09时49分52秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 100000

struct Stu{
    int high;
    int num;
    int cnt;
};
int b[MAX_N + 5];
struct Stu stu[MAX_N + 5];

bool cmp (struct Stu a, struct Stu b) {
     return a.high < b.high;
}

bool cmp_2(struct Stu a, struct Stu b) {
    return a.num < b.num;
}

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> stu[i].high;
        stu[i].num = i + 1;
        stu[i].cnt = 0;
    }
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }
    sort(stu, stu + n, cmp);
    sort(b, b + m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if(b[j] == -1) continue;
            if (stu[i].high >= b[j]) {
                stu[i].cnt ++;
                b[j] = -1;
            }else{
                break;
            }
        }
    }
    sort(stu, stu + n, cmp_2);
    for (int i = 0; i < n; i++) {
        cout << stu[i].cnt << endl;
    }
    return 0;
}



