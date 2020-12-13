#link (https://neps.academy/problem/47)

n = int(input())
numeros = input()
cont = 0
for x in range(n):
    try:
        if numeros[x]=="1" and numeros[x+1]=="0" and numeros[x+2]=="0":
            cont = cont + 1
    except:
        break
print(cont)
