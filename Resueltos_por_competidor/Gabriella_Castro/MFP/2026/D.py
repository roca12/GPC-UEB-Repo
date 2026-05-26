# Autor: Gabriella Castro
# Problema: Dividing Stickers
# Juez online: Codeforces
# Veredicto: Accepted
# URL: https://codeforces.com/group/9CNwiex6Ir/contest/693848/problem/D

from math import gcd
input()
l = list(map(int, input().split()))
 
print(sum(l) // gcd(*l))
