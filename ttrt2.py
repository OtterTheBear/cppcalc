#! /usr/bin/python3
def ttrt(x, n):
    "Tetrates x to n"
    y = 1
    for i in range(n):
        y = x ** y
    return y

print(ttrt(2, 5))
