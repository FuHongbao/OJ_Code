/*************************************************************************
	> File Name: 145.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月12日 星期三 21时44分09秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int n;
    char c[150],ans[150];
    cin>>n;
    int max = -1;
    while (n--) {
        cin>>c;
        int len = strlen(c);
        if(len > max) {
            strcpy(ans,c);
            max = len;
        }
    }
    cout<<ans<<endl;
    return 0;
}


