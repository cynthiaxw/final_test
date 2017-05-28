#ifndef _MY_STACK_H
#define _MY_STACK_H
#define MAX 100
typedef struct {//顺序栈结构体
    int * top;
    int size;
}STACK;

void stack_push(int x,STACK *s);
int stack_pop(STACK *s);

// The capacity of the stack
int stack_capacity(STACK s);

// Current available size of the stack
int stack_size(STACK s);


/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty(STACK s);
int stack_is_full(STACK s);


#endif //_MY_STACK_H
