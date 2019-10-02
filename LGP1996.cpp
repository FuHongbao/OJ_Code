/*************************************************************************
	> File Name: LGP1996.cpp
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年04月26日 星期五 18时18分21秒
 ************************************************************************/

#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

struct node{
    int x;
    struct node *next;
};

int main() {
    int n, m;
    cin >> n >> m;
    struct node *head,*p,*q;
    head = (struct node*)malloc(sizeof(struct node)); 
    head->x = 1;
    head->next = NULL;
    p = head;
    for(int i = 2; i <= n; i++){
        q = (struct node*)malloc(sizeof(struct node));
        q->x = i;
        q->next = NULL;
        p->next = q;
        p = p->next;
    }
    p->next = head;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0;j < m-1; j++) {
            p = p->next;
        }
        q = p->next;
        cout<<q->x<<" ";
        p->next = q->next;
        free(q);
    }
    if(m != 0 && n != 0)
    cout<<p->x<<endl;
    free(p);
    return 0;
}

