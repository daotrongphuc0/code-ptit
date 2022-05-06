class Node:
    def __init__(self, data):
        self.data = data
        self.next = None


class Singly_linked_list:
    def __init__(self):
        self.head = None
    #1

    def addToHead(self, x):
        new_node = Node(x)
        new_node.next = self.head
        self.head = new_node
    #2

    def addToTail(self, x):
        new_node = Node(x)
        if self.head is None:
            self.head = new_node()
            return
        tail = self.head
        while (tail.next):
            tail = tail.next
        tail.next = new_node
    #3

    def addAfter(self, p, x):
        if p is None:
            return
        new_node = Node(x)
        new_node.next = p.next
        p.next = new_node
    #4

    def traverse(self):
        duyet = self.head
        while(duyet):
            print(duyet.data, end=" ")
            duyet = duyet.next
        print()
    #5

    def deleteFromHead(self):
        h = self.head
        if(h is not None):
            self.head = h.next
            h = None
    #6

    def deleteFromTail(self):
        h = self.head
        if(h is None):
            return
        if(h.next is None):
            self.head = None
            return
        while(h.next.next is not None):
            h = h.next
        tail = h.next
        h.next = None
        tail = None
    #7

    def deleteAfter(self, p):
        h = self.head
        if (h is None):
            return
        while(h != p):
            h = h.next
        need_delete = h.next
        h.next = need_delete.next
        need_delete = None
    #8

    def delet(self, x):
        h = self.head
        if(h is not None):
            if h.data == x:
                self.head = h.next
                h = None
                return
        abov = None
        while(h is not None):
            if h.data == x:
                break
            abov = h
            h = h.next
        if h == None:
            return
        abov.next = h.next
        h = None
    #9

    def search(self, x):
        h = self.head
        while(h is not None):
            if h.data == x:
                return h
            h = h.next
    #10

    def count(self):
        h = self.head
        count = 0
        while(h is not None):
            count += 1
            h = h.next
        return count
    #11

    def deleteTh(self, i):
        if self.count() < i:
            return
        h = self.head
        k = 1
        while k < i:
            above = h
            h = h.next
            k += 1
        above.next = h.next
        h = None
    #12 sort by qupsick sort

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

    def delete(self, p):
        h = self.head
        if h is not None:
            if(h == p):
                self.head = h.next
                h = None
                return
        while(h is not None):
            if h == p:
                break
            above = h
            h = h.next
        if (h == None):
            return
        above.next = h.next
        h = None
    #14

    def toArray(self):
        arr = []
        h = self.head
        while h:
            arr.append(h.data)
            h = h.next
        for i in arr:
            print(i, end=" ")
    #15

    def merge(self, sll):
        s = Node(0)
        tail = s
        hA = self.head
        hB = sll.head
        while True:
            if hA is None:
                tail.next = hB
                break
            if hB is None:
                tail.next = hA
                break
            if hA.data <= hB.data:
                tail.next = hA
                hA = hA.next
            else:
                tail.next = hB
                hB = hB.next
            tail = tail.next
        self.head = s.next
    #16

    def addBefore(self, p, x):
        h = self.head
        if h == p:
            self.addToHead(x)
            return
        else:
            while h != p:
                pre = h
                h = h.next
            node_need_add = Node(x)
            pre.next = node_need_add
            node_need_add.next = h
    #17

    def Attach(self, sll):
        h = self.head
        if sll.head is None:
            return
        tail = self.head
        while (tail.next):
            tail = tail.next
        tail.next = sll.head
    #18

    def max(self):
        arr = []
        h = self.head
        while h:
            arr.append(h.data)
            h = h.next
        return max(arr)
    #19

    def min(self):
        arr = []
        h = self.head
        while h:
            arr.append(h.data)
            h = h.next
        return min(arr)
    #20

    def sum(self):
        sum = 0
        h = self.head
        while h:
            sum += h.data
            h = h.next
        return sum
    #21

    def avg(self):
        sum = 0
        k = 0
        h = self.head
        while h:
            sum += h.data
            k += 1
            h = h.next
        return sum/k
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

    def insert(self, x):
        start = self.head
        end = self.head
        while end.next is not None:
            end = end.next
        self.sort(start, end)
        self.traverse()
        node_need_add = Node(x)
        duyet = self.head
        above = None
        ok = 0
        if x <= duyet.data:
            self.addToHead(x)
            return
        while duyet:
            if x <= duyet.data:
                above.next = node_need_add
                node_need_add.next = duyet
                ok = 1
                break
            above = duyet
            duyet = duyet.next
        if ok == 0:
            self.addToTail(x)
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


def init():
    lst = input()
    a = list(map(int, lst.split()))
    b = Singly_linked_list()
    a = reversed(a)
    for i in a:
        b.addToHead(i)
    return b, lst


