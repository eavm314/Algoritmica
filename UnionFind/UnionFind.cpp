#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
//#include <stdio.h>

using namespace std;

int parent[1000010];
int rango[1000010];

int n;
void init() {
    for(int i=0;  i< n; i++) {
        parent[i] = i;
        rango[i] = 0;
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<parent[i]<<" ";
    // }
    // cout<<endl;
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

