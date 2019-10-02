/*************************************************************************
	> File Name: LGP1087.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月26日 星期五 22时44分59秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;
char str[2100];

typedef struct Node {
    char ch;
    struct Node *left, *right;
} Node;


bool iswhat(char *str, int s, int n) {
    int cnt0 = 0, cnt1 = 0;
    for (int i = s; i <=n; i++) {
        if (cnt0 && cnt1) return 1;
        if (str[i] == '1') cnt1 += 1;
        if (str[i] == '0') cnt0 += 1;
    }
    if (cnt0) return 2;
    if (cnt1) return 3;
}

Node *build(Node *root, char *str, int snd, int end) {
    if (end == snd) {
        Node *nod = (Node*) malloc (sizeof(Node));
        if (str[end] == '1') nod->ch = '1';
        if (str[end] == '0') nod->ch = '0';
        nod->left = nod->right = NULL;
        return nod;
    } 
    int k = iswhat()
    
}

int main() {
    int n;
    cin >> n;
    cin >> str; 
    if (n == 0 && str[0] == '1') {
        cout << "I" << endl;
        return 0;
    } else if (n == 0 && str[0] == '0') {
        cout << "B" << endl;
        return 0;
    }
    
    Node *root = (Node *)malloc(sizeof(Node)); 
    int len = pow(2, n);
    root = build(root, str, 0, len); 

        
    
    return 0;
}

