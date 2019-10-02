/*************************************************************************
	> File Name: 151.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月14日 星期五 10时27分11秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int sf(char a, char b){
    if (a == b) return 0;
    if ( (a == 'Y' && b=='H') || (a == 'H' && b == 'O') || (a == 'O' && b == 'Y')) {
        return 1;
    } else {
        return -1;
    }
}

int main() {
    char ml,mr,hl,hr;
    cin >> ml >> mr;
    cin >> hl >> hr;
    if (sf(ml, hl) == 1) {
        if (sf(ml, hr) >= 0) {
            cout<<"MING"<<endl;
            return 0;
        }else {
            if (sf(mr, hr) == 1) {
                cout<<"MING"<<endl;
                return 0;
            } else {
                cout<<"LIHUA"<<endl;
                return 0;
            }
        }
    } else if(sf(ml, hl) == 0) {
        if (sf(mr, hr) == 1) {
            cout<<"MING"<<endl;
            return 0;
        }else if(sf(mr,hr) == 0) {
            cout<<"TIE"<<endl;
            return 0;
        }else {
            cout<<"LIHUA"<<endl;
            return 0;
        }
    } else {
        if (sf(mr, hl) <= 0) {
            cout<<"LIHUA"<<endl;
            return 0;
        } else {
            if (sf(mr,hr) >= 0) {
                cout<<"MING"<<endl;
                return 0;
            } else {
                cout<<"LIHUA"<<endl;  
                return 0;
            }
        }
    }
    return 0;
}





