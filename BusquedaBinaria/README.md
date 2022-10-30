# Búsqueda Binaria
La búsqueda binaria es un algoritmo que puede encontrar un elemento dentro de una lista que cuampla cierta condición, con una complejidad  temporal aproximado igual al logarítmo del tamaño de la lista. 
Para esto es necesario que la lista se encuentre ordenada siguiendo algún criterio que nos ayude a realizar la búsqueda.

Procedimiento:
- Empezamos a la mitad de la lista y evaluamos una función $f$ sobre el elemento, esta nos debería devolver un valor booleano
    - __True:__ Volvemos a comenzar el procedimiento pero solo con la mitad derecha de la lista
    - __False:__ Volvemos a comenzar el procedimiento pero solo con la mitad izquierda de la lista
- La búsqueda termina cuando tanto el elemento inicial como el final son el mismo y ese es nuestro resultado.

![BS](https://uniwebsidad.com/static/libros/imagenes/algoritmos-python/f0801.png)

## Problemas
- [The Monkey and the Oiled Bamboo](https://vjudge.net/problem/UVA-12032)
    - [Solución](Monkey.cpp)
- [Coins And Triangle](https://vjudge.net/problem/CodeChef-TRICOIN)
    - [Solución](CoinsTriangle.cpp)

## Referencias
- [Búsqueda Binaria](https://uniwebsidad.com/libros/algoritmos-python/capitulo-8/busqueda-binaria)
- [Binary Search](https://www.geeksforgeeks.org/binary-search/)

## Videos
- [Algorithms: Binary Search](https://www.youtube.com/watch?v=P3YID7liBug)