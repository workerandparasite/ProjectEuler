def sum_primes_sieve():
    a = [0]*1000008
    for i in range(2,1000000):
        if (a[i] == 1):
            continue
        for j in range(i*i,1000000,i):
            a[j] = 1
    primes = []
    _sum = [0]*1000008
    cnt = 0
    for i in range(2,1000000):
        if a[i] == 0:
            primes.append(i)
            _sum[i] = _sum[i-1]+i
        else:
            _sum[i] = _sum[i-1]
    return primes, _sum

primes, _sum = sum_primes_sieve()
for x in range(int(input())):
    n = int(input())
    print(_sum[n])
