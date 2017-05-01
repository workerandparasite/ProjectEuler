
def primes(n):
    primfac = []
    d = 2
    while d*d <= n:
        while (n % d) == 0:
            primfac.append(d)  # supposing you want multiple factors repeated
            n //= d
        d += 1
    if n > 1:
       primfac.append(n)
    return primfac

def input_parser():
    
    input_values = []
    
    try:
        T = int(input())
    except ValueError:
        print ('Invalid number.')
        exit(-1)  
        
    if (T > 10 or T < 1):
        print ('T value should be between 1 and 10.')
        exit(-1)

    for i in range(0,T):    
        try:
            input_values.append(int(input()))
        except ValueError:
            print ('Invalid number.')
            exit(-1)
        except EOFError:
            print ('Invalid number of parameters.')
            exit(-1)    
            
    for x in input_values:
        if (x > 10**12 or x < 10):
            print ('N value should be between 10 and 10^12.')
            exit(-1)

    return input_values
            
if __name__ == "__main__":
    test_cases = input_parser()   
    for x in test_cases:
        v = int(x)
        print(max(primes(v)))