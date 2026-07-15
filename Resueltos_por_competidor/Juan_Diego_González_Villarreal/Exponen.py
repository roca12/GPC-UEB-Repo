import math
n = int(input())
for _ in range(n):
    ins = input().split(" ")
    a = int(ins[0])
    b = int(ins[1])
    print(pow(a,b,1000000007))
    