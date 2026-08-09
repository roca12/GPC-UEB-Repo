'''
Autor: Alejandra Carvajal
Problema: Concatenation of languages
Juez Online: UVA
Veredicto: Accepted
URL: https://vjudge.net/problem/UVA-10887
'''
t = int(input())
for case in range (t):

    a, b = map(int, input().split())
    palabra_uno = []
    palabra_dos = []

    for i in range(a):
        aa = input()
        palabra_uno.append(aa)
    for i in range(b):
        bb = input()
        palabra_dos.append(bb)

    palabra_tres = set()
    for i in palabra_uno:
        for j in palabra_dos:
            palabra_tres.add(i + j)
    
    print(f'Case {case + 1}: {len(palabra_tres)}')
