"""""
Autor: Scioville
Problema: Cheater Detection (RPC ronda 4)
Juez online: ????
Veredicto: accepted
Stay back, ????. It's dangerous...
"""
import math

t = int(input())

for _ in range(t):
    n = int(input().replace(".",""))
    tiempo = 0

    while (True):

        if(n%3!=2):
            print("VALID")
            break
        else:
            print("IMPOSSIBLE")
            break