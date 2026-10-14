class fivedivisionerror(Exception):
    pass
l=[1, 2, 3, 4,5 ,6 ,7, 8, 9, 10]
for i in l:
    if i%5==0:
        try:
            raise fivedivisionerror("the number is divided by 5")
        except fivedivisionerror:
            print("block of fivedivisionerror")
    else:
        print("no problem")
