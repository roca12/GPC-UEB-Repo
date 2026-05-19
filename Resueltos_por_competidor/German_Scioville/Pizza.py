"""""
Autor: Scioville
Problema: A Little Leftover Pizza (https://open.kattis.com/problems/alittleleftoverpizza)
Juez online: Katiis
Veredicto: accepted
Look what you've done to me... and yet... you and ???? are happy as if nothing happened...
"""
t = int(input())
cout= 0
s= 0
m= 0
l= 0

for _ in range (t):
    pizza = input().split()
    size = pizza[0]
    cant = int(pizza[1])
    if(size=='S' and cant >0):

        s += cant
    if (size == 'M' and cant >0):

        m += cant
    if (size == 'L' and cant >0):

        l += cant

cout = ((s+5)//6) + ((m+7)//8)+((l+11)//12)

print(cout)