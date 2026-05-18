# Autor: Alejandra Carvajal
# Problema: Redirect URL
# Juez online: LightOJ
# Veredicto: Accepted
# URL: https://lightoj.com/problem/redirect-url

n = int(input())
for i in range(1, n+1):
    L = input()
    url_old = "http"
    url_correct = "https"
    t, r = L.split(":")
    if url_old == t:
        print(f"Case {i}: {url_correct}:{r}")
    else:
        print(f"Case {i}: {L}")
