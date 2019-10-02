/*************************************************************************
	> File Name: 166.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月17日 星期一 11时56分10秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
#define MAX_N 10000
char a[MAX_N + 5], b[MAX_N + 5], c[MAX_N + MAX_N + 5];

int main() {
    int n;
    cin>>a;
    cin>>n;
    cin>>b;
    int len1 = strlen(a);
    int len2 = strlen(b);
    if (len1 < 100) {
        cout<<len1<<endl;
    } else {
        cout<<"100"<<endl;
    }
    int inx = 0;
    for (int ind = 0; ind < len1; ind ++) {
        if (ind != n - 1){
            c[inx++] = a[ind];
        }
        else {
            for (int i = 0; i < len2; i++) {
                c[inx++] = b[i];
            }
            c[inx++] = a[ind];
        }
    }
    int pos;
    for(int j = 0; j < inx; j++) {
        cout<<c[j];
        if (c[j] == 'x') {
            pos = j + 1;
        }
    }
    cout<<endl<<inx - pos + 1<<endl;
    return 0;
}





