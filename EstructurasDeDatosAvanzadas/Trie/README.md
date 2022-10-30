# Trie
Es una estructura cuyo objetivo es facilitar la búsqueda de caracteres que forman parte de un conjunto de cadenas. La estructura toma la forma de un árbol donde cada caracter padre puede tener o no caracteres hijos y de esta forma conectar las cadenas que tienen un prefijo común.

Las operaciones más comunes y útiles que podemos realizar son:
* __InsertWord:__ Introduce una palabra al árbol letra por letra
* __SearchWord:__ Recorre el árbol para verificar si la palabra introducida está dentro
* __DeleteWord:__ Elimina los caracteres correspondientes a una palabra, cuidando de no eliminar prefijos de otras

Existen dos formas de implementar esta estructura internamente:
- Mediante un Map, que asocia un caracter a sus respectivos hijos
![BIT](https://upload.wikimedia.org/wikipedia/commons/thumb/b/be/Trie_example.svg/1200px-Trie_example.svg.png)

- Mediante un array de caracteres, donde cada casilla contiene a su vez otro array.
![BIT](https://images2015.cnblogs.com/blog/399159/201701/399159-20170109144930275-1379994294.png)

## Código base
-  [TrieArray](TrieArray.cpp) - _C++_
-  [TrieMap](TrieMap.cpp) - _C++_
-  [SuffixTrie](SuffixTrie.cpp) - _C++_ (Variante)

## Problemas
-  [Phone List](https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2347)
    - [Solución](PhoneList.cpp)

## Referencias 
-  [Trie data structure cheat sheet for coding interviews](https://medium.com/quick-code/trie-data-structure-cheat-sheet-for-coding-interviews-a828fd374b84)
-  [The Trie Data Structure: A Neglected Gem](https://www.toptal.com/java/the-trie-a-neglected-data-structure)

-  [Trie](https://www.interviewcake.com/concept/java/trie)

## Videos
- [Trie Data Structure](https://youtu.be/AXjmTQ8LEoI)