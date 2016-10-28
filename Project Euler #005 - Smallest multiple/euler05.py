import math

T = input()

N = []

for x in range(0,int(T)):
    N.append(int(input()))

for x in N:
    #print(x)
    #print(math.factorial(x))
    #M=[r for r in range(x,math.factorial(x))]
    s = min([r for r in range(x,math.factorial(x)+1) if all(r % j == 0 for j in range(1,x+1))])

    #l = [r for r in range(x, math.factorial(x)) ]
    print(s)
   