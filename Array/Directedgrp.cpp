

#include <iostream>
#include <vector>
using namespace std;

bool isCyclicUtil(int v, vector<vector<int>> &adjList, vector<bool> &visited, vector<bool> &recStack)
{
    visited[v] = true;
    recStack[v] = true;

    for (int u : adjList[v])
    {
        if (!visited[u])
        {
            if (isCyclicUtil(u, adjList, visited, recStack))
                return true;
        }
        else if (recStack[u])
        {
            // If the vertex is already in the recursive stack, it forms a cycle
            return true;
        }
    }

    recStack[v] = false;
    return false;
}

bool isCyclic(vector<vector<int>> &adjList, int n)
{
    vector<bool> visited(n, false);
    vector<bool> recStack(n, false);

    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            if (isCyclicUtil(i, adjList, visited, recStack))
                return true;
        }
    }

    return false;
}

int main()
{
    int n = 6; // Number of vertices in the graph

    vector<vector<int>> adjList(n); // Graph representation using adjacency list

    // Add directed edges to the graph
    adjList[0].push_back(1);
    adjList[1].push_back(2);
    adjList[2].push_back(3);
    adjList[3].push_back(4);
    adjList[4].push_back(1); // Cycle: 1 -> 2 -> 3 -> 4 -> 1

    if (isCyclic(adjList, n))
    {
        cout << "Graph contains a cycle." << endl;
    }
    else
    {
        cout << "Graph does not contain a cycle." << endl;
    }

    return 0;
}