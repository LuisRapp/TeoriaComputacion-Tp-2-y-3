# TeoriaComputacion-Tp-2-y-3
**Punto 1:**
Implementación Comparativa del Cálculo del Factorial en Diferentes Paradigmas de Programación
Se desarrolla en los siguientes paradigmas y lenguajes:
a. Imperativo (Estructurado/Procedimental) -> C
b. Orientado a Objetos (POO) -> Java
c. Funcional -> Haskell
d. Declarativo (Lógico): -> Prolog

**Punto 2:**
Implementar un problema clásico algorítmico en dos lenguajes de programación: uno interpretado (Python) y otro compilado (C++). El problema a resolver será el algoritmo de búsqueda binaria
Pasos del algoritmo:
Inicializar dos punteros: uno al inicio (inicio) y otro al final (fin) del arreglo.
Mientras inicio sea menor o igual a fin:
- Calcular el punto medio: medio = (inicio + fin) // 2.
- Comparar el valor en la posición medio con el objetivo.
- Si son iguales: se encontró el valor, devolver el índice.
- Si el valor medio es mayor al objetivo: ajustar fin = medio - 1.
- Si el valor medio es menor al objetivo: ajustar inicio = medio + 1.
- Si se termina el ciclo sin encontrar el valor: devolver que no está presente.
