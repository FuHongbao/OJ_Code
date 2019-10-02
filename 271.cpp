/*************************************************************************
	> File Name: 271.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月21日 星期日 14时01分22秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
#define MAX_N 300000
int arr[MAX_N + 5];
int q[MAX_N + 5], head, tail;
int q2[MAX_N + 5], head2, tail2;
int main() {
    int n, k;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    head = tail = 0;
    for (int i = 0; i < n; i++) {
        while(tail - head && arr[q[tail-1]] > arr[i]) tail--;
        q[tail++] = i;
        if (q[head] <= i - k) head++;
        if (i >= k - 1) {
            printf("%d", arr[q[head]]);
            if (i != n - 1) printf(" ");
        }
    }
    printf("\n");
    head2 = tail2 = 0;
    for (int i = 0; i < n; i++) {
        while(tail2 - head2 && arr[q2[tail2 - 1]] <  arr[i]) tail2--;
        q2[tail2++] = i;
        if (q2[head2] <= i - k) head2++;
        if (i >= k - 1) {
            printf("%d", arr[q2[head2]]);
            if (i != n - 1) printf(" ");
        }
    }
    printf("\n");
        
    
    return 0;
}



