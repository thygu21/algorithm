a = int(input())
mog = a // 14
remain = a % 14

if remain == 1 or remain == 13:
    print("baby")
elif remain == 2 or remain == 0:
    print("sukhwan")
elif remain == 5:
    print("very")
elif remain == 6:
    print("cute")
elif remain == 9:
    print("in")
elif remain == 10:
    print("bed")
else:
    if remain % 4 == 3:
        if mog > 2:
            print("tu+ru*" + str(mog+2))
        else:
            print("tururu" + "ru"*mog)
    else:
        if mog > 3:
            print("tu+ru*" + str(mog+1))
        else:
            print("turu" + "ru"*mog)
    
