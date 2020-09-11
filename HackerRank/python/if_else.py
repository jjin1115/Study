# Say "Hello, World!" With Python
print("Hello, World!")

# if else
if __name__ == '__main__':
    n = int(input().strip())

    if n > 20 and (n % 2 == 0):
        print("Not Weird")

    elif n % 2 != 0:
        print('Weird')
    else:
        if n >= 2 and 5 >= n:
            print("Not Weird")
        else:
            print("Weird")

# arithmetic operation
    a = int(input())
    b = int(input())

    print(a+b)
    print(a-b)
    print(a*b)

# division
    a = int(input())
    b = int(input())

    print(a//b)
    print(a/b)

    #Loop
    n = int(input())
    for i in range(0,n):
        print(i*i)

