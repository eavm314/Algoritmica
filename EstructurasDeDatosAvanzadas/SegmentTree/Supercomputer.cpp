#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
#define MAX_N 1000010

using namespace std;

// Variables static

int n;
bool a[MAX_N];
int segmentTree[MAX_N * 4];

void init(int inicio, int final, int nodoActual)
{
    if (inicio == final)
    {
        segmentTree[nodoActual] = a[inicio];
    }
    else
    {
        int mid = (inicio + final) / 2;
        int nodoIzquierdo = 2 * nodoActual + 1;
        int nodoDerecho = 2 * nodoActual + 2;
        // Ir por lado izquierdo
        init(inicio, mid, nodoIzquierdo);
        // Ir por lado derecho
        init(mid + 1, final, nodoDerecho);

        segmentTree[nodoActual] = segmentTree[nodoIzquierdo] + segmentTree[nodoDerecho];
    }
}

int query(int inicio, int final, int nodoActual, int izquierda, int derecha)
{
    if (inicio >= izquierda && final <= derecha)
    {
        return segmentTree[nodoActual];
    }

    int mid = (inicio + final) / 2;
    int nodoIzquierdo = 2 * nodoActual + 1;
    int nodoDerecho = 2 * nodoActual + 2;

    if (derecha <= mid)
    {
        return query(inicio, mid, nodoIzquierdo, izquierda, derecha);
    }
    else if (izquierda > mid)
    {
        return query(mid + 1, final, nodoDerecho, izquierda, derecha);
    }
    else
    {
        int maxIzquierdo = query(inicio, mid, nodoIzquierdo, izquierda, derecha);
        int maxDerecho = query(mid + 1, final, nodoDerecho, izquierda, derecha);

        return maxIzquierdo + maxDerecho;
    }
}

void update(int inicio, int final, int nodoActual, int posicion, int valor)
{
    if (posicion < inicio || posicion > final)
    {
        return;
    }

    if (inicio == final)
    {
        segmentTree[nodoActual] = valor;
    }
    else
    {

        int mid = (inicio + final) / 2;
        int nodoIzquierdo = 2 * nodoActual + 1;
        int nodoDerecho = 2 * nodoActual + 2;
        // Actualizar por lado izquierdo
        update(inicio, mid, nodoIzquierdo, posicion, valor);
        // Actualizar por lado derecho
        update(mid + 1, final, nodoDerecho, posicion, valor);

        segmentTree[nodoActual] = segmentTree[nodoIzquierdo] + segmentTree[nodoDerecho];
    }
}

int main()
{
    input;
    int k; 
    cin >> n >> k;
    memset(a, 0, sizeof(a));

    // Inicializar Segment Tree
    init(0, n, 0);

    char q;

    // for (int i = 0; i <= 2 * n; i++)
    // {
    //     cout << segmentTree[i] << " ";
    // }
    // cout << endl;

    for (int i = 0; i < k; i++)
    {
        cin >> q;
        //cout<<i<<endl;
        if (q == 'F')
        {
            int pos;
            cin >> pos;
            a[pos] = !a[pos];
            update(0, n, 0, pos, a[pos]);

            // for (int i = 1; i <= n; i++)
            // {
            //     cout << a[i] << " ";
            // }
            // cout << endl;
            // for (int i = 0; i < 2 * n; i++)
            // {
            //     cout << segmentTree[i] << " ";
            // }
            // cout << endl;
        }
        else
        {
            int pos1, pos2;
            cin >> pos1 >> pos2;

            cout << query(0, n, 0, pos1, pos2) << endl;
        }
    }
    return 0;
}