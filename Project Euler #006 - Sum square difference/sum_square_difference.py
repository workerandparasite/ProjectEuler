T = input()

N = []

for x in range(0,int(T)):
    N.append(int(input()))

for x in N:
    s1 = sum(range(1,x+1))**2
    s2 = ((x)*(x+1)*(2*x+1))//6
    print(s1-s2)
    