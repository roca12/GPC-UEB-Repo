
 # Autor: OtherSpanish
 # Problema: Stones Game
 # Juez online: CodeForces
 # Veredicto: Accepted
 # URL: https://codeforces.com/gym/106068/problem/C
 

import sys
input = sys.stdin.readline

t = int(input())
res = []
for _ in range(t):
    n = int(input())
    res.append("Second" if n & (n + 1) == 0 else "First")
print("\n".join(res))
