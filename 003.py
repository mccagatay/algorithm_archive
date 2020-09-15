"""
Problem:
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?

"""


def primeFactors(number):
    large_factor = 2
    for i in range(2, number):
        prime = True
        for j in range(2, i):
            if i % j == 0:
                prime = False
        if prime:
            if large_factor < i:
                large_factor = i
    return large_factor


number = 600851475143

if __name__ == '__main__':
    print(str(primeFactors(number)))
