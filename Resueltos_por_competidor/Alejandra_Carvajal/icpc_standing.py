# Autor: Alejandra Carvajal
# Problema: ICPC Standing
# Juez online: Light OJ
# Veredicto: Accepted
# URL: https://lightoj.com/problem/icpc-standing

t = int(input())
for i in range(1, t+1):
    
    p,s,r = map(int, input().split())
    if p == s and r !=1:
        print(f'Case {i}: No')
    else:
        print(f'Case {i}: Yes')
