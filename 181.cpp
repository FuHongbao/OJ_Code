/*************************************************************************
	> File Name: 181.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月27日 星期四 15时52分48秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h>
using namespace std;
int main() {
    char c;
    while(scanf("%c", &c) && c != '\n') {
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        } else if(c >= 'a' && c <= 'z') {
            c -= 32;
        } 
        printf("%c", c);
    }
    printf("\n");
    return 0;
}



