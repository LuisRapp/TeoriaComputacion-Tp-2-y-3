"""
Dado un arreglo ordenado y un valor objetivo, determinar si el valor está presente en el arreglo. 
En caso afirmativo, devolver su posición (índice); si no, indicar que no se encuentra.
Pasos del algoritmo:
Inicializar dos punteros: uno al inicio (inicio) y otro al final (fin) del arreglo.
Mientras inicio sea menor o igual a fin:
Calcular el punto medio: medio = (inicio + fin) // 2.
Comparar el valor en la posición medio con el objetivo.
Si son iguales: se encontró el valor, devolver el índice.
Si el valor medio es mayor al objetivo: ajustar fin = medio - 1.
Si el valor medio es menor al objetivo: ajustar inicio = medio + 1.
Si se termina el ciclo sin encontrar el valor: devolver que no está presente."""

# Ingreso de la lista por teclado
entrada = input("Ingrese los números separados por comas: ")
lista = [int(x.strip()) for x in entrada.split(",")]

# Ordeno la lista
lista.sort()

# Ingreso del valor a buscar
valor = int(input("Ingrese el valor que desea buscar: "))

# Algoritmo de Busqueda Binaria
def busqueda_binaria(valor):
    inicio = 0
    fin = len(lista) - 1
    while inicio <= fin:
        puntero = (inicio + fin) // 2
        if valor == lista[puntero]: 
            return puntero # Si son iguales: se encontró el valor, devolver el índice.
        elif valor < lista[puntero]:
            fin = puntero - 1 # Si el valor medio es mayor al objetivo: ajustar fin = medio - 1.
        else:
            inicio = puntero + 1 # Si el valor medio es menor al objetivo: ajustar inicio = medio + 1.
    return None # Si se termina el ciclo sin encontrar el valor: devolver que no está presente.

def buscar_valor(valor):
    res_busqueda=busqueda_binaria(valor) #Utilizo la funcion del algoritmo de busqueda binaria con el parametro 'valor'
    if res_busqueda is None: #Si el valor no esta dentro de la lista la funcion busqueda_binaria devuelve None
        return f"El valor {valor} no se encuentra dentro de la lista"  
    else:
        return f"El nro {valor}, se encuentra en la posicion {res_busqueda}"     
    
# Mostrar el resultado
print(buscar_valor(valor))