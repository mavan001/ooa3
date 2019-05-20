#include <iostream>
#include "SFMLGraphVisualizer.h"


using namespace std;


int main() {
	DiGraph graph;
	SFMLGraphVisualizer vis;
	graph.addNode(new Node("A", 120, 160));
	graph.addNode(new Node("B", 180, 430));
	graph.addNode(new Node("C", 460, 510));
	graph.addNode(new Node("D", 640, 360));
	graph.addNode(new Node("E", 540, 100));
	graph.addNode(new Node("F", 410, 360));
	//A Edges
	graph.addEdge("A", "E", 10);
	graph.addEdge("A", "B", 5);
	//B Edges
	graph.addEdge("B", "F", 1);
	graph.addEdge("B", "C", 7);
	//C Edges
	graph.addEdge("C", "D", 9);
	//D Edges
	graph.addEdge("D", "E", 3);
	//E Edges
	graph.addEdge("E", "F", 3);
	//F Edges
	graph.addEdge("F", "A", 6);
	graph.addEdge("F", "D", 2);
	graph.addEdge("F", "E", 3);

	vis.visualize(graph);
}
