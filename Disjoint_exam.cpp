#include <stdio.h>

int getParent(int parent[], int x)
{
    if(parent[x] == x) return x;
    else parent[x] = getParent(parent, parent[x]);
}

void unionParent(int parent[], int a, int b)
{
    a = getParent(parent, a);
    b = getParent(parent, b);
    if (a < b) parent[b] = a;
    else parent[a] = b;
}

int FindParent(int parent[], int a, int b)
{
    a = getParent(parent, a);
    b = getParent(parent, b);
    if (a == b) return 1;
    else return 0;
}

int main()
{
    int parent[11];
    for(int i = 1; i <= 10; i++)
    {
        parent[i] = i;
    }
    unionParent(parent, 1, 2);
    unionParent(parent, 2, 3);
    unionParent(parent, 3, 4);
    unionParent(parent, 5, 6);
    unionParent(parent, 6, 7);
    unionParent(parent, 7, 8);

    printf("%d", FindParent(parent, 1, 5));
}