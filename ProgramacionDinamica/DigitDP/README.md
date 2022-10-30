# Digit DP
Es una técnica que utiliza Programación Dinámica para resolver problemas consistentes en encontrar la cantidad de enteros ubicados en el intérvalo $[a,b]$ que satisfagan alguna condición relacionada con sus dígitos.

La idea pricipal es que el número límite $(n)$ se represente como un arreglo de dígitos, luego se irá contruyendo todos los números menores a $n$ de iquierda a derecha.
Es decir, desde $0$ se formará $00,01,02,...09$; luego de $00$ saldrá $000,001,002,...009$; y así sucesivamente.

![DDP](https://res.cloudinary.com/practicaldev/image/fetch/s--PmeWValX--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://dev-to-uploads.s3.amazonaws.com/uploads/articles/gyji6lh1ekgnwlmvszb2.png)

## Problemas
- Encontrar todos los números dentro de un intérvalo dado que contengan un 3 o un 4 cómo dígito.
    - [Solución](DigitDP.cpp)

## Referencias
- [Digit DP | Introduction](https://www.geeksforgeeks.org/digit-dp-introduction/)
- [Digit DP](https://codeforces.com/blog/entry/53960)

## Videos
- [Dynamic Programming Digit DP | Competitive Programming](https://www.youtube.com/watch?v=L1ZC9MI5yhY)