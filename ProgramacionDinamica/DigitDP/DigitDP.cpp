#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

// el numero maximo sera 10^18
// 1000000000000000000
string number;
int dp[20][2][10];

/* 
* Digit DP para contar los numeros 
* con un 3 o 4 
*/ 
int solve_dp(int pos, int mayor,int digito) {

    // Modificar de acuerdo al problema
    if(pos == number.size()) {
        if(digito == 3 || digito == 4) {
            return 1;
        }
        else {
            return 0;
        }
    }
    if(dp[pos][mayor][digito] == -1) { // Pregunto si no lo he calculado 
        int tope = 9;
        if(mayor == true) {  
            tope = number[pos]-'0';  // solo podemos usar los numeros de 0 al tope
        }
        dp[pos][mayor][digito] = 0;
        for(int i = 0; i <= tope; i++) {
            if(i == tope ) {  // && mayor
                dp[pos][mayor][digito] += solve_dp(pos+1, true, i);
            }
            else { // 0 1 2 
                dp[pos][mayor][digito] += solve_dp(pos+1, false, i);
            }
        }
    }
    return dp[pos][mayor][digito];
}



int main(){

    // hallar los numeros que tengan 2 pares en su interior del rango 20 hasta 30

    int  a = 99;
    int b = 15;
    // 152
    // 09
    // calculando f(a)
    number = to_string(a);
    memset(dp, -1, sizeof(dp));
    int pares_hasta_a = solve_dp(0, true, 0);
    // calculando f(b)
    memset(dp, -1, sizeof(dp));
    number = to_string(b);
    int pares_hasta_b = solve_dp(0, true, 0);
    // total para f(a,b) = f(b) - f(a-1)
    cout<< pares_hasta_a <<endl;
    return 0;
}