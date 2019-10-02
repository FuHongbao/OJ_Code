/*************************************************************************
	> File Name: LGP1059.cpp
	> Author: 
	> Mail: 
	> Created Time: 2019年04月12日 星期五 21时12分07秒
 ************************************************************************/

#include<iostream>
#include<set>
using namespace std;
int main()
{
    int n,a;
    set<int> st;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>a;
        st.insert(a);
    }
    set<int>::iterator it;
    int len = st.size();
    cout<<len<<endl;
    for(it = st.begin();it != st.end();  it++){
        len--;
        cout<<*it;
        if(len >= 1){
            cout<<" ";
        }
        
    }
    cout<<endl;

    return 0;
}




