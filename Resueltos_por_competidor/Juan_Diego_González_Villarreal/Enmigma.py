import sys
input = sys.stdin.readline
num = int(input())
tot = []
for i in range(num):
    data = list(map(int, input().split()))
    tot.append(data)

if tot[0][0] < tot[0][1] and tot[0][0] < tot[1][0]:
    print(0)
elif tot[0][0] > tot[0][1] and tot[0][0] < tot[1][0]:
    print(1)
elif tot[0][0] > tot[0][1] and tot[0][0] > tot[1][0]:
    print(2)
elif tot[0][0] < tot[0][1] and tot[0][0] > tot[1][0]:
    print(3)

