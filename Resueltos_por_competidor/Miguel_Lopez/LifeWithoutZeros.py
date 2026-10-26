#Autor: Miguel Lopez
#Problema: Life Without Zeros
#Juez Online: Codeforces
#Veredicto: Accepted
#Link: https://codeforces.com/contest/75/problem/A
def res(n):
    return int(str(n).replace('0', ""))
 
 
a = int(input())
b = int(input())
if res(a) + res(b) == res(a+b):
    print("YES")
else:
    print("NO")
