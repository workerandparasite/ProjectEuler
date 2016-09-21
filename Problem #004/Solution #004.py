

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
            
    for x in input_values:
        if (x > 1000000 or x < 101101):
            print ('N value should be between 10 and 10^12.')
            exit(-1)

    return input_values

if __name__ == "__main__":
    test_cases = input_parser()   
    for x in test_cases:
        v = int(x)
		for i in range(1,999):
           for j in range(1,999):
		      pass