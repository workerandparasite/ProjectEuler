
def collatz(n):
    #print(n)
    if n == 1:
        return 1
    else:
        if n % 2 == 0:
            return 1 + collatz(n//2)
        else:
            return 1 + collatz((3*n)+1)


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

