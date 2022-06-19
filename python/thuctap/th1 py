from xml.sax import xmlreader


class INT:
    def __init__(self, data):
        self.data = data
        self.next = None


class Linked_list:
    def __init__(self):
        self.head = None

    def insert(self, data):
        newINT = INT(data)
        if self.head == None:
            self.head = newINT
        else:
            tmp = self.head
            while(tmp.next != None):
                tmp = tmp.next
            tmp.next = newINT

    def print(self):
        tmp = self.head
        kq = ""
        while(tmp):
            kq += str(tmp.data) + " "
            tmp = tmp.next
        print(kq)
    #1

    def addToHead(self, data):
        data = INT(data)
        tmp = self.head
        self.head = data
        data.next = tmp
    #2

    def addToTail(self, data):
        self.insert(data)
    #3

    def addAfter(self, phantu, data):
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
        tmp = self.head
        kq = ""
        while(tmp):
            kq += str(tmp.data) + " "
            tmp = tmp.next
        return kq.rstrip()
    #5

    def xoaphantuFromHead(self):
        tmp = self.head
        self.head = tmp.next
        return tmp.data
    #6

    def xoaphantuFromTail(self):
        tmp = self.head
        phantutruoc = tmp
        while(tmp.next != None):
            phantutruoc = tmp
            tmp = tmp.next
        kq = tmp
        phantutruoc.next = None
        return kq.data
    #7

    def xoaphantuAfter(self, p):
        tmp = self.head
        while(tmp.next != None):
            if tmp.data == p:
                x = tmp.next
                tmp.next = x.next
                return x.data
            tmp = tmp.next
    #8

    def dele(self, x):
        tmp = self.head
        if tmp.data == x:
            self.xoaphantuFromHead()
        elif tmp == None:
            return
        else:
            phantutruoc = tmp
            while(tmp.next != None):
                if(tmp.data == x):
                    phantutruoc.next = tmp.next
                    return
                phantutruoc = tmp
                tmp = tmp.next
    #9

    def search(self, x):
        tmp = self.head
        while(tmp.next != None):
            if tmp.data == x:
                return x
            tmp = tmp.next
        return None
    #10

    def count(self):
        dem = 0
        tmp = self.head
        if tmp != None:
            dem = 1
        while(tmp.next != None):
            dem += 1
            tmp = tmp.next
        return dem
    #11

    def deleteNumberAt(self, i):
        dem = 0
        tmp = self.head
        if tmp != None:
            dem = 1
        if(i == 0):
            self.head = self.next
        phantutrc = tmp
        while(tmp.next != None and dem < i):
            phantutrc = tmp
            dem += 1
            tmp = tmp.next
        if(dem == i):
            phantutrc.next = tmp.next
    #12 

    def cat(self, start, end):
        if(start == None or start == end or end == None):
            return start
        x = start
        tmp = start
        y = end.data
        while(start != end):
            if (start.data < y):
                x = tmp
                h = tmp.data
                tmp.data = start.data
                start.data = h
                tmp = tmp.next
            start = start.next
        h = tmp.data
        tmp.data = end.data
        end.data = h

        return x

    def sort(self, start, end):
        if(start == None or start == end or start == end.next):
            return
        x = self.cat(start, end)
        self.sort(start, x)
        if x != None and x == start:
            self.sort(x.next, end)
        elif (x != None and x.next != None):
            self.sort(x.next.next, end)
    #13

    def xoaphantu(self, p):
        tmp = self.head

        if tmp.data == p:
            self.head=tmp.next
        phantutruoc = tmp
        while(tmp.next != None):
            if tmp.data == p:
                phantutruoc.next = tmp.next  
            phantutruoc = tmp
            tmp = tmp.next
    #14

    def toArray(self):
        tmp = self.head
        kq = ""
        while(tmp):
            kq += str(tmp.data) + " "
            tmp = tmp.next
        print(kq)
    
    #16

    def addBefore(self, gtri, vitri):
        newINT =INT(gtri)
        tmp = self.head
        while tmp.next!= None:
            p =tmp.next
            if p.data ==vitri:
                tmp.next=newINT
                newINT.next=p
            tmp=tmp.next
    #17
    def noi(self, ll2):
        kq = self
        if self.head == None:
            kq.head = ll2.head
        else:
            kq.head = self.head
            tmp = self.head
            while(tmp.next != None):
                tmp = tmp.next
            tmp.next = ll2.head
        return kq
    #15

    def merge(self, ll1):
        self.noi(ll1)
        start = ll.head
        end = ll.head
        while end.next is not None:
            end = end.next
        ll.sort(start, end)
    #18

    def max(self):
        tmp = self.head
        max = -10000000
        while tmp.next != None:
            if tmp.data > max:
                max =tmp.data
            tmp=tmp.next
        return max
    #19

    def min(self):
        tmp = self.head
        min = 10000000
        while tmp!= None:
            if tmp.data < min:
                min = tmp.data
            tmp = tmp.next
        return min
    #20

    def sum(self):
        tmp = self.head
        sum=0
        while tmp != None:
            sum += tmp.data
            tmp = tmp.next
        return sum
    #21

    def avg(self):
        return int(self.sum())/int(self.count())
    #22

    def sorte(self):
        h = self.head
        kt = h.data
        chec = 'true'
        h = h.next
        while h:
            if kt > h.data:
                chec = 'false'
                break
            kt = h.data
            h = h.next
        return chec
    #23

    def insertAndSort(self, x):
        self.insert(x)
        start = ll.head
        end = ll.head
        while end.next is not None:
            end = end.next
        self.sort(start, end)    
    #24

    def reverse(self):
        h = self.head
        pre = None
        while h:
            lien_ket = h.next
            h.next = pre
            pre = h
            h = lien_ket
        self.head = pre
    #25

    def check(self, sll):
        arr1 = []
        arr2 = []
        h1 = self.head
        h2 = self.head
        while h1:
            arr1.append(h1.data)
            h1 = h1.next
        while h2:
            arr2.append(h2.data)
            h2 = h2.next
        if len(arr1) == len(arr2):
            for i in arr1:
                if i in arr2:
                    arr2.remove(i)
        if len(arr2) == 0:
            return 'yes'
        return 'no'

