def sum_primes_sieve(_max = 1000000):
    a = [0]*_max
    for i in range(2,_max):
        if (a[i] == 1):
            continue
        for j in range(i*i,_max,i):
            a[j] = 1
    _sum = [0]*_max
    for i in range(2,_max):
        if a[i] == 0:
            _sum[i] = _sum[i-1]+i
        else:
            _sum[i] = _sum[i-1]
    return _sum

_sum = sum_primes_sieve()
for _ in range(int(input())):
    print(_sum[int(input())])
