#link (https://www.urionlinejudge.com.br/judge/pt/problems/view/1238)

n = int(input())
for x in range(n):
    confirme = True
    nome1 = ""
    nome2= ""
    string = input()
    for char in string:
        if char==" ":
            confirme = False
        elif confirme:
            nome1= nome1 + char
        else:
            nome2 = nome2 + char
    nome = ""
    for x in range(max(len(nome1),len(nome2))):
        if(x < len(nome1)):
            nome = nome + nome1[x]
        if(x < len(nome2)):
            nome = nome + nome2[x]
    print(nome)
