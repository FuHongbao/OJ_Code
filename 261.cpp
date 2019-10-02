/*************************************************************************
	> File Name: 261.c
	> Author: victoria 
	> Mail: 1105847344@qq.com
	> Created Time: 2019年07月27日 星期六 15时41分48秒
 ************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;
#define MAX_N 1000

typedef struct Stack {
    int *data;
    int top, size;
} Stack;

Stack *init(int n) {
    Stack *s = (Stack*) malloc (sizeof(Stack));
    s->data = (int*) malloc (sizeof(int) * n);
    s->size = n;
    s->top = -1;
    return s;
}

int get_size(Stack *s) {
    return s->top + 1;
}

int empty(Stack *s) {
    return s->top == -1;
}
int top(Stack *s) {
    return s->data[s->top];
}
void push(Stack *s, int val) {
    if (s->top >= s->size - 1) return ;
    s->data[++s->top] = val;
}

void pop(Stack *s) {
    if (empty(s)) return ;
    s->top--;
}


void clear(Stack *s) {
    if (s == NULL) return ;
    free(s->data);
    free(s);
}


int main() {
    int n, x;
    int arr[MAX_N + 5], ans = 0;
    arr[0] = -999999;
    Stack *s1 = init(MAX_N + 5);
    Stack *s2 = init(MAX_N + 5);
    char op;
    char str[5];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%s", str);
        op = str[0];
        switch (op) {
            case 'I':{
                scanf("%d", &x);
                push(s1, x);
                ans += x;
                int len = get_size(s1);
                arr[len] = max(ans, arr[len - 1]); 
            }break;
            case 'D':{
                if (empty(s1)) break;
                int val = top(s1);
                pop(s1);
                ans -= val;
            }break;
            case 'L':{
                if (empty(s1)) break;
                int val = top(s1);
                pop(s1);
                push(s2, val);
                ans -= val;
            }break;
            case 'R':{
                if (empty(s2)) break;
                int val = top(s2);
                pop(s2);
                push(s1, val);
                ans += val;
                int len = get_size(s1);
                arr[len] = max(ans, arr[len - 1]);
            }break;
            case 'Q':{
                scanf("%d", &x);
                printf("%d\n", arr[x]);
            }break;
        }
    }
    clear(s1);
    clear(s2);
    return 0;
}


