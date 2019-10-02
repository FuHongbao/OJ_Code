/*************************************************************************
	> File Name: LGP1652.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月24日 星期三 22时39分12秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;

struct node {
    int x;
    int y;
    int r;
    int is_in;
};

int dis(int x, int y, int xx, int yy) {
    return sqrt((x - xx)*(x - xx) + (y - yy)*(y - yy) );
}

int main() {
    int n;
    struct node nod[200];
    int x1, y1, x2, y2;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> nod[i].x;
        nod[i].is_in = 0;
    }
    for (int i = 0; i < n; i++) {
        cin >> nod[i].y;
    }
    for (int i = 0; i < n; i++) {
        cin >> nod[i].r;
    }
    cin >> x1 >> y1 >> x2 >> y2;
    for(int i = 0; i < n; i++) {
        int d = dis(nod[i].x, nod[i].y, x1, y1);
        if (d < nod[i].r) {
            nod[i].is_in ++;
        }
         d = dis(nod[i].x, nod[i].y, x2, y2);
        if(d < nod[i].r) {
            nod[i].is_in ++;
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(nod[i].is_in == 1) {
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}


