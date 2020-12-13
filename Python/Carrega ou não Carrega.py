# link (https://www.urionlinejudge.com.br/judge/pt/problems/view/1026)

numbersProcessar = []
binarios = []
while True:
    try:
        numbers = input().split(" ")
        n = list(bin(int(numbers[0])))
        n.remove("b")
        n1 = list(bin(int(numbers[1])))
        n1.remove("b")
        binario = ""
        for x in n:
            binario = binario + x
        numbersProcessar.append(binario)
        binario = ""
        for x in n1:
            binario = binario + x
        numbersProcessar.append(binario)
        numbersProcessar[0] = str(0) * (len(numbersProcessar[1]) - len(numbersProcessar[0])) + numbersProcessar[0]
        numbersProcessar[1] = str(0) * (len(numbersProcessar[0]) - len(numbersProcessar[1])) + numbersProcessar[1]
        numero = 0
        cont = len(numbersProcessar[0]) -1
        for x in range(len(numbersProcessar[0])):
            if int(numbersProcessar[0][x]) + int(numbersProcessar[1][x]) == 1:
                numero = numero + (2**cont)
            cont = cont - 1
        numbersProcessar = []
        binarios.append(numero)
    except:
        break
for x in binarios:
    print(x)
