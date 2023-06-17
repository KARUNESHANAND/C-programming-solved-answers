#include <algorithm>
#include <iomanip>
#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
#include <vector> 

using  namespace std ;

class CAdjMatrixGraph {
    public :
        
        vector<string> nodeList;


        vector<vector<int>> adjMatrix;


        void Resize(size_t newSize)


        void InsertNode(string name)


        void RemoveNode(string name)


        vector<string>::iterator SearchNode(string name)


        void InsertEdge(string fromNode, string toNode)
        
        void RemoveEdge(string fromNode, string toNode)

        bool SearchEdge(string fromNode, string toNode)

        void Print()

        void BreadthFirstSearch(string)

}

