#ifndef DIRECTORYGRAPH_H
#define DIRECTORYGRAPH_H

#include <vector>
#include <string>
#include <filesystem>
#include "../model/DirectoryNode.h"
#include "../controller/DirectorySearch.h"

using namespace std;

class DirectoryGraph
{
public:
    DirectoryGraph();
    DirectoryNode *BuildGraph(const string &directoryName, long long depth);

    void SearchDirectory(const string &directoryName, int searchDepth, const string &query);

    void PrintGraphDFS(DirectoryNode *node, long long depth);
    bool allFilesPermited;
    string permissionErrorString;

private:
    bool isDirectory(const std::string &pathStr);
    void TraverseDirectoriesDFS(DirectoryNode *node, long long depth, long long currentDepth = 0);
    void PrintGraphDFS(DirectoryNode *node, long long depth, long long currentDepth, bool isLastChild, long long mask);
    void TraverseDirectoriesToSearch(DirectoryNode *node, long long depth, long long currentDepth, const string &query, vector<pair<int, DirectoryNode *>> &results);
};

#endif
