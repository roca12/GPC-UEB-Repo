#Autor: Alejandra Carvajal
#Problema: Creating Words
#Juez online: Codeforces
#Veredicto: Accepted
#Url: https://codeforces.com/problemset/problem/1985/A

t = int(input())
for i in range(t):
    a,b = map(str, input().split())

    aa = b[0] + a[1:]
    bb = a[0] + b[1:]
    print(f'{aa} {bb}')
