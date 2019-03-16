cnt = int(input())
a = []
for i in range(cnt):
    value = int(input())
    a.append(value)

def mergeSort(sorted):

    if len(sorted) <= 1:
        return sorted

    mid = len(sorted) // 2
    left = sorted[:mid]
    right = sorted[mid:]

    left1 = mergeSort(left)
    right1 = mergeSort(right)
    return merge(left1, right1)

def merge(left, right):
    i=0
    j=0
    so = []

while(i < len(left) and j < len(right)):
    if left[i] < right[j]:
        so.append(left[i])
        i += 1
    else:
        so.append(right[j])
        j += 1

while (i < len(left)):
    so.append(left[i])
    i += 1
while (j < len(right)):
    so.append(right[j])
    j += 1

return so

print(mergeSort(a))