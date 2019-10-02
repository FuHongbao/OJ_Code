/*************************************************************************
	> File Name: 203.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月04日 星期四 14时46分01秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 200
int stu[MAX_N + 5];
int col[MAX_N + 5];

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int m, n;
    cin >> m >> n;
    int aver = 0;
    for (int i = 0; i < m*n; i++) {
        cin >> stu[i];
        aver += stu[i];
    }
    int val = aver % (m*n);
    if (val >= (m*n)/2){
        aver /= (m*n);
        aver += 1;
    } else {
        aver /= (m*n);
    }
    
    for (int i = 0; i < n; i++) {
        int max = 0;
        for(int j = 0; j < m * n; j++){
            if (j % n == i && max < stu[j]) {
                max = stu[j];
            }
        }
        col[i] = max;
    }    
    sort(stu, stu + (m*n), cmp);
    for (int i = 0; i < n; i++) {
        cout << col[i] << endl;
    }
    int cnt = 0;
    for (int i = 0; i < m * n; i++) {
        if (i > 0) cout << " ";
        cout << stu[i];
        if (stu[i] >= aver) {
            cnt ++ ;
        }
    }
    cout << endl;
    cout << aver << endl;
    cout << cnt << endl;
    return 0;
}




