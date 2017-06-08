limit = 200000

def primes_sieve(n):
    not_prime = set()
    prime = []
    for i in range(2, n+1):
        if i not in not_prime:
            prime.append(i)
            for j in range(i*i, n+1, i):
                not_prime.add(j)
    return prime
    
T = input()
N = []
for x in range(0,int(T)):
    N.append(int(input()))   
prime = primes_sieve(limit)
for x in N:
    print(prime[x-1])
