/*************************************************************************
	> File Name: LGP1012.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月20日 星期六 18时55分28秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
#include <stdio.h> 
using namespace std;

struct zm{
    char s[100];
};

int cmp(char a[100],char b[100]){
    int i = 0;
    while(a[i]!='\0'&&b[i]!='\0'){
        if(a[i]!=b[i]) return a[i]>b[i];
        else {
            i++;
        }
    }
        if(a[i]!='\0'){
            while(a[i]==b[0]){
                i++;
            }
            return a[i]>b[0];
        }else if(b[i]!='\0'){
            while(b[i]==a[0]){
                i++;
            }
            return a[0]>b[i];
        }
}


void ssort(struct zm sz[30],int n){
    for(int i  = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(cmp(sz[i].s,sz[j].s)){
                struct zm temp;
                temp = sz[i];
                sz[i] = sz[j];
                sz[j] = temp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout<<sz[i].s;
    }
    cout<<endl;
}

int main() {
    int n;
    struct zm sz[30];
    cin>>n;
    getchar();
    for(int i = 0; i < n; i++){
        scanf("%s", sz[i].s);
    }
    ssort(sz,n);
    return 0;
}



