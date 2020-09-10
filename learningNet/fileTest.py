def fileWrite():
    fp = open("test.txt", "w")
    print(fp.tell())
    fp.write("abcdefbbg")
    fp.close()

def fileRead():
    fp = open("test.txt", "r")
    # rd = fp.read()
    rd = fp.read(3)
    # fp.close()
    print(rd)
    while True:
        rd = fp.read(3)
        if rd == None:
            break;
        if not rd:
            break;
        rd = fp.readline()
        rd = fp.readlines()  #개행단위로 읽어서 list에 저장
        for r in fp:
            print(r)

fileWrite()
fileRead()