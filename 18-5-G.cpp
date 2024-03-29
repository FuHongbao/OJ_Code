/*************************************************************************
	> File Name: 18-5-G.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月01日 星期一 16时47分03秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

#define Plog(frm, arg...) {printf("[ %s : %d ] " frm "\n",__FUNCTION__, __LINE__,##arg);} 

void haizei_test() {
    int a = 6;
    Plog("%d", MAX(2, 3));
    Plog("%d", 5 + MAX(2, 3));
    Plog("%d", MAX(2, MAX(3, 4)));
    Plog("%d", MAX(2, 3 > 4 ? 3 : 4));
    Plog("%d", MAX(a++, 6));
    Plog("a value = %d", a);
}

int main() {
    haizei_test();
    return 0;
}
