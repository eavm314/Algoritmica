#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)

using namespace std;

int n,pizzas;
bool ingredientes[20];
vector<int> pares[20];

bool any_par(int i){
    for (int p = 0; p < pares[i].size(); p++)
    {
        if (ingredientes[pares[i][p]])
        {
            return 1;
        }
    }
    return 0;
    
}

void mezcla(int ini){
    for (int i = ini; i < n; i++)
    {
        if (i!=ini){
            ingredientes[i-1]=0;
        }
        if (!any_par(i))
        {
            pizzas++;
            ingredientes[i]=1;
            mezcla(i+1);
        }
    }
    
}

int main(){
    input;
    int m;
    scanf("%d %d",&n,&m);
    memset(ingredientes,0,sizeof(ingredientes));

    if (m==0)
    {
        printf("%d",int(pow(2,n)));
        return 0;
    }
    
    for (int i = 0; i < m; i++)
    {
        int a,b;
        scanf("%d %d",&a,&b);
        a--;b--;
        if (a>b)
            pares[a].push_back(b);
        else
            pares[b].push_back(a);
    }
    
    mezcla(0);
    printf("%d",pizzas+1);
    return 0;
}