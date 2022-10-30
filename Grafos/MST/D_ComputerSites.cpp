#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
#define MAX_N 101    // Maximo numero de vertices o nodos

using namespace std; 

// parent y rango sirven para el union find 
int parent[MAX_N];
int rango[MAX_N];

// int n, m; // n numero de nodos y m numero de aristas 

void init() {
    for(int i=0;  i<= MAX_N; i++) {
        parent[i] = i;
        rango[i] = 0;
    }
}

int find(int x) {
    if(x == parent[x]) {
        return x;
    }
    else {
        parent[x] = find(parent[x]);
        return parent[x];
    }
}

bool sameComponent(int nodeA,int nodeB) {
    return find(nodeA) == find(nodeB);
}

void unionRango(int x,int y) {
    int xRaiz = find(x);
    int yRaiz = find(y);
    if(rango[xRaiz] > rango[yRaiz]) {
        parent[yRaiz] = xRaiz;
    } else {
        parent[xRaiz] = yRaiz;
        if(rango[xRaiz] == rango[yRaiz]) {
            rango[yRaiz]++;
        }
    }
}

struct Arista{ 
    int origen;
    int destino; 
    int peso; 
    Arista(){}
    // sobrecarga del operador < para ordenar las aristas
    // sort 
    bool operator<(const Arista &a) const {
        return peso < a.peso;
    }
}aristas[MAX_N*MAX_N]; 

// Arista MST[MAX_N]; // n-1 aristas 

// int numAristasArbol;
int kruskal(int nroAristas) {
    
    int origen, destino;
    int peso;
    int total = 0; // total del arbol de expansión minimo 
    // numAristasArbol = 0; // contar el numero de aristas 
    init(); // Iniciar el union Find 
    sort(aristas,aristas + nroAristas); // ordena las aristas

    for (int i = 0; i < nroAristas; i++)
    {
        origen = aristas[i].origen;
        destino = aristas[i].destino;
        peso = aristas[i].peso;

        if(!sameComponent(origen,destino)) { // estos 2 dos nodos forman un ciclo 
            total += peso; 
            unionRango(origen,destino);  // unimos los nodos
            // MST[numAristasArbol] = aristas[i]; // Guardamos la arista agregada
            // numAristasArbol++; // incrementados la posicion para la futura arista
            
        }
    }
    return total;
}
int main(){
    input;
    int t=0,n,k,m;
    while (scanf("%d",&n)!=EOF)
    {
        int a,b,p,total_original=0;
        for (int i = 0; i < n-1; i++){
            scanf("%d %d %d",&a,&b,&p);
            total_original+=p;
        }
        scanf("%d",&k);
        for (int i = 0; i < k; i++)
            scanf("%d %d %d",&aristas[i].origen,&aristas[i].destino,&aristas[i].peso);
        
        scanf("%d",&m);
        for (int i = k; i < m+k; i++)
            scanf("%d %d %d",&aristas[i].origen,&aristas[i].destino,&aristas[i].peso);
        
    
        // for (int i = 0; i < a; i++)
        // {
        //     printf("Arista %d: origen=%d, destino=%d, peso=%f\n",i,aristas[i].origen,aristas[i].destino,aristas[i].peso);
        // }
        

        if(t) printf("\n");
        printf("%d\n",total_original);
        printf("%d\n",kruskal(m+k));
        t++;
    }    
    return 0;
}