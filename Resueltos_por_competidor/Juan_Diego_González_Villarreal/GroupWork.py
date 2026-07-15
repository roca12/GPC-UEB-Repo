facts = [1]
for i in range(1,31):
    facts.append(facts[i-1]*i)

def comb(n,r):
    return facts[n]/(facts[r]*facts[n-r])

n = int(input())
ans=0
for i in range(2,n+1):
    ans+=comb(n,i)
print(int(ans))



