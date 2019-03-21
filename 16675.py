a = input().split()
if a[0] == a[1] or a[2] == a[3]:
    if a[0] == a[1] and a[2] == a[3]: 
        if a[0] == a[2] and a[1] == a[3]:
            print("?")
        elif a[0] == "R" and a[2] == "S":
            print("MS")
        elif a[0] == "R" and a[2] == "P":
            print("TK")        
        elif a[0] == "P" and a[2] == "R":
            print("MS")
        elif a[0] == "P" and a[2] == "S":
            print("TK")        
        elif a[0] == "S" and a[2] == "P":
            print("MS")
        elif a[0] == "S" and a[2] == "R":
            print("TK")        
    elif a[0] == a[1]:
        if a[0] == "R" and (a[2] == "P" or a[3] == "P"):
            print("TK")
        elif a[0] == "S" and (a[2] == "R" or a[3] == "R"):
            print("TK")
        elif a[0] == "P" and (a[2] == "S" or a[3] == "S"):
            print("TK")
        else:
            print("?")
    elif a[2] == a[3]:
        if a[2] == "R" and (a[0] == "P" or a[1] == "P"):
            print("MS")
        elif a[2] == "S" and (a[0] == "R" or a[1] == "R"):
            print("MS")
        elif a[2] == "P" and (a[0] == "S" or a[1] == "S"):
            print("MS")
        else:
            print("?")

else:
    print("?")
