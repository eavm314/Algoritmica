# Edit Distance
## Descripción del Problema.
Dadas dos cadenas str1 y str2 y un conjunto de operaciones para aplicar sobre str1 (Insert, Remove, Replace). Encontrar la menor cantidad de operaciones que se deberían aplicar para convertir str1 en str2.

## Análisis de Complejidad
Tiene una complejidad temporal de 𝑂(𝑛∗𝑚), donde n y m son las longitudes de las cadenas de texto, y la matriz que usaremos para el dp tiene una casilla por cada combinación de caracteres.
## Código
[Edit Distance](EditDistance.cpp)



# Floyd Warshall
## Descripción del Problema.
El algoritmo sirve para encontrar el camino más corto entre 2 vértices, en un grafo dirigido con pesos.
## Análisis de Complejidad
Tiene una complejidad temporal de 𝑂(𝑛3), donde n es la cantidad de nodos del grafo. Esto debdo a la implementación de 3 bucles for que iteran sobre los vértices del grafo.
## Código
[Floyd Warshall](FloydWarshall.cpp)

# Rod Cutting
## Descripción del Problema.
Dada una varilla de tamaño n y una lista de precios para todas las varillas de tamaños menores a n. Determinar el máximo valor que se puede obtener al cortar la varilla en diferentes pedazos y venderlos por separado.
## Análisis de Complejidad
Tiene una complejidad temporal de 𝑂(𝑛2), donde n es el tamaño de la varilla. Debido a que la matriz dp tendrá un tamaño de n*n que será la mayor cantidad de combinaciones posibles y que no se repetirán.
## Código
[Rod Cutting](RodCutting.cpp)

# Longest Increase Subsequence
## Descripción del Problema.
El problema consiste en encontrar la longitud de la mayor subsecuencia de elementos de una secuencia, tal que todos los elementos estén ordenados.
Por ejemplo: en la secuencia: {10, 67, 2, 30, 45, 68}, la respuesta sería {10, 30, 45, 68}.
## Análisis de Complejidad
Tiene una complejidad temporal de 𝑂(𝑛2), donde n es el tamaño de la secuencia original. Debido a la matriz dp que tendrá un tamaño máximo de n*n con las combinaciones posibles.
## Código
[LIS](LIS.cpp)