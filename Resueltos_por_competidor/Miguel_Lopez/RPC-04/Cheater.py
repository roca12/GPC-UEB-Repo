n = int(input())
for _ in range(n):
    s = input()

    a = s.split(".")
    b = int(a[0])
    c = int(a[1])

    d = b * 100 + c

    e = d % 3

    if e == 0 or e == 1:
        print("VALID")
    else:
        print("IMPOSSIBLE")
