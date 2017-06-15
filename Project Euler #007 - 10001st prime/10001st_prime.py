limit = 120000

def primes_sieve(n):
    not_prime = set()
    prime = []
    for i in range(2, n+1):
        if i not in not_prime:
            prime.append(i)
            for j in range(i*i, n+1, i):
                not_prime.add(j)
    return prime  

prime = primes_sieve(limit)
for x in range(int(input())):
    print(prime[int(input())-1])    

