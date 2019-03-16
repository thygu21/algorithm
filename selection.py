import random
a=[random.randint(0,100) for k in range(20)]

for i in range(len(a)):
    index=i
    for j in range(i, len(a)):
        if(a[j] < a[index]):
            a[j], a[index] = a[index], a[j]


print(a)    