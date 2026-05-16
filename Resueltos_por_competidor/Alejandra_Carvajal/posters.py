# Autor: Alejandra Carvajal
# Problema: KTH Challenge Posters
# Juez online: BOCA
# Veredicto: Accepted
# URL: rpc4

p, h, t = map(int, input().split())

if h >= p:
    c = (t-p)//h
    print(max(0,c))
elif h < p:
    c = (t-h)//p
    print(max(0,c))
