#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)

using namespace std;


// bool f(int x){
//     return n>x*(x+1)/2;
// }

int main(){
    input;
    int t;
    long long int n;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        cin>>n;

        // int ini=1,fin=int(sqrt(n)),mid=(ini+fin)/2;

        // while (ini!=mid)
        // {
        //     //cout<<"mid: "<<mid<<endl;
        //     if (mid*(mid+1)==2*n)
        //     {
        //         break;
        //     }
        //     if (f(mid))
        //     {
                
        //         ini=mid;
        //     } else
        //     {
        //         fin=mid;
        //     }
        //     mid=(ini+fin)/2;
        // }

        // Matematicas :D

        long long int x= (-1+sqrt(8*n+1))/2;
        cout<<x<<endl;
    }
    

    return 0;
}