from util import palindrome

print sum(x for x in range(1,1000000) if palindrome(x) and palindrome(bin(x).lstrip('0b')))