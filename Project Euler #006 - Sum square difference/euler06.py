import math
import functools

T = input()

N = []

for x in range(0,int(T)):
    N.append(int(input()))

for x in N:
    #print((functools.reduce(lambda x, y: x+y, range(1,x+1)))**2)
    s1 = (functools.reduce(lambda x, y: x+y, range(1,x+1))**2) 
    s2 = functools.reduce(lambda x, y: x+y, [x**2 for x in range(1,x+1)])
    print(s1-s2)