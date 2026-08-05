#include <iostream>
#include <unordered_map>
#include <string>
#include <unordered_set>

// ---------------------------------------
// GRAPHS
// ---------------------------------------


// nodes/vertices
// edges/connections

// graphs can be bydirectional
// edges can be weighted

// Adjacency List



// Add vertex function
class Graph {
    private: 
      std::unordered_map<std::string, std::unordered_set<std::string>> adjList;

    public:

      void printGraph() {
        for (auto [vertex, edges] : adjList) {
            std::cout << vertex << ": [ ";
            for (auto edge : edges) {
                std::cout << edge << " ";
            }
            std::cout << "]" << std::endl;
        }
      };

      bool AddVertex(std::string vertex) {
        if (adjList.count(vertex) == 0) {
            adjList[vertex];
            return true;
        }
        return false;
      };

      bool AddEdge(std::string vertex1, std::string vertex2) {
        if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) {
            adjList.at(vertex1).insert(vertex2);
            adjList.at(vertex2).insert(vertex1);
            return true;
        }
        return false;

      };

      bool RemoveEdge(std::string vertex1, std::string vertex2) {
        if (adjList.count(vertex1) != 0 && adjList.count(vertex2) != 0) {
            adjList.at(vertex1).erase(vertex2);
            adjList.at(vertex2).erase(vertex1);
            return true;
        }
        return false;
      }
};



int main() {
    Graph* my_graph = new Graph();
    my_graph->AddVertex("A");
    my_graph->AddVertex("B");
    my_graph->AddVertex("C");
    my_graph->AddEdge("A","B");
    my_graph->AddEdge("A","C");
    my_graph->printGraph();
    my_graph->RemoveEdge("A","C");
    my_graph->printGraph();
    
    return 0;
}