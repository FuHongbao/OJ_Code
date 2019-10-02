/*************************************************************************
	> File Name: 146.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月12日 星期三 21时47分41秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    char c[100];
    cin>>c;
    int len = strlen(c);
    for(int i = 0; i < len; i++) {
        if ((c[i]>='A' && c[i]<'Z') || (c[i]>='a'&&c[i]<'z') ) {
            c[i] =c[i] + 1;
        }else if(c[i] == 'z'||c[i]=='Z') {
            c[i] -= 25;
        }
    }
    cout<<c<<endl;
    return 0;
}