def nhaplist():
    ll = Linked_list()
    a= input()
    a= a.split(" ")
    for i in a:
        ll.insert(int(i))
    return ll

zzzz= input()
t = int(input())
if t ==1:
    n = int(input())
    ll = nhaplist()
    x = int(input())
    print(f'1. Add {x} before the head of {n}-element list: {ll.traverse()}')
    ll.addToHead(x)
    print(ll.traverse())
elif t==2:
    n = int(input())
    ll = nhaplist()
    x = int(input())
    print(f'2. Add {x} after the tail of {n}-element list: {ll.traverse()}')
    ll.addToTail(x)
    print(ll.traverse())
elif t==3:
    n = int(input())
    ll = nhaplist()
    x = input()
    x= x.split(" ")
    x1 =int(x[0])
    x2 =int(x[1])
    print(
        f'3. Insert an element {x2} after the element {x1} in the {n}-element list {ll.traverse()}')
    ll.addAfter(x1,x2)
    print(ll.traverse())
elif t == 4:
    n = int(input())
    ll = nhaplist()
    print(f'4. Traverse the {n}-element list: {ll.traverse()}')
    print(ll.traverse())
elif t==5:
    n = int(input())
    ll = nhaplist()
    print(f'5. Delete the head of the {n}-element list: {ll.traverse()}')
    ll.xoaphantuFromHead()
    print(ll.traverse())
elif t == 6:
    n = int(input())
    ll = nhaplist()
    print(f'6. Delete the tail of the {n}-element list: {ll.traverse()}')
    ll.xoaphantuFromTail()
    print(ll.traverse())
elif t ==7:
    n = int(input())
    ll = nhaplist()
    x = int(input())
    print(
        f'7. Delete the element after the element {x} of the {n}-element list: {ll.traverse()}')
    ll.xoaphantuAfter(x)
    print(ll.traverse())
elif t == 8:
    n = int(input())
    ll = nhaplist()
    x = int(input())
    print(f'8. Delete the element {x} in the {n}-element list: {ll.traverse()}')
    ll.dele(x)
    print(ll.traverse())
elif t == 9:
    n = int(input())
    ll = nhaplist()
    x = int(input())
    print(f'9. Search the element {x} in the {n}-element list: {ll.traverse()}')
    print(ll.search(x))
