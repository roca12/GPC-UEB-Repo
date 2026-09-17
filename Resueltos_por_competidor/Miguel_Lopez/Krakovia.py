# Source: https://usaco.guide/general/io
#Autor: Miguel Lopez
#Problema: Krakovia
#Juez online: OnlineJudge
#Veredicto: Accepted
#Url: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&category=0&problem=1866&mosmsg=Submission+received+with+ID+31296520
case = 0
while True:
    a, b = map(int, input().split())
    cont = 0
    if a == 0 and b == 0:
        break
    while a > 0:
        n = int(input())
        cont = cont+n
        a = a-1
    friends =  cont//b
    print(f'Bill #{case + 1} costs {cont}: each friend should pay {friends}')
    case = case+1
    print()
