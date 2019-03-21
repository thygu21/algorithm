def solution(numbers):
    answer, key = [], []
    lt = [i[0] for i in numbers]
    
    for i in range(len(lt)):
        answer.append(lt[i])
        temp = lt[i]
        for j in range(len(lt)):
            if i != j:
                temp += lt[j]
                answer.append(temp)
    
    answer = list(set(answer))
    answer = [int(i) for i in answer]
    print (answer)
    for i in answer:
        count = 0
        for j in range(1, i):
            if i % j == 0:
                count += 1
        if count == 1:
            key.append(i)
            
    return len(key)