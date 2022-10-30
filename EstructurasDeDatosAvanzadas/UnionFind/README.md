# Union Find
Es una estructura que almacena un conjuntos disconjuntos. Se utiliza principalmente para saber si dos nodos de un grafo tienen alguna conexión en común, y en general es muy útil para resolver este tipo de problemas. Además, ocupa menos memoria que la implementación de un grafo a través de una matriz de adjacencia o una lista de listas.

Se pueden realizar dos operaciones principales:
- __Find:__ Devuelve como resultado el nodo padre del árbol donde se encuantra el nodo que pasamos como parámetro
- __Union:__ Conecta los dos conjuntos independientes a los que pertenecen cada uno de los nodos que pasamos como parámetros

## Código base
-  [Union find](UnionFind.cpp) - _C++_

## Problemas
-  [Union Find](https://vjudge.net/problem/Kattis-unionfind)
    - [Solución](UnionFindP.cpp)
-  [Anansi's Cobweb](https://acm.timus.ru/problem.aspx?space=1&num=1671)
    - [Solución](AnansiCobweb.cpp)

## Referencias 
-  [DISJOINT-SET: UNION FIND](https://jariasf.wordpress.com/2012/04/02/disjoint-set-union-find/)
-  [Disjoint Set Union (Union Find)](https://www.hackerearth.com/practice/notes/disjoint-set-union-union-find/)
## Videos
-  [Union Find Introduction](https://www.youtube.com/watch?v=ibjEGG7ylHk)
-  [Union Find Disjoint Set](https://www.youtube.com/watch?v=6aLEVSIkE9w)