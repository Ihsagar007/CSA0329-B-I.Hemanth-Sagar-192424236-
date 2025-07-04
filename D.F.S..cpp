#include <stdio.h>

// Set a safe upper limit for number of vertices
#define MAX 10

int adj[MAX][MAX];    // Adjacency matrix
int visited[MAX];     // Visited array
int n;                // Number of vertices

// Depth-First Search function
void DFS(int vertex) {
    visited[vertex] = 1;
    printf("%d ", vertex);

    for (int i = 0; i < n; i++) {
        if (adj[vertex][i] == 1 && visited[i] == 0) {
            DFS(i);
        }
    }
}

int main() {
    int edges, start;
    int u, v;

    printf("Enter number of vertices: ");
    scanf("%d", &n);

    // Initialize visited[] and adj[][]
    for (int i = 0; i < n; i++) {
        visited[i] = 0;
        for (int j = 0; j < n; j++) {
            adj[i][j] = 0;
        }
    }

    printf("Enter number of edges: ");
    scanf("%d", &edges);

    printf("Enter edges (u v) format (0 to %d):\n", n - 1);
    for (int i = 0; i < edges; i++) {
        scanf("%d %d", &u, &v);
        adj[u][v] = 1;
        adj[v][u] = 1; // For undirected graph
    }

    printf("Enter starting vertex for DFS (0 to %d): ", n - 1);
    scanf("%d", &start);

    printf("DFS Traversal from vertex %d: ", start);
    DFS(start);

    return 0;
}