elif t == 10:
    n = int(input())
    ll = nhaplist()
    print(
        f'10. Count the number of the elements of the {n}-element list: {ll.traverse()}')
    print(ll.count())
elif t ==11:
    n = int(input())
    ll = nhaplist()
    x = int(input())
    print(
        f'11. Delete the {x}rd element in the {n}-node list: {ll.traverse()}')
    ll.deleteNumberAt(x)
    print(ll.traverse())
elif t == 12:
    n = int(input())
    ll = nhaplist()
    print(f'12. Sort in accending order the {n}-node list: {ll.traverse()}')
    start = ll.head
    end = ll.head
    while end.next is not None:
        end = end.next
    ll.sort(start, end)
    print(ll.traverse())
elif t == 13:
    n = int(input())
    ll = nhaplist()
    x = int(input())
    print(f'13. Delete the element {x} in the {n}-node list: {ll.traverse()}')
    ll.xoaphantu(x)
    print(ll.traverse())
elif t == 14:
    n = int(input())
    ll = nhaplist()
    print(
        f'14. create and return array containing info of all nodes in the {n}-node list.')
    ll.toArray()
elif t == 15:
    n = int(input())
    ll = nhaplist()
    n1 = int(input())
    ll1 = nhaplist()
    print(
        f'15. Merge two ordered singly linked lists of integers into one ordered list: {n}-node list = {ll.traverse()}; {n1}-node list: {ll1.traverse()}')
    ll.merge(ll1)
    print(ll.traverse())
elif t==16:
    n = int(input())
    ll = nhaplist()
    x = input()
    x= x.split(" ")
    x1 =int(x[0])
    x2 =int(x[1])
    print(
    f'16. add a node with value {x1} before the node {x2} in the {n}-node list: {ll.traverse()}.')
    ll.addBefore(x1,x2)
    print(ll.traverse())
elif t == 17:
    n = int(input())
    ll = nhaplist()
    n1 = int(input())
    ll1 = nhaplist()
    print(
        f'17. Attach a singly linked list of {n1} elements {ll1.traverse()} to the end of another singly linked list of {n} nodes: {ll.traverse()}')
    ll.noi(ll1)
    print(ll.traverse())
elif t == 18:
    n = int(input())
    ll = nhaplist()
    print(
        f'18. find and return the maximum value in the {n}-node list: {ll.traverse()}')
    print(ll.max())
elif t == 19:
    n = int(input())
    ll = nhaplist()
    print(
        f'19. find and return the minimum value in the {n}-node list: {ll.traverse()}')
    print(ll.min())
elif t == 20:
    n = int(input())
    ll = nhaplist()
    print(
        f'20. return the sum of all values in the {n}-node list: {ll.traverse()}')
    print(ll.sum())
elif t == 21:
    n = int(input())
    ll = nhaplist()
    print(
        f'21. return the average of all values in the {n}-node list: {ll.traverse()}')
    print('%.2f' % ll.avg())
elif t == 22:
    n = int(input())
    ll = nhaplist()
    print(
        f'22. check and return true if the {n}-node list {ll.traverse()} is sorted, return false if the list is not sorted.')
    print(ll.sorte())
elif t == 23:
    n = int(input())
    ll = nhaplist()
    x = int(input())
    print(
        f'23. sort the {n}-node list: {ll.traverse()} then insert a node with value {x} into the sorted list so that the new list is a sorted list')
    start = ll.head
    end = ll.head
    while end.next is not None:
        end = end.next
    ll.sort(start, end)
    print(ll.traverse())
    ll.insertAndSort(x)
    print(ll.traverse())
elif t == 24:
    n = int(input())
    ll = nhaplist()
    
    print(f'24. Reverse the singly linked list of {n} nodes: {ll.traverse()}')
    ll.reverse()
    print(ll.traverse())
elif t == 25:
    n = int(input())
    ll = nhaplist()
    n1 = int(input())
    ll1 = nhaplist()
    print(
        f'25. Check whether two singly linked list have the same contents: 1st list of {n} elements: {ll.traverse()}; 2nd list of {n} elements: {ll1.traverse()}')
    print(ll.check(ll1))
