#include "Node.h"
#include <iostream>
using namespace std;
int main()
{
	Node* Node1 = new Node();
	Node* Node2 = new Node();
	Node* Node3 = new Node();
	Node* Node4 = new Node();

	Node1->next1 = Node2;
	Node1->next2 = Node4;
	Node2->next1 = Node3;
	Node2->next2->next1 = Node4;
	Node3->next1 = Node2;
	Node3->next2->next1 = Node1;
	Node4->next1->next2 = Node2;
	Node4->next2 = Node3;


	Node1->next1 = Node2;
	Node1->next2 = Node4;
	Node2->next1 = Node3;
	Node2->next2 = Node4;
	Node3->next1 = Node2;
	Node3->next2 = Node1;
	Node4->next2 = Node2;
	Node4->next2 = Node3;
}

