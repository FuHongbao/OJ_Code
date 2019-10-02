/*************************************************************************
	> File Name: 40.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年06月17日 星期一 13时27分04秒
 ************************************************************************/
#include<iostream>
#include<stdio.h>
using namespace std;

int keep[4][200];

void js(int [4][200],int n){
	for(int i = 0; i < 200; i++){
		keep[n%4][i] = keep[(n-2)%4][i]+keep[(n-3)%4][i];
	}
	for(int i = 0; i < 200; i++){
		if(keep[n%4][i] >= 10){
			keep[n%4][i+1]++;
			keep[n%4][i] %= 10; 
		}
	}
}
int main()
{
	int n;
	cin>>n;
	if(n == 1){
		cout<<"0"<<endl;
	}else if(n <= 4){
		cout<<"1"<<endl;
	}else{
		
		keep[0][0] = 1;
		keep[1][0] = 0;
		keep[2][0] = 1;
		keep[3][0] = 1;
		
		for(int i = 4; i <= n; i++){
			js(keep,i);
		}
		int index = 0;
		for(int i = 199; i >= 0; i--){
			if(keep[n%4][i] != 0){
				index = 1;
			}
			if(index == 1){
				printf("%d",keep[n%4][i]);
			}
		}
	}
	return 0;
}
