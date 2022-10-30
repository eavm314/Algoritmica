#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int parent[100000];
int rango[100000];

int n, m, grupos;
void init()
{
    for (int i = 0; i <= n; i++)
    {
        parent[i] = i;
        rango[i] = 0;
    }
}

int find(int x)
{
    if (x == parent[x])
    {
        return x;
    }
    else
    {
        parent[x] = find(parent[x]);
        return parent[x];
    }
}

void unionRango(int x, int y)
{
    int xRaiz = find(x);
    int yRaiz = find(y);

    if (xRaiz == yRaiz)
    {
        return;
    }

    if (rango[xRaiz] > rango[yRaiz])
    {
        parent[yRaiz] = xRaiz;
    }
    else
    {
        parent[xRaiz] = yRaiz;
        if (rango[xRaiz] == rango[yRaiz])
        {
            rango[yRaiz]++;
        }
    }
    grupos--;
}

int main()
{
    input;
    cin >> n >> m;
    grupos = n;
    init();

    vector<pair<int, int>> hilos(m);
    vector<bool> hilosAEliminarB(m);

    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        hilos[i] = make_pair(x, y);
    }
    int NhilosAEliminar;
    cin >> NhilosAEliminar;

    vector<int> hilosAEliminar(NhilosAEliminar);
    stack<int> answer;

    for (int i = 0; i < NhilosAEliminar; i++)
    {
        cin >> hilosAEliminar[i];
        hilosAEliminar[i]--;
        hilosAEliminarB[hilosAEliminar[i]] = 1;
    }

    for (int i = 0; i < m; i++)
    {
        if (!hilosAEliminarB[i])
        {
            int ini = hilos[hilosAEliminar[i]].first;
            int fin = hilos[hilosAEliminar[i]].second;
            unionRango(ini, fin);
        }
    }

    answer.push(grupos);

    for (int i = NhilosAEliminar; i > 1; i--)
    {
        int ini = hilos[hilosAEliminar[i-1]].first;
        int fin = hilos[hilosAEliminar[i-1]].second;
        unionRango(ini, fin);
        answer.push(grupos);
    }

    cout<<answer.top();
    answer.pop();

    while (!answer.empty())
    {
        cout<<" "<<answer.top();
        answer.pop();
    }
    

    return 0;
}
