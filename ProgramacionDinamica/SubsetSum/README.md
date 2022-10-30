# Subset Sum
Es un problema que se plantea como sigue:

    Dado un conjunto de números enteros no negativos, averiguar si existe un subconjunto tal que al sumarlos de como resultado exactamente un número X.

La idea de la solución consiste en seleccionar uno por uno los números del conjunto y crear dos ramas: una donde tomamos el número en el subconjunto y otra en la que no.

Esto se realiza con una complejidad temporal exponencial $O(2^n)$, donde $n$ es el tamaño del conjunto original.
Sin embargo, habrá muchas veces en las que obtengamos la misma suma con distintos sumandos, y ahí es donde entra en juego la programación dinámica, que reduce la complejidad a un número igual a la suma buscada por la cantidad de elementos.

![SS](https://miro.medium.com/max/806/1*M618vXyclTKHkbebPgeAFQ.jpeg)

## Código Base
- [Top Down](SubsetSumTD.cpp)
- [Bottom Up](SubsetSumBU.cpp)

## Referencias
- [Subset Sum Problem](https://www.geeksforgeeks.org/subset-sum-problem-dp-25/)