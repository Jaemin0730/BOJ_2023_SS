n, k = map(int, input().split())
a = list(map(int, input().split(',')))
for _ in range(k):
    b = []
    for i in range(1, len(a)):
        b.append(a[i] - a[i-1])
    a = b
print(*a, sep = ',')