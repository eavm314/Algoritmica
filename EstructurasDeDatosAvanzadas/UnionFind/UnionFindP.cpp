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

int main() {
    input;
    int q;
    scanf("%d %d",&n,&q);

    init();
    // printf("hola? %d %d\n",n,q);

    for (int i = 0; i < q; i++)
    {
        char o;
        int a,b;
        scanf(" %c %d %d",&o,&a,&b);

        // printf("hola? %c %d %d\n",o,a,b);
        int p1=find(a);
        int p2=find(b);
        // printf("%d %d\n",p1,p2);
        if (o=='=')
            unionRango(a,b);
        else if (find(a)==find(b))
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
