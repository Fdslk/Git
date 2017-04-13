def square_of_sum(L):
    sum = 0
    for x in L:
        sum = sum + x * x
    return sum

print square_of_sum([1, 2, 3, 4, 5])
print square_of_sum([-5, 0, 5, 15, 25])
