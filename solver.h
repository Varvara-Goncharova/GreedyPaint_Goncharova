#include<vector>
#include<iostream>
#include<cstddef>
#include<queue>
#include<unordered_set>

using Graph = std::vector<std::vector<size_t>>;

class Solver {
   private:
    size_t BFS(const Graph& graph, std::vector<size_t>& colours, std::vector<bool>& visited, size_t start);
   public:
    size_t GreedyPaint(const Graph& graph); 
};