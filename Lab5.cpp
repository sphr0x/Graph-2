#include <iostream>
#include "Node.h"
#include "Edge.h"
#include "Graph.h"



int main()
{
	Node *n1 = new Node("eins");
	Node *n2 = new Node("zwei");
	Node *n3 = new Node("drei");
	Edge *e1 = new Edge(*n1,*n2);
	Graph *g1 = new Graph;

	try {
		g1->addEdge(e1);

		for (auto node : g1->getNodes()) {
			std::cout << node->getID() << std::endl;
		}
		for (auto edge : g1->getEdges()) {
			std::cout << edge->toString() << std::endl;
		}
		//g1->findEdges(*n1,*n2);
		for (auto vek : g1->findEdges(*n1, *n2)) {
			std::cout << vek->toString() << std::endl;
		}
		g1->remove(*e1);

		for (auto node : g1->getNodes()) {
			std::cout << node->getID() << std::endl;
		}
		for (auto edge : g1->getEdges()) {
			std::cout << edge->toString() << std::endl;
		}
	
	}
	catch (const char* a) {
		std::cerr << "Node name already in use" << std::endl;
	}
	g1->~Graph();
	delete n3;


	system("PAUSE");
	return 0;
}
