import sys

data = sys.stdin.read().split()
out = []
for i in range(0, len(data), 2):
    n, k = int(data[i]), int(data[i + 1])
    if n == 0 and k == 0:
        break
    k2 = min(k, n - k)
    num = 1
    for j in range(n, n - k2, -1):
        num *= j
    den = 1
    for j in range(2, k2 + 1):
        den *= j
    out.append(str(num // den))
print("\n".join(out))