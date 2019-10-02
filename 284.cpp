/*************************************************************************
	> File Name: 284.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月12日 星期一 19时47分18秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <set>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define MAX_N 10000

struct Data {
    int p, d;
}arr[MAX_N + 5];

bool cmp(const Data &a, const Data &b) {
    return a.d < b.d;
}
typedef pair<int, int> PII;
set<PII> s;

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%d", &arr[i].p, &arr[i].d);
    }
    sort(arr, arr+n, cmp);
    for (int i = 0; i < n; i++) {
        if (arr[i].d > s.size()) {
            s.insert(PII(arr[i].p, i));
        } else if (arr[i].p > s.begin()->first) {
            s.erase(s.begin());
            s.insert(PII(arr[i].p, i));
        }
    }
    int sum = 0;
    for (auto iter = s.begin(); iter != s.end(); iter++) {
        sum += iter->first;
    }
    printf("%d\n", sum);
    return 0;
}



