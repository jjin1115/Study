from operator import itemgetter

data_list=[]

def fileRead():
    fp = open("data.txt", "r", encoding='utf-8')
    for line in fp.readlines():
        item = line.split(',')
        data_list.append({'name':item[0], 'quantity':item[1], 'p_date':item[2], 'stock':item[3].rstrip()})
    fp.close()

def bye():
    exitprogram = input("프로그램을 종료하시겠습니까(y/n)")
    if(exitprogram =='y'):
        exit()

def printCol():
    print("---------------------------------------------------")
    print("%5s\t%7s\t%10s\t%5s"%("장비명","수량","생산일","재고여부"))
    print("---------------------------------------------------")

def printItem(n):
    print("%(name)-10s %(quantity)5s %(p_date)20s %(stock)5s" % n)

def inputData():
    while True:
        name =input("장비명:")
        quantity = input("수량:")
        p_date = input("생산일(예:1990-01-01):")
        stock = input("재고여부(예:y or n):")
        data_list.append({'name': name, 'quantity': quantity, 'p_date': p_date, 'stock': stock})
        exitinput = input("계속입력하시겠습니까(y/n)?")
        if(exitinput == 'n'):
            break

def outputData():
    printCol()
    for n in data_list:
        printItem(n)

def modifyData():
    modify_name = input("수정할 장비명을 입력하세요:")
    count=0
    index=0
    for item in data_list:
        if item.get('name') == modify_name:
            count+=1
            break;
        index+=1;
    if count == 0:
        print("데이터가 없습니다.")
    else:
        name = input("장비명("+(data_list[index].get('name'))+"):")
        quantity = input("수량("+(data_list[index].get('quantity'))+"):")
        p_date = input("생산일("+(data_list[index].get('p_date'))+"):")
        stock = input("재고여부("+(data_list[index].get('stock'))+"):")

        data_list[index] = {'name': name, 'quantity': quantity, 'p_date': p_date, 'stock': stock}


def searchData():
    count=0;
    name = input("검색할 장비명을 입력하세요:")
    printCol()
    for item in data_list:
        if item.get('name') == name:
            printItem(item)
            count+=1
    if count == 0:
        print("검색된 장비가 없습니다.")

def deleteData():
    count=0
    index=0
    name = input("삭제할 장비명을 입력하세요:")
    for item in data_list:
        if item.get('name') == name:
            count+=1
            del data_list[index]
            break
        index+=1
    if count == 0:
        print("데이터가 없습니다.")
    print(data_list)

def sortData():
    data_list.sort(key=itemgetter('name'))
    printCol()
    for item in data_list:
        printItem(item)

def saveData():
    fp = open("data.txt", "w", encoding="utf-8")
    for item in data_list:
        fp.write("%(name)s,%(quantity)s,%(p_date)s,%(stock)s\n"%item)
    print("저장하였습니다.")


d = {1:inputData, 2:outputData, 3:modifyData, 4:searchData, 5:deleteData, 6:sortData, 7:saveData, 8:bye}
fileRead()

while True:
    menu = int(input("1.입력\n2.출력\n3.수정\n4.검색\n5.삭제\n6.정렬\n7.저장\n8.종료\n메뉴를 선택하시오:"))
    d[menu]()
    print('\n')

