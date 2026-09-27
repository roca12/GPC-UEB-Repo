'''
/*
 * Autor: Juan Martinez
 * Problema: Codeforces Checking (1791A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/problemset/problem/1791/A
 * Difficulty: 800
 */
'''
t = int(input())

a = "codeforces"

for i in range(t):
    s = input().strip()
    if s in a: print("YES")
    else: print("NO")
