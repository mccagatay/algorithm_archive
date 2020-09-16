"""
Problem:
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
"""


def smallestMultiple(lower, upper):
    number = 1
    control = True

    while control:
        for i in range(lower, upper):
            if number % i != 0:
                control = False
        if not control:
            control = True
            number = number + 1
        else:
            control = False
    return number


lower_limit = 1
upper_limit = 20

if __name__ == '__main__':
    print(smallestMultiple(lower_limit, upper_limit))
