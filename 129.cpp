/*************************************************************************
	> File Name: 129.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月06日 星期四 18时55分49秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    int min = 999999;
    cin>>n;
    int a;
    while(n--) {
        cin>>a;
        if(a < min) {
            min = a;
        }
    }
    cout<<min<<endl;
    return 0;
}


