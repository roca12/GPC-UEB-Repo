"""""
Autor: Scioville
Problema: A Little Leftover Pizza (https://open.kattis.com/problems/alittleleftoverpizza)
Juez online: Katiis
Veredicto: accepted
I know I've done all sorts of unforgivable things, but... but I love you!
"""
t = int(input())

for _ in range(t):
    aux = 0
    count = 0
    numeros = input().split()

    a = int(numeros[0])
    b = int(numeros[1])
    c = int(numeros[2])

    x = max(a,b)
    y= min(a,b)

    div = int(((x-y+1)*(x+y))/2)

    multiplo1 = ((y+c-1)//c)*c
    multiplo2 = (x//c)*c

    n = (multiplo2-multiplo1)//c+1


    divi =int((n*(multiplo1+multiplo2)//2))

    print(div-divi)