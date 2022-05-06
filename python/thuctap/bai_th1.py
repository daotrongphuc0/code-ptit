import stat


class INT:
    def __init__(self,data,next =None) :
        self.data = data
        self.next = next
class LinkedList:
    def __init__(self) :
        self.head=None
    def insert(self,data):
        newINT = INT(data)
        if self.head == None:
            self.head   = newINT
        else:
            tmp = self.head
            while(tmp.next != None):
                tmp = tmp.next
            tmp.next = newINT
    def print(self):
        tmp = self.head
        kq = ""
        while(tmp):
            kq +=str(tmp.data) +" "
            tmp = tmp.next
        print(kq)
    #1
    def addToHead(self,data): 
        data = INT(data)
        tmp = self.head
        self.head =data
        data.next = tmp
    #2
    def addToTail(self,data):
        self.insert(data)
    #3
    def addAfter(self,phantu,data):
        data = INT(data)
        tmp = self.head
        while(tmp.next != None):
            if tmp.data == phantu:
                x = tmp.next
                tmp.next = data
                data.next = x
                break
            tmp = tmp.next
    #4
    def traverse(self):
        self.print()
    #5
    def deleteFromHead(self):
        tmp =self.head
        self.head = tmp.next
        return tmp.data
    #6
    def deleteFromTail(self):
        tmp = self.head
        phantutruoc = tmp
        while(tmp.next != None):
            phantutruoc = tmp
            tmp = tmp.next
        kq = tmp
        phantutruoc.next =None
        return kq.data
    #7
    def deleteAter(self,p):
        tmp = self.head
        while(tmp.next != None):
            if tmp.data == p:
                x = tmp.next
                tmp.next= x.next
                return x.data
            tmp = tmp.next
    #8
    def dele(self,x):
        tmp = self.head
        if tmp.data ==x:
            self.deleteFromHead()
        elif tmp ==None :
            return
        else:
            phantutruoc = tmp
            while(tmp.next != None):
                if(tmp.data == x) :
                    phantutruoc.next = tmp.next
                    return
                phantutruoc= tmp
                tmp = tmp.next
    #9
    def search(self,x):
        tmp = self.head
        while(tmp.next != None):
            if tmp.data == x:
                return x.data
            tmp = tmp.next
        return None
    #10
    def count(self):
        dem =0
        tmp = self.head
        if tmp!= None :
            dem =1
        while(tmp.next != None):
            dem +=1
            tmp = tmp.next
        return dem
    #11
    def deleteNumberAt(self,i):
        dem = 0
        tmp = self.head
        if tmp != None:
            dem = 1
        if(i==0) :
            self.head= self.next
        phantutrc = tmp
        while(tmp.next != None and dem < i-1):
            phantutrc = tmp
            dem += 1
            tmp = tmp.next
        if(dem == i-1) :
            phantutrc.next = tmp.next
    #12
    def partion(self, start, end):
        if(start == None or start == end or end == None):
            return start
        pivot_pre = start
        cur = start
        pivot = end.data
        while(start != end):
            if (start.data < pivot):
                pivot_pre = cur

                #swap
                h = cur.data
                cur.data = start.data
                start.data = h

                cur = cur.next
            start = start.next
        h = cur.data
        cur.data = end.data
        end.data = h

        return pivot_pre

    def sort(self, start, end):
        if(start == None or start == end or start == end.next):
            return

        pivot_pre = self.partion(start, end)
        #chia 2 phần để tiếp tục
        self.sort(start, pivot_pre)
        if pivot_pre != None and pivot_pre == start:
            self.sort(pivot_pre.next, end)
        elif (pivot_pre != None and pivot_pre.next != None):
            self.sort(pivot_pre.next.next, end)
    #13

    def xoagiatri(self, p):
        tmp= self.head
        dem =0
        while( tmp.next != None):
            if tmp.data == p:
                self.deleteNumberAt(dem)
            dem+=1
            tmp=tmp.next
    #14
    def toArray(self):
        tmp = self.head
        kq = ""
        while(tmp):
            kq += str(tmp.data) + " "
            tmp = tmp.next
        return kq
    

    # cau 17
    @staticmethod
    def noi(ll1,ll2):
        kq = ll1
        if ll1.head == None:
            kq.head= ll2.head
        else:
            kq.head =ll1.head
            tmp = ll1.head
            while(tmp.next != None):
                tmp = tmp.next
            tmp.next = ll2.head
        return kq
    #16
    def addBefore(self,p,x):
        tmp = self.head
        phantutrc =tmp
        newINT = INT(x)
        if p == tmp.data:
            self.head = INT(x)
            self.head.next=tmp
        else:
            phantutrc = tmp
            while(tmp.next != None and tmp.data!=p):
                tmp = tmp.next
            if tmp.data==p:
                phantutrc.next= newINT
                newINT.next = tmp

   
   

ll=LinkedList()
ll.insert(1)
ll.insert(2)
ll.insert(3)
ll.insert(0)
ll.xoagiatri(2)
ll.print()