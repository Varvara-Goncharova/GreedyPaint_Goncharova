#include<vector>
#include<iostream>
#include<cstddef>
#include<queue>
#include<unordered_set>
#include "solver.h"

size_t Solver::BFS(const Graph& graph, std::vector<size_t>& colours, std::vector<bool>& visited, size_t start) {
    std::queue<size_t> queue;
    visited[start] = true;
    queue.push(start);
    size_t max = 0;
    while(!queue.empty()) {
        size_t current = queue.front();
        queue.pop();
        std::unordered_set<size_t> set;
        for(size_t i = 0; i < graph[current].size(); ++i) {
            size_t neighbour = graph[current][i];
            if(!visited[neighbour]) {
                visited[neighbour] = true;
                queue.push(neighbour);
            } 
            set.insert(colours[neighbour]);
        } 
        for(size_t i = 1; i <= graph.size(); ++i) {
            if(set.find(i) == set.end()) {
                colours[current] = i;
                max = std::max(i, max);
                break;
            }
        }
    }
    return max;
}

size_t Solver::GreedyPaint(const Graph& graph) {
    std::vector<size_t> colours(graph.size(), 0);
    std::vector<bool> visited(graph.size(), false);
    size_t max = 0;
    for(size_t i = 0; i < graph.size(); ++i) {
        if(!visited[i]) {
            max = std::max(max,BFS(graph, colours, visited, i));
        }
    }
    return max;
}   