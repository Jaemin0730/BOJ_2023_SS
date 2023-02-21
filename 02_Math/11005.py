s = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
n, k = map(int, input().split())
sol = ''

while n != 0:
    sol += str(s[n % k])
    n //= k

print(sol[::-1])