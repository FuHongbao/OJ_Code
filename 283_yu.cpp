/*************************************************************************
	> File Name: 283_yu.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月22日 星期四 00时32分02秒
 ************************************************************************/


#include<iostream>
#include <string.h>
using namespace std;
#define MAX_N 100000

char arr[MAX_N + 5][15];
struct Node {
    int flag;
    int next[10];
} tree[MAX_N + 5];
int root = 1, cnt = 1;

int getNode () {return ++cnt;}
void insert(const char *str) {
    int p = root;
    for (int i = 0; str[i]; i++) {
        int ind = str[i] - '0';
        if (tree[p].next[ind] == 0) tree[p].next[ind] = getNode();
        p = tree[p].next[ind];
    }
    tree[p].flag = 1;
    return ;
}

int search(char *str) {
    int p = root, ret = 0;
    for (int i = 0; str[i]; i++) {
        int ind = str[i] - '0';
        if (tree[p].flag) {
            ret = 1;
            break;
        } 
        p = tree[p].next[ind];
    }
    for (int i = 0; i < 10; i++) {
        if (tree[p].next[i]) {
            ret = 1;
            break;
        }
    }
    
    return ret;
}

int main() {
    int n;
    cin >> n;
    int temp = n;
    int sum = 0;
    while (n) {
        cin >> arr[n]; 
        insert(arr[n]);
        n--;
    }
    for (int i = 1; i <= temp; i++) {
        sum += search(arr[i]);
    }

    if (!sum) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