class switch_python:
    def switch(self, case):
        return getattr(self, 'case'+case)()

    def case1(self):
        z = input()
        (sll, lst) = init()
        need_add = int(input())
        sll.addToHead(need_add)
        print(f'1. Add {z} before the head of 10-element list: {lst}')
        sll.traverse()

    def case2(self):
        z = input()
        (sll, lst) = init()
        need_add = int(input())
        sll.addToTail(need_add)
        print(f'2. Add {need_add} after the tail of {z}-element list: {lst}')
        sll.traverse()

    def case3(self):
        z = input()
        (sll, lst) = init()
        (bef, need_add) = list(map(int, input().split()))
        b = sll.search(bef)
        sll.addAfter(b, need_add)
        print(
            f'3. Insert an element {need_add} after the element {bef} in the {z}-element list {lst}')
        sll.traverse()

    def case4(self):
        z = input()
        (sll, lst) = init()
        print(f'4. Traverse the {z}-element list: {lst}')
        sll.traverse()

    def case5(self):
        z = input()
        (sll, lst) = init()
        sll.deleteFromHead()
        print(f'5. Delete the head of the {z}-element list: {lst}')
        sll.traverse()

    def case6(self):
        z = input()
        (sll, lst) = init()
        sll.deleteFromTail()
        print(f'6. Delete the tail of the {z}-element list: {lst}')
        sll.traverse()

    def case7(self):
        z = input()
        (sll, lst) = init()
        bf = int(input())
        b = sll.search(bf)
        sll.deleteAfter(b)
        print(
            f'7. Delete the element after the element {bf} of the {z}-element list: {lst}')
        sll.traverse()

    def case8(self):
        z = input()
        (sll, lst) = init()
        bf = int(input())
        sll.delet(bf)
        print(f'8. Delete the element {bf} in the {z}-element list: {lst}')
        sll.traverse()

    def case9(self):
        z = input()
        (sll, lst) = init()
        sear = int(input())
        res = sll.search(sear)
        print(f'9. Search the element {sear} in the {z}-element list: {lst}')
        print(res.data)

    def case10(self):
        z = input()
        (sll, lst) = init()
        print(
            f'10. Count the number of the elements of the {z}-element list: {lst}')
        print(sll.count())

    def case11(self):
        z = input()
        (sll, lst) = init()
        n = int(input())
        sll.deleteTh(n)
        print(f'11. Delete the {n}rd element in the {z}-node list: {lst}')
        sll.traverse()

    def case12(self):
        z = input()
        (sll, lst) = init()
        start = sll.head
        end = sll.head
        while end.next is not None:
            end = end.next
        sll.sort(start, end)
        print(f'12. Sort in accending order the {z}-node list: {lst}')
        sll.traverse()

    def case13(self):
        z = input()
        (sll, lst) = init()
        bf = int(input())
        b = sll.search(bf)
        sll.delete(b)
        print(f'13. Delete the element {bf} in the {z}-node list: {lst}')
        sll.traverse()

    def case14(self):
        z = input()
        (sll, lst) = init()
        print(
            f'14. create and return array containing info of all nodes in the {z}-node list.')
        sll.toArray()

    def case15(self):
        z = input()
        (sll, lst) = init()
        v = input()
        (sll1, lst1) = init()
        sll.merge(sll1)
        print(
            f'15. Merge two ordered singly linked lists of integers into one ordered list: {z}-node list = {lst}; {v}-node list: {lst1}')
        sll.traverse()

    def case16(self):
        z = input()
        (sll, lst) = init()
        (need_add, bef) = list(map(int, input().split()))
        b = sll.search(bef)
        sll.addBefore(b, need_add)
        print(
            f'16. add a node with value {need_add} before the node {bef} in the {z}-node list: {lst}.')
        sll.traverse()

    def case17(self):
        z = input()
        (sll, lst) = init()
        v = input()
        (sll1, lst1) = init()
        sll.Attach(sll1)
        print(
            f'17. Attach a singly linked list of {v} elements {lst1} to the end of another singly linked list of {z} nodes: {lst}')
        sll.traverse()

    def case18(self):
        z = input()
        (sll, lst) = init()
        print(
            f'18. find and return the maximum value in the {z}-node list: {lst}')
        print(sll.max())

    def case19(self):
        z = input()
        (sll, lst) = init()
        print(
            f'19. find and return the minimum value in the {z}-node list: {lst}')
        print(sll.min())

    def case20(self):
        z = input()
        (sll, lst) = init()
        print(f'20. return the sum of all values in the {z}-node list: {lst}')
        print(sll.sum())

    def case21(self):
        z = input()
        (sll, lst) = init()
        print(
            f'21. return the average of all values in the {z}-node list: {lst}')
        print('%.2f' % sll.avg())

    def case22(self):
        z = input()
        (sll, lst) = init()
        print(
            f'22. check and return true if the {z}-node list {lst} is sorted, return false if the list is not sorted.')
        print(sll.sorte())

    def case23(self):
        z = input()
        (sll, lst) = init()
        need_add = int(input())
        print(
            f'23. sort the {z}-node list: {lst} then insert a node with value {need_add} into the sorted list so that the new list is a sorted list')
        sll.insert(need_add)
        sll.traverse()

    def case24(self):
        z = input()
        (sll, lst) = init()
        sll.reverse()
        print(f'24. Reverse the singly linked list of {z} nodes: {lst}')
        sll.traverse()

    def case25(self):
        z = input()
        (sll, lst) = init()
        v = input()
        (sll1, lst1) = init()
        print(
            f'25. Check whether two singly linked list have the same contents: 1st list of {z} elements: {lst}; 2nd list of {v} elements: {lst1}')
        print(sll.check(sll1))


if __name__ == '__main__':
    input()
    n = input()
    test = switch_python()
    test.switch(n)
