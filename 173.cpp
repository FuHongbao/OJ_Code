/*************************************************************************
	> File Name: 173.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月17日 星期一 13时06分05秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cstdio>
using namespace std;


int main() {
    char c[10000];
    int ans1 = 0,ans2 = 0,ans3 = 0,ans4 = 0;
    scanf("%[^\n]s", c);
    int i = 0;
    while(c[i] != '\0'){
        if ((c[i] >= 'a' && c[i] <= 'z') || (c[i] >= 'A' && c[i] <= 'Z')) {
            ans1 += 1;
        } else if (c[i] <= '9' && c[i] >= '0') {
            ans2 += 1;
        } else if (c[i] == ' ') {
            ans3 += 1;
        } else {
            ans4 += 1;
        }
        i++;
    }    
    printf("%d %d %d %d\n", ans1, ans2, ans3, ans4);
    return 0;
}



