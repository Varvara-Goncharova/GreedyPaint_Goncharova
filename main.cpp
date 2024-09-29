#include "parser.h"
#include "solver.h"
#include<vector>
#include<iostream>
#include<cstddef>
#include<queue>
#include<unordered_set>

int main() {
    Parser parser;
    Solver solver;
    Graph graph = parser.ReadGraph();

    std::cout << solver.GreedyPaint(graph);
}