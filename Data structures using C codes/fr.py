def lat(w):
    li=['thi','thahan','thahanthi','si','thaha','tha','ami','Avaha','Amaha']
    f=0
    for i in range(len(w)):
        if(w[-1] in li):
            f=1
            break
    if(f==1):
        print("Yes")
    print("no")
sen=input("enter word")
print(lat(sen))