a = int(input())

cout = 10
for i in range(2, 11):
    if a < int('1'*i):
        cout -= 1
print(cout)
