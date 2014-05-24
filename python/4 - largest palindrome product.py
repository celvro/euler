from util import palindrome

print max([i*j for i in range(100, 1000) for j in range(100, 1000) if palindrome(i*j)])