#link (https://neps.academy/problem/310)

lista = []
lista2 = []
lista = map(int,input().split())
lista2 = map(int,input().split())
lista = list(lista)
lista2 = list(lista2)
resultado = 0
for x in range(lista[0],lista[2]+1):
    if x==lista2[0] or x==lista2[2] and lista2[1]<=lista[3]:
        resultado = 1 
        break
    
print(resultado)
