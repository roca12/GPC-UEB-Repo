
 # Autor: Gabriella Castro
 # Problema: Creating Words
 # Juez online: VJudge
 # Veredicto: Accepted
 # URL: https://vjudge.net/problem/CodeForces-1985A
 

x = int(input())

for i in range(x):
    a, b = input().split()

    na = b[0] + a[1:]
    nb = a[0] + b[1:]

    print(na + " " + nb)
