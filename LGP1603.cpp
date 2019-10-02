/*************************************************************************
	> File Name: LGP1603.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月14日 星期日 11时53分48秒
 ************************************************************************/

#include<iostream>
#include<cstdio>
#include<string.h>
#include<algorithm>
using namespace std;

struct node{
    int x;
    int y;
};

bool cmp(struct node a,struct node b){
    return a.x*10+a.y < b.x*10+b.y;
}

int main(){
	char str[30][20]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty","a","both","another","first","second","third"};
	int va[30]={0,1,4,9,16,25,36,49,64,81,00,21,44,69,96,25,56,89,24,61,00,1,4,1,1,4,9};
    char sst[20];
    struct node ans[1000];
    int temp = 0;
    for(int i = 1;i<=6;i++){
        scanf("%s",sst);
        for(int j = 0;j<= 26;j++){
            if(!strcmp(str[j],sst))
            {
                
                ans[temp].x = (va[j]/10);
                ans[temp].y = (va[j]%10);
                temp++;
            }
        }
    }
    sort(ans,ans+temp,cmp);
    int index = 0;
    for(int i = 0; i < temp; i++){
        if(ans[i].x!=0){
            index = 1;
        }
        if(index){
            cout<<ans[i].x;
        }
        if(ans[i].y!=0){
            index = 1;
        }
        if(index){
            cout<<ans[i].y;
        }
    }
    if(temp == 0) cout<<"0";
    cout<<endl;

    return 0;
}





