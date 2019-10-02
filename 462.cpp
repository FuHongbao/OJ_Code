/*************************************************************************
	> File Name: 462.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年08月11日 星期日 21时32分50秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

typedef struct Myvector {
    char **data;
    int size, *cnt;
    int man, woman;
}Myvector;

Myvector *init(int n) {
    Myvector *vec = (Myvector*) malloc (sizeof(Myvector));
    vec->data = (char**) malloc (sizeof(char*) * n);
    for (int i = 0; i < n; i++) {
        vec->data[i] = (char*) malloc (sizeof(char) * 20);
    }
    vec->size = n;
    vec->cnt = (int*) malloc(sizeof(int)*n);
    vec->man = vec->woman = 0;
}

int insert(Myvector *)

int main() {
    int n;
    scanf("%d", &n);
    
    
    
    
    return 0;
}

