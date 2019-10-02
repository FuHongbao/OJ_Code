/*************************************************************************
	> File Name: LGP1290.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月21日 星期日 22时11分19秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int index ;
void ex_gcd (long long a, long long b) {
    index ++;
    if (b == 0) {
        if (index % 2 == 1) {
            printf("Stan wins\n");
        } else {
            printf("Ollie wins\n");
        }
        return ;
    }
    if (a / b > 1) {
        if (index % 2 == 1) {
            printf("Stan wins\n");
        } else {
            printf("Ollie wins\n");
        }
        return ;
    }
     ex_gcd(b, a % b);

}


int main() {
    int c;
    long long n, m;
    scanf("%d", &c);
    while (c--) { 
        index = 0;
        scanf("%lld%lld", &n, &m);
        if(m > n){
            long long t = n;
            n = m;
            m = t;
        }
        ex_gcd(n, m);
    }

    return 0;
}




