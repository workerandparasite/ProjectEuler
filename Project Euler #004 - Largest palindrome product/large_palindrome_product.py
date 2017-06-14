for x in range(0, int(input())):
    n = int(input())
    largest_palin = 0
    for i in range(999,99,-1):
        for j in range(999,i-1,-1):
            eval = i*j
            if (eval > n):
                continue
            if (eval <= largest_palin):
                break
            word = '{:06d}'.format(eval)
            if (word[0:3] == word[3:][::-1]) and (eval < n) and (eval > largest_palin):
                palindrome = word
                largest_palin = eval
                
    print(palindrome)