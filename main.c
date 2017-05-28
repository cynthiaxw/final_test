#include <stdio.h>
#include <stdlib.h>

#include "include/my_stack.h"

int main(void) {
	int x;
    STACK newstack;
    newstack.top = malloc(sizeof(int)*MAX);//初始化栈
    newstack.size = 0;
    while ( ! stack_is_full(newstack) ) {
        scanf("%d", &x);
        stack_push(x,&newstack);
        printf("栈中已有%d个元素，还能加入%d个元素。\n",stack_capacity(newstack),stack_size(newstack));
    }
	

	while ( !stack_is_empty(newstack) ) {
		x = stack_pop(&newstack);

		printf("%d\t", x);
	}
	printf("\n");

	return 0;
}
