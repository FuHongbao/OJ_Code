/*************************************************************************
	> File Name: 218_test.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月04日 星期四 10时37分03秒
 ************************************************************************/

#include<iostream>
using namespace std;
int* l;
void Swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int Partition(int left,int right)
{
    int i=left,j=right+1;
    do
    {
        do i++;while(l[i]<l[left]);
        do j--;while(l[j]>l[left]);
        if(i<j) Swap(l[i],l[j]);
    }while(i<j);
    Swap(l[left],l[j]);
    return j;
}

void QuickSort(int left,int right)
{
    if(left<right)
    {
        int j=Partition(left,right);
        QuickSort(left,j-1);
        QuickSort(j+1,right);
    }
}
int main()
{
    int N,i;
    cin>>N;
    l=new int[N];
    for(i=0;i<N;i++)
        cin>>l[i];
    QuickSort(0,N-1);
    for(i=0;i<N;i++)
    {
        cout<<l[i];
        if(i<N-1) cout<<" ";//此处oj格式要求
    }
    return 0;
}
