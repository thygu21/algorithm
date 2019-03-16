cnt = int(input())
data = []
for i in range(cnt):
    value = int(input())
    data.append(value)

data.sort()
for i in data:
    print(i)