/*************************************************************************
	> File Name: 218.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月04日 星期四 10时02分56秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 100000

struct Peo{
    int pno;
    int height;
};

struct Peo pe[MAX_N + 5];

void do_swap(struct Peo &a, struct Peo &b) {
    int te = a.height;
    int ta = a.pno;
    a.height = b.height;
    a.pno = b.pno;
    b.height = te;
    b.pno = ta;
}

void quick_sort(int left, int right) {
    int mid = pe[(left + right) / 2].height;
    int i = left;
    int j = right;
    if (i >= j) return ;
    while (i <= j) {
        while(mid <= pe[j].height) j--;
        while(mid >= pe[i].height) i++;
        if (i < j) {
            do_swap(pe[i], pe[j]);
            i++, j--;
        } else if(i == j) {
            i++, j--;
        }
    }
    quick_sort(left, j);
    quick_sort(i, right);
}

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> pe[i].height;
        pe[i].pno = i;
    }
    //sort (pe + 1, pe + n + 1, cmp);
    quick_sort(1, n);
    for (int i = 1; i <= n; i++) {
        cout << pe[i].height << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++) {
        if (i > 1) cout << " ";
        cout << pe[i].pno;
    }
    cout << endl;
    return 0;
}

