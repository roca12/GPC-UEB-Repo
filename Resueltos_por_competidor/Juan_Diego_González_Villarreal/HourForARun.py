import math
dat = list(map(int, input().split()))
tot = (dat[0]*dat[1])/10
res = []
for i in range(1,10):
    x = tot*i
    res.append(str(math.ceil(x)))
print(' '.join(res))