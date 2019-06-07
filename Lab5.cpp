#include <iostream>
#include "Node.h"
#include "Edge.h"
#include "Graph.h"


using namespace std;

int main()
{
	Node *n1 = new Node("A");
	Node *n2 = new Node("B");
	Node* n3 = new Node("C");
	Node* n4 = new Node("D");
	Node* n5 = new Node("E");
	Edge* e1 = new Edge(*n1,* n2);
	Edge* e2 = new Edge(*n1, *n3);
	Edge* e3 = new Edge(*n1, *n4);
	Edge* e4 = new Edge(*n4, *n5);
	Graph* p = new Graph;

	p->addEdge(e1);
	p->addEdge(e2);
	p->addEdge(e3);
	p->addEdge(e4);
	p->remove(*e1);
	//for (auto node : p->getNodes())std::cout << node->getID() << std::endl;
	std::deque<Node*> bla;
	std::cout << p->findShortestPathDijkstra(bla,*n1, *n5);
	for (auto x : bla)
		std::cout << x->getID() << std::endl;
	p->~Graph();
	//std::cout << n1->getID();
	//std::cout << e1->getDstNode().getID();
	//n1->~Node();
	system("PAUSE");
	return 0;
}

