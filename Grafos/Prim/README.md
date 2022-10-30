# PRIM
El algoritmo PRIM busca encontrar el árbol de expansión máximo o mínimo en un grafo, es decir encontrar un conjunto de aristas tal que todos los puntos estén unidos y la suma de pesos sea mínima. 
Se realiza esta tarea considerando todos los posibles caminos en orden del más pequeño al más grande mediante el uso de una cola de prioridad. 

El algoritmo se puede resumir como sigue:
1. Seleccionar un nodo inicial A
2. Mandar los nodos vecinos no visitados a una cola de prioridad
3. Sacar el primer nodo de la cola
4. Repetir los pasos 2 y 3 hasta que la cola esté vacía

## Código Base
- [Prim](prim.cpp) - _C++_

## Referencias
- [Prim’s Minimum Spanning Tree (MST)](https://www.geeksforgeeks.org/prims-minimum-spanning-tree-mst-greedy-algo-5/?ref=gcse)

## Videos
- [Animación del algoritmo](https://www.youtube.com/watch?v=wpV1wvHqyuY)
