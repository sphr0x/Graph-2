#include <iostream>
#include "Node.h"
#include "Edge.h"
#include "Graph.h"



int main()
{
	Node n1("eins");
	Node n2("zwei");
	Node n3("drei");
	Node n4("eins");
	Edge *e1 = new Edge(n1, n2);
	Edge *e2 = new Edge(n2, n1);
	Edge *e3 = new Edge(n1, n3);
	Graph g1;

	g1.addNode(&n1);
	g1.addNode(&n2);
	g1.addNode(&n3);
	g1.addNode(&n4);
	g1.addEdge(e1);
	g1.addEdge(e2);
	g1.addEdge(e3);




	/*
	std::cout << e1->toString() <<std::endl;				 // just check if n1/n2 are in e1 -> still not in list
	std::cout << e2->toString() << std::endl;
	std::cout << e3->toString() << std::endl;
	*/

	/* check what in/out Edges are in list
	e3->isConnectedTo(n1);
	for (std::list<Edge*>::iterator it = n1.getOutEdges().begin();it != n1.getOutEdges().end();++it) {
		std::cout << (*it)->toString() << " node1 out edges"<<std::endl;
	};
	std::cout << "." << std::endl;
	for (std::list<Edge*>::iterator it = n1.getInEdges().begin();it != n1.getInEdges().end();++it) {
		std::cout << (*it)->toString() << " node1 in edges" << std::endl;
	};
	std::cout << "." << std::endl;
	for (std::list<Edge*>::iterator it = n2.getOutEdges().begin();it != n2.getOutEdges().end();++it) {
		std::cout << (*it)->toString() << " node2 out edges" << std::endl;
	};
	std::cout << "." << std::endl;
	for (std::list<Edge*>::iterator it = n2.getInEdges().begin();it != n2.getInEdges().end();++it) {
		std::cout << (*it)->toString() << " node2 in edges" << std::endl;
	};
	*/

	/*
	delete e1;
	delete e2; 
	delete e3;
	*/

	/* check if deleted

	std::cout << "deleted!" << std::endl;
	for (std::list<Edge*>::iterator it = n1.getOutEdges().begin();it != n1.getOutEdges().end();++it) {
		std::cout << (*it)->toString() << " node1 out edges" << std::endl;
	};
	std::cout << "." << std::endl;
	for (std::list<Edge*>::iterator it = n1.getInEdges().begin();it != n1.getInEdges().end();++it) {
		std::cout << (*it)->toString() << " node1 in edges" << std::endl;
	};
	std::cout << "." << std::endl;
	for (std::list<Edge*>::iterator it = n2.getOutEdges().begin();it != n2.getOutEdges().end();++it) {
		std::cout << (*it)->toString() << " node2 out edges" << std::endl;
	};
	std::cout << "." << std::endl;
	for (std::list<Edge*>::iterator it = n2.getInEdges().begin();it != n2.getInEdges().end();++it) {
		std::cout << (*it)->toString() << " node2 in edges" << std::endl;
	};
	*/
	std::cin.ignore();
	return 0;
}
