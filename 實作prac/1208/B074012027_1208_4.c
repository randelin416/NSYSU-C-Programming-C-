#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// pointer structure, using node1 to find the value of node3
int main()
{
	struct listnode
	{
		int num;
		struct listnode *ptr;
	};
	
	struct listnode node1, node2, node3;
	
	node1.num = 58;
	node1.ptr = &node2;
	
	node2.num = 48;
	node2.ptr = &node3;
	
	node3.num = 87;
	node3.ptr = NULL;
	
	printf("Node3's num = %d\n", node1.ptr -> ptr -> num);
	
	return 0;
} 
