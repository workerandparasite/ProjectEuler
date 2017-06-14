for x in range(int(input())):
    x = int(input())
    s1 = sum(range(1,x+1))**2
    s2 = ((x)*(x+1)*(2*x+1))//6
    print(s1-s2)