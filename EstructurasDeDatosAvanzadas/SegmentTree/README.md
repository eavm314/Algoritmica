# Segment Tree
Es una estructura que permite almacenar un arreglo de datos y calcular el resultado de una operación sobre un subconjunto continuo de estos.

Ejemplo:

$$a = \{1,5,8,2,4,6,9,1,3\}$$

Calcular la suma de los elementos en el intérvalo $[2,5]$ (inclusivo).

Respuesta: $8+2+4+6 = 20$

Para que una operación pueda implementarse con la estructura, esta debe ser un Monoide, es decir, que debe cumplir las siguientes condiciones:
* Debe existir un elemento neutro $e$, tal que $a\oplus e=a$
* Debe ser asociativa, tal que $a\oplus (b\oplus c)=(a\oplus b)\oplus c$
* Debe ser una operación interna, tal que si $a,b \in \mathbb{X} \rightarrow a\oplus b \in \mathbb{X}$, para cualquier conjunto $\mathbb{X}$.

![BIT](https://he-s3.s3.amazonaws.com/media/uploads/a0c7f90.jpg)

## Código base
-  [Segment Tree](SegmentTree.cpp) - _C++_

## Problemas
-  [Supercomputer](https://vjudge.net/problem/Kattis-supercomputer)
    -  [Solución](Supercomputer.cpp) - _C++_
## Referencias 
-  [Efficient and easy segment trees](https://codeforces.com/blog/entry/18051)
## Videos
-  [Episode 4 - Segment Trees](https://www.youtube.com/watch?v=Tr-xEGoByFQ)
-  [Sum of given range](https://www.youtube.com/watch?v=2bSS8rtFym4)
-  [AlgorithmsThread 3: Segment Trees](https://www.youtube.com/watch?v=QvgpIX4_vyA)