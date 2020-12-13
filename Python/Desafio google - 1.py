#Problema
'''
Colocação de Parenteses
Dado um número qualquer o algoritimo será resposável por colocar este número dentro de parenteses,
de modo que a quantidade de parenteses que o envolva é o valor que o mesma representa. 

Exemplo:
2521
Saída:
((2(((5)))2)1)

Exemplo:
201
Saída:
((2))0(1)

Exemplo:
54713
Saída:
(((((5)4(((7))))))1((3)))'''



#Programa

def parenteses(numero):
    
    contador=True
    numero_final=list()
    posi=0
    for letra in numero:
        
        if contador==True:
            number=int(letra)
            numero_final.append("(" * number + letra)
        if contador==False:
            if letra>numero[posi-1]:
                number=int(letra)
                number_old= int(numero[posi-1])
                numero_final.append("(" * (number-number_old) + letra)
            else:
                number= int(letra)
                number_old= int(numero[posi-1])
                numero_final.append(")" * (number_old-number)+letra)
        



        if letra==numero[-1]:
            number= int(letra)
            number_old= int(numero[posi-1])
            numero_final.append(")" * (number))
                
            
        contador=False
        posi=posi+1    
        
        
    numero_finish=''
    for x in numero_final:
        numero_finish= numero_finish+x
        
    return numero_finish

while True:
    numero= input('Digite o numero desejado')
    resultado= parenteses(numero)
    print(resultado)
