/*************************************************************************
	> File Name: LGP1115.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月26日 星期五 21时12分44秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int max = -99999999;
    int k ; 
    cin>>n;
    for (int i = 0; i < n; i++) {
        cin >> k;
        if(sum >= 0) {
            sum += k;
        } else {
            sum = k;
        }
        if(max < sum) {
            max = sum;
        }
    }
    cout<<max<<endl;
    return 0;
}



