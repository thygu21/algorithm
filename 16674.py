a = input()
if "3" not in a and "4" not in a and "5" not in a and "6" not in a and "7" not in a and "9" not in a:
    if "2" in a and "0" in a and "1" in a and "8" in a:
        c2, c0, c1, c8 = 0, 0, 0, 0
        for i in a:
            if i == "2":
                c2 += 1
            if i == "0":
                c0 += 1
            if i == "1":
                c1 += 1
            if i == "8":
                c8 += 1
        if c2 == c0 and c0 == c1 and c1 == c8:
            print(8)
        else:
            print(2)
    elif "2" in a or "0" in a or "1" in a or "8" in a:
        print(1)
else:
    print(0)
