#include <stdio.h>

#define MAX 100

struct Edge {
    int u, v, weight;
};

int parent[MAX];

// Find the parent of a vertex
int find(int x) {
    if (parent[x] == x)
        return x;

    return find(parent[x]);
}

// Join two sets
void unionSet(int a, int b) {
    int rootA = find(a);
    int rootB = find(b);

    parent[rootB] = rootA;
}

// Sort edges according to weight
void sortEdges(struct Edge edges[], int E) {
    int i, j;
    struct Edge temp;

    for (i = 0; i < E - 1; i++) {
        for (j = 0; j < E - i - 1; j++) {
            if (edges[j].weight > edges[j + 1].weight) {
                temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }
}

int main() {
    int V, E;
    int i;
    int count = 0;
    int totalWeight = 0;

    struct Edge edges[MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter number of edges: ");
    scanf("%d", &E);

    printf("Enter edges (source destination weight):\n");

    for (i = 0; i < E; i++) {
        scanf("%d %d %d",
              &edges[i].u,
              &edges[i].v,
              &edges[i].weight);
    }

    // Initially, every vertex is its own parent
    for (i = 0; i < V; i++) {
        parent[i] = i;
    }

    // Sort edges by increasing weight
    sortEdges(edges, E);

    printf("\nEdges in Minimum Spanning Tree:\n");

    // Select edges
    for (i = 0; i < E && count < V - 1; i++) {

        int u = edges[i].u;
        int v = edges[i].v;

        // Check whether adding the edge creates a cycle
        if (find(u) != find(v)) {

            printf("%d -- %d  =  %d\n",
                   u, v, edges[i].weight);

            totalWeight += edges[i].weight;
            unionSet(u, v);

            count++;
        }
    }

    printf("\nMinimum Cost of Spanning Tree = %d\n", totalWeight);

    return 0;
}