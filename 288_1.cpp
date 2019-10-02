/*************************************************************************
	> File Name: 288_1.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月14日 星期三 23时00分21秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <set>
using namespace std;
#define MAX_N 30000

typedef pair<int, int> PII;

set<PII> s1, s2;
int arr[MAX_N + 5];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int p;
    for (int i = 1, j = 0; i <= m; i++) {
        cin >> p;
        while (j < p) {
            ++j;
            if (s1.size() == 0 || -(s1.begin()->first)  > arr[j]) {
                s1.insert(PII(-arr[j], j));
            } else {
                s2.insert(PII(arr[j], j));
            }
        }
        while (s1.size() > i) {
            int val = -(s1.begin()->first);
            s2.insert(PII(val, s1.begin()->second));
            s1.erase(s1.begin());
        } 
        while (s1.size() < i) {
            int val = -(s2.begin()->first);
            s1.insert(PII(val, s2.begin()->second));
            s2.erase(s2.begin());
        }
        cout << -(s1.begin()->first) << endl;
    }

    return 0;
}

