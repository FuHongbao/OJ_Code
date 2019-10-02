/*************************************************************************
	> File Name: LGP1071.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月14日 星期日 22时23分30秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
#include<string.h>
#include<map>
using namespace std;

int main(){
    map<char,char> m;
    char a[105],b[105],c[105];
    int t[105];
    cin>>a;
    cin>>b;
    cin>>c;
    memset(t,0,sizeof(t));
    int str1 = strlen(a);
    int str3 = strlen(c);

    for(int i = 0; i < str1; i++){
        if(m[a[i]]&&t[b[i]-'0']){
            if(m[a[i]]!=b[i]){
            cout<<"Failed"<<endl;
            return 0;
            }
        }else{
            m[a[i]] = b[i];
            t[a[i]-'0'] = 1;
        }
    }
    for(char i = 'A'; i<='Z'; i++){
        if(!m[i]){
            cout<<"Failed"<<endl;
            return 0;
        }
        for(char j ='A';j<='Z';j++){
            if(i!=j){
                if(m[i]==m[j]){
            cout<<"Failed"<<endl;
            return 0;
                }
            }
        }
    } 
    for(int i = 0; i < str3; i++){
        if(!m[c[i]]){
            cout<<"Failed"<<endl;
            return 0;
        }else{
            cout<<m[c[i]];
        }
    }
    cout<<endl;
    return 0;
}







