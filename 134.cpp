/*************************************************************************
	> File Name: 134.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 21时23分36秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int a,b;
    cin>>a>>b;
    int index = 0;
    for(int i = a; i <= b; i++) {
        if(i % 11 == 0) {
            if(index) {
                cout<<" ";
            }
            cout<<i;
            index = 1;
        }
    }
    cout<<endl;

    return 0;
}





