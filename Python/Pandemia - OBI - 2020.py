#link (https://neps.academy/problem/824)
numero_amigos, numero_reunioes = input().split(" ")
numero_amigos,numero_reunioes = int(numero_amigos),int(numero_reunioes)
infectado,primeira_reuniao = input().split(" ")
infectado,primeira_reuniao = int(infectado),int(primeira_reuniao)
infectados = [infectado]
for x in range(1,numero_reunioes+1):
    confirme = False
    reuniao = input().split(" ")
    for y in range(len(infectados)):
        if str(infectados[y]) in reuniao[1:]:
            confirme = True
    if confirme and x>=primeira_reuniao:
        for y in range(1,len(reuniao)):
            if int(reuniao[y]) not in infectados:
                infectados.append(int(reuniao[y]))
print(len(infectados))
print(infectados)



