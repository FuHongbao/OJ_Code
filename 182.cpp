/*************************************************************************
	> File Name: 182.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月17日 星期一 13时54分50秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    long long a, max = -99999;
    int n;
    cin>>n;
    while(n--) {
        cin >> a;
        if(max < a) {
            max = a;
        }
    }
    cout<<max<<endl;
}


