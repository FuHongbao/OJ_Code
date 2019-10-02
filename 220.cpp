/*************************************************************************
	> File Name: 220.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月04日 星期四 12时13分52秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 100

struct stu{
    char name[200];
    int yu, su, ying, ke;
    int sum;
};

struct stu st[MAX_N + 5];

bool cmp_yu(struct stu a, struct stu b) {
    if (a.yu != b.yu)
    return a.yu > b.yu;
    if (strcmp(a.name, b.name) < 0) {
        return true;
    }else {
        return false;
    }
}
bool cmp_su(struct stu a, struct stu b) {
    if (a.su != b.su)
    return a.su > b.su;
    if (strcmp(a.name, b.name) < 0) {
        return true;
    }else {
        return false;
    }
}
bool cmp_ying(struct stu a, struct stu b) {
    if (a.ying != b.ying)
    return a.ying > b.ying;
    if (strcmp(a.name, b.name) < 0) {
        return true;
    }else {
        return false;
    }
}
bool cmp_ke(struct stu a, struct stu b) {
    if (a.ke != b.ke)
    return a.ke > b.ke;
    if (strcmp(a.name, b.name) < 0) {
        return true;
    }else {
        return false;
    }
}
bool cmp_sum(struct stu a, struct stu b) {
    return a.sum > b.sum;
    if (strcmp(a.name, b.name) < 0) {
        return true;
    }else {
        return false;
    }
}

void do_print(int n) {
    for (int i = 0; i < 4; i++) {
        if(i > 0) cout << " ";
        cout << st[i].name;
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> st[i].name;
        cin >> st[i].yu >> st[i].su >> st[i].ying >> st[i].ke;
        st[i].sum = st[i].su + st[i].yu + st[i].ying + st[i].ke;
    }
    sort(st, st + n, cmp_yu);
    do_print(n);
    sort(st, st + n, cmp_su);
    do_print(n);
    sort(st, st + n, cmp_ying);
    do_print(n);
    sort(st, st + n, cmp_ke);
    do_print(n);
    sort(st, st + n, cmp_sum);
    do_print(n);

    return 0;
}


