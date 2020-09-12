def is_leap(year):
    leap = False

    # Write your logic here
    if (year % 4 == 0 and year % 100 != 0) or year % 400 == 0:
        leap = True

    return leap


year = int(input())
print(is_leap(year))

# print function
n = int(input())
j = ""
for i in range(n):
    j = j + str(i + 1)

print(j)