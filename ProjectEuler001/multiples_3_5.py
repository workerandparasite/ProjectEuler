n = input()
numbers = []

for x in range (0, int(n)):
    numbers.append(int(input()))

for x in numbers:
    three=(x-1)//3;
    five=(x-1)//5;
    fifteen=(x-1)//15;
    print(3*(three*(three+1)//2)+5*(five*(five+1)//2)-15*(fifteen*(fifteen+1)//2))