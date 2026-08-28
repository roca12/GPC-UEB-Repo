#Autor: Miguel Lopez
#Problema: Bit Strings
#Juez online: CSES
#Veredicto: Accepted
#Url: https://cses.fi/problemset/task/1617
t = int(input())
aux = 2**t
mod = 1000000007
res = aux % mod
print(res)
