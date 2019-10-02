/*************************************************************************
	> File Name: 101.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月07日 星期五 12时48分39秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans = 0;
    while (n > 0) {
        ans += n%10;
        n /= 10;
    }
    cout<<ans<<endl;
    return 0;
}






