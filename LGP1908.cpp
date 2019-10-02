/*************************************************************************
	> File Name: LGP1908.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月24日 星期三 16时39分05秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;

long long a[500050];
long long t[500050];
long long ans = 0;

void merge_sort (int left, int right) {
    if(left+1 >= right) return ;
    int mid = (left + right) / 2;
    merge_sort (left, mid);
    merge_sort (mid, right);
    
    int loc = left;
    int p = left;
    int q = mid;
    while (p < mid && q < right) {
        if (a[p] <= a[q]) {
            t[loc] = a[p];
            p++;
            loc ++;
        } else {
            t[loc] = a[q];
            loc ++;
            q++;
            ans += (mid - p);
        } 
    }
    while(p < mid) {
        t[loc] = a[p];
        loc++;
        p++;
    }
    while(q < right) {
        t[loc] = a[q];
        loc++;
        q++;
    }
    for(int i = left; i < right; i++) {
        a[i] = t[i];
    }

}

int main() {

    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        scanf("%lld",&a[i]);
    }
    merge_sort (0, n);
    printf("%lld\n",ans);
    return 0;
}



