#include <iostream>
#include "Node.h"
#include "Edge.h"
#include "Graph.h"
#include "Taxi.h" 
#include "UI.h"
#include "Route.h"


		/* ### C23 – Laborübung 5 - statische Bibliothek, Vererbung, Dijkstraalgorithmus, Modifikation Taxi-App ### */

int main(){
	try {
		UI programm;
		programm.menu();
	}
	catch (const char*) {
		std::cerr << "Exception: same node id" << std::endl;
	}
	system("PAUSE");
	return 0;
}
