# Fibonacci's sequence generator
def fib():
    a, b = 1,2
    yield a
    yield b
    while True:
        a, b = b, a + b
        yield b    

for x in range (0, int(input())):
    k = int(input())   
    result = 0
    for x in fib():
        if x < k:
            if x % 2 == 0:
                result += x
        else:
            break
    print(result)
