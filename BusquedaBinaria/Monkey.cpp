#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)

using namespace std;

int n;
vector<int> rungs;

bool f(int x){
    int dif;
    for (int i = 0; i < n; i++)
    {
        dif=rungs[i+1]-rungs[i];
        if (x<dif)
            return false;
        if (x==dif)
            x--;
    }
    return true;
}

int main(){
    input;
    int t;
    // cin>>t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        // cin>>n;
        scanf("%d",&n);
        rungs.clear();
        rungs.push_back(0);
        int r;
        for (int j = 0; j < n; j++)
        {
            // cin>>r;
            scanf("%d",&r);
            rungs.push_back(r);
        }
        

        int ini=1,fin=r,mid;

        while (ini!=fin)
        {
            mid=(ini+fin)/2;
            // cout<<"mid: "<<mid<<endl;
            if (f(mid)) 
                fin=mid;
            else
                ini=mid+1;
        }

        // cout<<"Case "<<i+1<<": "<<ini<<endl;
        printf("Case %d: %d\n",i+1,ini);
    }
    

    return 0;
}