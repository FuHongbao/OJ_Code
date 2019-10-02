/*************************************************************************
	> File Name: 212.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月29日 星期六 09时47分53秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
using namespace std;

char name[15][30];


int main() {
    for (int i = 0; i < 10; i++) {
        cin >> name[i];
    }    
    for (int i = 0; i < 10; i++) {
        for(int j = i + 1; j < 10; j++) {
            if (strcmp(name[i], name[j]) > 0) {
                swap(name[i], name[j]);
            }
        }
        cout << name[i] <<endl;
    }
    return 0;
}


