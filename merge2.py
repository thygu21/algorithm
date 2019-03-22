import random
a=[random.randint(0,50) for k in range(25)]

def mergesort(a):
    if len(a) <= 1:
        return a

    mid = len(a)//2

    left = mergesort(a[:mid])
    right = mergesort(a[mid:])
    i, j = 0, 0
    sorted = []
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            sorted.append(left[i])
            i += 1
        else:
            sorted.append(right[j])
            j += 1
    
    while j < len(right):
        sorted.append(right[j])
        j += 1
    while i < len(left):
        sorted.append(left[i])
        i += 1
    return sorted

print(mergesort(a))
