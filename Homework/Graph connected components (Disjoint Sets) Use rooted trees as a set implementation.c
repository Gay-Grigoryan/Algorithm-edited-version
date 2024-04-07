
/*
//Graph connected components(Disjoint Sets) :
#include <stdio.h>

#include <stdlib.h>
#define MAXN 10000
int parent[MAXN];
int rank[MAXN];
void make_set(int n) {
    for (int i = 0; i < n; i++) {
        parent[i] = i;
        rank[i] = 0;
    }
}
int find_set(int v) {
    if (v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void union_sets(int a, int b) {
    a = find_set(a);
    b = find_set(b);
    if (a != b) {
        if (rank[a] < rank[b]) {
            int temp = a;
            a = b;
            b = temp;
        }
        parent[b] = a;
        if (rank[a] == rank[b])
            rank[a]++;
    }
}
int main() {
    int n = 10;
    make_set(n);
    union_sets(0, 1);
    union_sets(2, 3);
    union_sets(4, 5);
    union_sets(6, 7);
    union_sets(1, 3);
    union_sets(5, 7);
    printf("Connected Components:\n");
    for (int i = 0; i < n; i++) {
        if (parent[i] == i)
            printf("Root of component %d\n", i);
    }

    return 0;
}
*/