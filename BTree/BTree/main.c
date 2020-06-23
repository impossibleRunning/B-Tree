#include "btree.h"
#include<stdio.h>
#include<stdlib.h>
int node_num_count = 0;
FILE* bt;
int main()
{
	BTree tree = (BTree)malloc(BTREE_SIZE);
	tree->root = (BTreeNode)malloc(BTREE_NODE_SIZE);
	btree_create(tree);
	
	/*
	int keys[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,25,24,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,
41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,61,62,63,64,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,
82,81,83,84,85,86,87,88,89,90,91,92,99,94,93,95,96,97,98,100 };
	int i = 0;

	bt = fopen("b_tree.txt", "w");

	if (bt == NULL) {
		printf("NULL");
		return 0;
	}

	
	for (i = 0; i < 100; i++) {
		printf("insert %d: \n",i);
		btree_insert(tree, i);
		//display_btree(&tree);
	}
	display_btree(tree);

	fclose(bt);
	*/

	bt = fopen("b_tree_random.txt", "w");
	FILE* ran = fopen("random.txt", "r");
	int a;
	for (int i = 0; i < 100; i++) {
		fscanf(ran,"%d", &a);
		btree_insert(tree, a);
	}
	display_btree(tree);
	fclose(bt);
	fclose(ran);
	
	/*
	  输出：key_value node_num del/ins
	*/

	/*
	btree_max(tree);
	display_btree(tree);
	btree_max(tree);
	btree_min(tree);
	btree_search(tree->root, 5);

	btree_search(tree->root, 33);


	btree_delete(tree, 100);
	display_btree(tree);
	btree_delete(tree, 94);
	display_btree(tree); 
	btree_delete(tree, 81);
	display_btree(tree);
	btree_delete(tree, 36);
	display_btree(tree);

	btree_delete(tree, 42);

	display_btree(tree);
	btree_max(tree);
	btree_min(tree);
	*/

	system("pause");
	free(tree);
	
	return 0;
}