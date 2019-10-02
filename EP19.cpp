/*************************************************************************
	> File Name: EP19.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月02日 星期二 17时23分32秒
 ************************************************************************/
#include <stdio.h>
#include <inttypes.h>


int32_t WhichDay(int32_t y, int32_t m, int32_t d) {
    if (m == 1 || m == 2) {
        --y; m += 12;
    }
    int32_t w;
    w = (d + 2 * m + 3 * (m + 1) / 5 + y + y / 4 - y / 100 + y / 400) % 7;
    return w;
}

 

int32_t main() {
    int32_t sunday = 0;
    for (int32_t y = 1900; y < 2001; ++y) {
        if (WhichDay(y, 6, 6) == 5){
            printf("%d\n", y);
            ++sunday;
        }
    }
    printf("%d\n", sunday);
    return 0;
}
