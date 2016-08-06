// Win32Project1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>


using namespace std;


struct node{
	int data;
	struct node *next;
};

struct node* BuildOneTwoThreeFourFive() {
	struct node* head = NULL;
	struct node* second = NULL;
	struct node* third = NULL;
	struct node* forth = NULL;
	struct node* fifth = NULL;

	head = (node*)malloc(sizeof(struct node));
	second = (node*)malloc(sizeof(struct node));
	third = (node*)malloc(sizeof(struct node));
	forth = (node*)malloc(sizeof(struct node));
	fifth = (node*)malloc(sizeof(struct node));

	head->data = 1;
	head->next = second;

	second->data = 2;
	second->next = third;

	third->data = 3;
	third->next = forth;

	forth->data = 4;
	forth->next = fifth;

	fifth->data = 5;
	fifth->next = NULL;
	return head;
}





int Print(node *head) {
	while (head != NULL) {
		std::cout << head->data << endl;
		head = head->next;
	}
	return 0;

}

int main()
{
	
	Print(BuildOneTwoThreeFourFive());
	
	/*
	int i = 0;
	char c;
	c = getchar();
	while (c != EOF)
	{
		if (c == ' ' && i == 0)
			i++;
		if (c != ' ' && i == 0)
			printf("%c", c);
		if (c != ' ' && i == 1)
		{
			printf(" %c", c);
			i = 0;
		}
		
	}
	printf("\n");*/
	system("pause");
	return 0;
}



