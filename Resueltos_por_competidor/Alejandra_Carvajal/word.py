#Autor: Alejandra Carvajal
#Problema: Word
#Juez Online: CodeForces
#Veredicto: Accepted
#URL: https://codeforces.com/problemset/problem/59/A

s = input()
ma = 0
mi = 0

for c in s:
    if c.isupper():
        ma = ma + 1
    elif c.islower():
        mi = mi + 1

if ma > mi:
    print(s.upper())
else:
    print(s.lower())
