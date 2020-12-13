def binarySearch(lista,key,inicio=0,final=None):
    if final is None:
        final = len(lista) - 1
    if inicio<=final:
        meio = (inicio+final)//2
        if lista[meio]==key:
            return meio
        if key<lista[meio]:
            return binarySearch(lista,key,inicio,meio-1)
        else:
            return binarySearch(lista,key,meio+1,final)
    return None
lista = [1,4,15,16,18,20,25,27,27,90]
n = binarySearch(lista,4)
print(n)

