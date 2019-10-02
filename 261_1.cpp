/*************************************************************************
	> File Name: 261_1.c
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月27日 星期六 21时33分08秒
 ************************************************************************/


#include<stdio.h>
#include<algorithm>
#include<string>
#include<string.h>
#include<queue>
#include<stack>
#include<math.h>
using namespace std;
int a[1000005];
int main()
{
    char ss[200];
    char s;int q;
    while(scanf("%d",&q)!=EOF)
    {
        stack<int>s1;
        stack<int>s2;
        int x;
        int ans=0;
        a[0]=-999999999;
        while(q--)
        {
            scanf("%s",ss);
            s=ss[0];
            if(s=='I')
            {
                scanf("%d",&x);
                s1.push(x);
                ans+=x;
                int len=s1.size();
                a[len]=max(ans,a[len-1]);
            }
            else if(s=='D')
            {
                if(s1.size()>=1)
                {
                    x=s1.top();
                    s1.pop();
                    ans-=x;
                }
            }
            else if(s=='L')
            {
                if(s1.size()>=1)
                {
                    x=s1.top();
                    s1.pop();
                    ans-=x;
                    s2.push(x);
                }
            }
            else if(s=='R')
            {
                if(s2.size()>=1)
                {
                    x=s2.top();
                    s2.pop();
                    s1.push(x);
                    ans+=x;
                    int len=s1.size();
                    a[len]=max(ans,a[len-1]);
                }
            }
            else if(s=='Q')
            {
                int k;
                scanf("%d",&k);
                printf("%d\n",a[k]);
            }
        }
    }
 
return 0;
}

