#Autor: Alejandra Carvajal
#Problema: Word Capitalization
#Juez Online: Codeforces
#Veredicto: Accepted
#Url: https://codeforces.com/problemset/problem/281/A

s = input()

if s[0].isupper():
    print(s)
else:
    print(s[0].upper() + s[1:])
