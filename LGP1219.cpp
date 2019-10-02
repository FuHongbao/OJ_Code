/*************************************************************************
	> File Name: LGP1219.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月22日 星期一 09时33分01秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int hang[50], lie[50], zdj[50], fdj[50];
int ans ;

void dfs(int cnt, int n) {
    if (cnt > n) {
        ans += 1; 
        if (ans <= 3) {

            for (int k = 1; k <= n; k++) {
                cout << hang[k];
                if (k < n) {
                    cout<<" ";
                } else {
                      cout<<endl;
                }
            }
        }
        return ;
    }
    for (int i = 1; i <= n; i++) {
        if (lie[i] == 0 && zdj[i + cnt] == 0 && fdj[cnt - i + n] == 0) {
            hang[cnt] = i;
            lie[i] = 1;
            zdj[i + cnt] = 1;
            fdj[cnt - i + n] = 1;

            dfs (cnt + 1, n);
            lie[i] = 0;
            zdj[i + cnt] = 0;
            fdj[cnt -i + n] = 0;
        }
    }
    return; 
}

int main() {
    int n;
    cin >> n;
    ans = 0;
    memset (hang, 0, sizeof(hang));
    memset (lie, 0, sizeof(lie));
    memset (zdj, 0, sizeof(zdj));
    memset (fdj, 0, sizeof(fdj));
    dfs (1, n);
    cout<<ans<<endl;
    return 0;
}





