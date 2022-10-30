/*
    Algoritmo de Prim para hallar el árbol de expasión mínimo
    Autor: Enrique Vicente
*/

#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
#define MAX_N 10000 // Maximo numero de vertices o nodos

using namespace std;
typedef pair<int, int> pii;


int n, m; // n numero de nodos y m numero de aristas

vector<pii> grafo[MAX_N];
bool visitado[MAX_N];

int prim()
{
    priority_queue<pii, vector<pii>, greater<pii>> cola;
    pii actual = make_pair(0, 1);
    cola.push(actual);
    int nodoActual;
    int total = 0;
    while (!cola.empty())
    {
        actual = cola.top();
        cola.pop();
        nodoActual = actual.second;
        if (visitado[nodoActual])
            continue;

        visitado[nodoActual] = 1;
        total += actual.first;

        for (int i = 0; i < grafo[nodoActual].size(); i++)
        {
            if (!visitado[grafo[nodoActual][i].second])
            {
                cola.push(grafo[nodoActual][i]);
            }
        }
    }
    return total;
}

int main()
{
    input;
    memset(visitado, 0, sizeof(visitado));
    int origen, destino, peso;
    while (scanf("%d %d", &n, &m) != EOF)
    {
        for (int i = 0; i < m; i++)
        {
            scanf("%d %d %d", &origen, &destino, &peso);
            grafo[origen].push_back(make_pair(peso, destino));
            grafo[destino].push_back(make_pair(peso, origen));
        }

        printf("%d\n", prim());
    }

    return 0;
}