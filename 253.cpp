/*************************************************************************
	> File Name: 253.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月29日 星期六 18时29分38秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 2500

struct Range{
    int x;
    int y;
}arr[MAX_N + 5];

int cnt[MAX_N + 5] = {0};

bool cmp(struct Range a, struct Range b) {
    if (a.y != b.y) return a.y < b.y;
    return a.x > b.x;
}

int main() {
    int c, l;
    cin >> c >> l;
    for (int i = 0; i < c; i++) {
        cin >> arr[i].x >> arr[i].y;
    }
    int a, b;
    for (int j = 0; j < l; j++) {
        cin >> a >> b;
        cnt[a] += b;
    }
    int ans = 0;
    sort(arr, arr + c, cmp);
    for (int i = 0; i < c; i++) {
        int index = -1;
        for (int j = arr[i].x; j <= arr[i].y && index == -1; j++) {
            if (cnt[j] == 0) continue;
            index = j;
        }
        if (index != -1) {
            cnt[index] -= 1;
            ans += 1;
        }
    }
    cout << ans << endl;
    return 0;
}
