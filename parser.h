#include<vector>
#include<iostream>
#include<cstddef>
#include<queue>
#include<unordered_set>

using Graph = std::vector<std::vector<size_t>>;

class Parser {
public:
    Graph ReadGraph();
};