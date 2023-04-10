k = int(input())
t = 2 ** k - 1
sol = t * (t + 1) // 2
print(bin(sol)[2:])