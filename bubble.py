import random
a=[random.randint(0,100) for k in range(20)]

for i in range(len(a)):
    for j in range(len(a)-1):
        if(a[j] > a[j+1]):
            a[j], a[j+1] = a[j+1], a[j]


print(a)    