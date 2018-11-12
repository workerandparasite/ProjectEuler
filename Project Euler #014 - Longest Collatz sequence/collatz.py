
default = -1

values = dict()

def collatz(n):
    #print(n)

    if (values.get(n, default) != default):
        return values[n]
    else:
        if n == 1:
            return 1
        else:
            if n % 2 == 0:
                v = 1 + collatz(n//2)
                values[n] = v
                return v
            else:
                v = 1 + collatz((3*n)+1)
                values[n] = v
                return v


for _ in range(int(input())):
    n = int(input())
    l = []
    mx = -1
    idx = -1
    
    for i in range(1,n+1):
        x,y = i, collatz(i)
        if y >= mx:
            idx = x
            mx = y
        l.append((x,y))
    #print(l)



    print(idx)

