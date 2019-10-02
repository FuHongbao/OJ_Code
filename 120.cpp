/*************************************************************************
	> File Name: 120.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月05日 星期三 20时35分36秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;
    if (b>12 || c > 31 || a<1||b<1||c<1) {
        cout<<"NO"<<endl;
        return 0;
    }
    if((a%4==0&&a%100!=0) || a%400==0) {
        if(b == 2 && c > 29) {
            cout<<"NO"<<endl;
            return 0;
        }else {
            cout<<"YES"<<endl;
            return 0;
        }
    }else {
        if(b == 2&& c > 28) {
            cout<<"NO"<<endl;
            return 0;
        }else if(b==2&&c<28){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    if( b == 1 || b == 3 ||b==5||b==7||b==8||b==10||b==12 ){
            if(c<=31) {
                cout<<"YES"<<endl;
            }else {
                cout<<"NO"<<endl;
            }
    }else if(b != 2) {
        if(c > 30) {
            cout<<"NO"<<endl;
        }else {
            cout<<"YES"<<endl;
        }
    }
    
    return 0;
}



