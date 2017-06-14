from _functools import reduce

def _gcd(x,y):
    while y!=0:
        x,y=y,x%y
    return x

for _ in range(int(input())):
    n = int(input())
    print(int(reduce(lambda x,y: x*y/_gcd(x,y), range(1,n+1))))
   