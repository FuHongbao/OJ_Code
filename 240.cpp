/*************************************************************************
	> File Name: 240.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月13日 星期四 20时03分55秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <cmath>
using namespace std;
#define MAX_N 729
char g[MAX_N+5][MAX_N+5];

/*i,j为左上角坐标*/
void output(int n, int i, int j) {
    if (n == 1) {
        g[i][j] = 'X';
        return ;
    }
    int len = (int)(pow(3, n-2));
    output(n - 1, i, j);
    output(n - 1, i, j + 2 * len);
    output(n - 1, i + len, j + len);
    output(n - 1, i + 2 * len, j);
    output(n - 1, i + 2 * len, j + 2 * len);
}


int main() {
   int n;
    while( cin >> n && n != -1){
        output(n, 0, 0);
        int len = (int) pow(3, n - 1);
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len; j++) {
                if (g[i][j] == 'X') cout<<"X";
                else cout<<" ";
            }
            cout<<endl;
        }
        cout<<"-"<<endl;
    }
    

}




