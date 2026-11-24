/*
 * Autor: Juan Martinez
 * Problema: Vlad and the Best of Five (1926A)
 * Juez online: Codeforces
 * Veredicto: Accepted
 * Url: https://codeforces.com/contest/1926/problem/A
 * Difficulty: 800
 */
t = int(input())
while t > 0:
    t -= 1
    cad = input()
    if cad.count("A") > cad.count("B"): print("A")
    else: print("B")
