#include <iostream>
#include "SFMLGraphVisualizer.h"

using namespace std;


int main() {
        DiGraph graph;
        SFMLGraphVisualizer vis;
        graph.addNode(new Node("a",10, 20));

    vis.visualize(graph);
}

