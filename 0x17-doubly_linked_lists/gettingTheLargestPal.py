def largest_palindrome_product(n):
    max_num = int('9' * n)
    min_num = int('1' + '0' * (n-1))
    largest_palindrome = 0
    
    for i in range(max_num, min_num-1, -1):
        for j in range(i, min_num-1, -1):
            product = i * j
            if product <= largest_palindrome:
                break
            if str(product) == str(product)[::-1]:
                largest_palindrome = product
    
    return largest_palindrome
 
print(largest_palindrome_product(3))