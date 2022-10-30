#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)

using namespace std;

vector<int> posibles[] =
    
    {
        {},
        {2,4},
        {3,5},
        {6},
        {5,7},
        {6,8},
        {9},
        {8},
        {9,0},
        {},
    };

int k;
int min_diff;
int cercano;
int cont;

void backtracking(int actual, int acc){
    cont++;
    // printf("it %d: %d %d\n",cont,actual,acc);
    // if(cont>1000)
    //     exit(0);

    if (abs(k-acc)<min_diff)
    {
        cercano = acc;
        min_diff = abs(k-acc);
        // printf("min: %d\n",min_diff);
    }

    int nuevo = acc*10+actual;
    // printf("nuevo: %d\n",nuevo);
    // return;
    if (acc*10-k>min_diff || actual+acc== 0 )
        return;
    
    backtracking(actual,nuevo);
    
    for (int i = 0; i < posibles[actual].size(); i++)
    {
        backtracking(posibles[actual][i],acc);
    }
    
}


int main() {
    input;

    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        min_diff=200;
        cercano=0;
        cont=0;
        scanf("%d",&k);
        backtracking(1,0);
        printf("%d\n",cercano);
        // printf("it: %d\n",cont);
    }

    return 0;
}
