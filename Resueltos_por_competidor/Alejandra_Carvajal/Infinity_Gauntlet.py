#Autor: Alejandra Carvajal
#Problema: Infinity Gauntlet
#Juez online: Codeforces
#Veredicto: Accepted
#Url: https://codeforces.com/problemset/problem/987/A

m = int(input())
gems = {"purple": "Power", "green": "Time", "blue": "Space", "orange": "Soul", "red": "Reality", "yellow": "Mind"} 

for i in range(m):
    l = input()
    if l in gems:
        gems.pop(l)

print(len(gems))
for v in gems.values():
    print(v)
