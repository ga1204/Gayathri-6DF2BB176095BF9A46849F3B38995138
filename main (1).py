def factorial(n):
    # Base case: If n is 0 or 1, the factorial is 1.
    if n == 0 or n == 1:
        return 1
    # Recursive case: Compute factorial(n) by multiplying n with factorial(n-1).
    else:
        return n * factorial(n - 1)

# Test the function with an example:
num = 5
result = factorial(num)
print(f"The factorial of {num} is {result}")