/*************************************************************************
	> File Name: 287.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月12日 星期一 19时08分53秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <queue>
#include <set>
using namespace std;
typedef pair<int, int> PII;

set<PII> s;

int main() {
    int n, a, sum = 0;
    cin >> n;
    int i;
    while(n--){
        cin >> a;
        s.insert(PII(a, n));
    }
    while(s.size() != 1) {
        int val1 =s.begin()->first;
        s.erase(s.begin());
        int val2 =s.begin()->first;
        s.erase(s.begin());
        s.insert(PII(val1 + val2, n--));
        sum += val1 + val2;
    }
    cout << sum << endl;
    return 0;
}


