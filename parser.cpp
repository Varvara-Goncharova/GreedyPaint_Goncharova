#include "parser.h"
#include<vector>
#include<iostream>
#include<cstddef>
#include<queue>
#include<unordered_set>

Graph Parser::ReadGraph() {
        size_t v;
        size_t e;
        std::cin >> v >> e;
        Graph graph(v);
        for(size_t i = 0; i < e; ++i) {
            size_t from;
            size_t to;
            std::cin >> from >> to;
            graph[from].push_back(to);
            graph[to].push_back(from);
        }
        return graph;
    }