/*
 * my_stack的实现文件
 * 如果采用C++的实现，那也可以把此文件名改为.cpp
 * 但是记住g++才是编译C++的编译器
 *
 */
#include <stdio.h>
#include <stdlib.h>

#include "include/my_stack.h"
/*
 * param: STACK s
 * return: 栈空，则返回1，否则返回0
 * note: 判断是否栈空
 */
int stack_is_empty(STACK s)
{
    if(s.size == 0)return 1;
    else return 0;
}

/*
 * param: STACK s
 * return: 栈满，则返回1，否则返回0
 * note: 判断是否栈满
 */
int stack_is_full(STACK s)
{
    if(s.size == MAX)return 1;
    else return 0;
}

/*
 * param: x ，STACK s
 * return: void
 * note: 压栈
 */
void stack_push(int x,STACK *s)
{
    s->top = x;
    s->top ++;
    s->size ++;
}

/*
 * param: STACK s
 * return: 栈顶元素
 * note: 弹栈
 */
int stack_pop(STACK *s)
{
    int x;
    x=s->top;
    s->top --;
    s->size --;
    return x;
}

/*
 * param: STACK s
 * return: 返回栈的剩余容量
 * note: 求栈的剩余容量
 */
int stack_size(STACK s)
{
    return MAX-s.size;
}

/*
 * param: STACK s
 * return: 返回栈的大小
 * note: 求栈的大小
 */
int stack_capacity(STACK s)
{
    return s.size;
}
