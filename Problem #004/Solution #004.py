def input_parser():
    
    input_values = []
    
    try:
        T = int(input())
    except ValueError:
        print ('Invalid number.')
        exit(-1)  
        
    if (T > 100 or T < 1):
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
            
    for N in input_values:
        if (N >= 1000000 or N <= 101101):
            print ('N value should be between 10 and 10^12.')
            exit(-1)

    return input_values

if __name__ == "__main__":
    test_cases = input_parser()   
    for x in test_cases:
        N = int(x)
        largest_palin = 0
        for i in range(100,999):
            for j in range(100,999):
                eval = i*j
                word = '{:06d}'.format(eval)
                if (word[0:3] == word[3:][::-1]) and (eval < N) and (eval > largest_palin):
                    palindrome = word
                    largest_palin = eval
                    
        print(palindrome)
