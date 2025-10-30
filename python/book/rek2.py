def mas(n):
    if n == 0:
        return 0
    if n%2==0:
        a += mas(n)
        return a 
    
a = 10
print(mas(a))