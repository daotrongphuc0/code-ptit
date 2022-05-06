import math


class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

#1


def isEmpty(root):
    if root == None:
        return True
    return False
#2


def clear(node):
    if node != None:
        clear(node.left)
        clear(node.right)
        del node
#3


def search(node, x):
    if node is None or node.val == x:
        return node
    if node.val < x:
        return search(node.right, x)
    return search(node.left, x)

#4


def insert(node, x):
    if node is None:
        return Node(x)
    if node.data == x:
        return node
    elif x < node.data:
        node.left = insert(node.left, x)
    else:
        node.right = insert(node.right, x)
    return node
#5


def breadth(tree):
    queue = [tree]
    while len(queue) != 0:
        current_node = queue.pop(0)
        print(current_node.data, end=" ")
        if current_node.left != None:
            queue.append(current_node.left)
        if current_node.right != None:
            queue.append(current_node.right)
#6


def preorder(root):
    if root:
        print(root.data, end=" ")
        preorder(root.left)
        preorder(root.right)
#7


def inorder(root):
    if root:
        inorder(root.left)
        print(root.data, end=" ")
        inorder(root.right)
#8


def postorder(root):
    if root:
        postorder(root.left)
        postorder(root.right)
        print(root.data, end=" ")
#9


def count(node):
    if node == None:
        return 0
    return 1 + count(node.left) + count(node.right)

#10 delete node


def min_node(node):
    cur = node
    while cur.left != None:
        cur = cur.left
    return cur


def dele(node, x):
    if node is None:
        return node
    if x < node.data:
        node.left = dele(node.left, x)
    elif x > node.data:
        node.right = dele(node.right, x)
    else:
        if node.left == None:
            a = node.right
            node = None
            return a
        elif node.right == None:
            a = node.left
            node = None
            return a
        a = min_node(node.right)
        node.data = a.data
        node.right = dele(node.right, a.key)
    return node
#11


def min1(node):
    cur = node
    while cur.left != None:
        cur = cur.left
    return cur.data

#12


def max1(node):
    cur = node
    while cur.right != None:
        cur = cur.right
    return cur.data

#13


def sum1(root):
    if root == None:
        return 0
    return root.data + sum1(root.left) + sum1(root.right)

#14


def avg1(node):
    return sum1(node)/count(node)

#15


def height(node):
    if node == None:
        return 0
    left_tree = height(node.left)
    right_tree = height(node.right)
    return max(left_tree, right_tree)+1
#16


def max_cost(node):
    if node == None:
        return 0
    left = max_cost(node.left)
    right = max_cost(node.right)
    return max(left, right) + node.data
#17


def isAVL(node):
    if node == None:
        return True
    if abs(height(node.left) - height(node.right)) <= 1 and isAVL(node.left) and isAVL(node.right):
        return True
    return False


def inputt():
    a = list(map(int, input().split()))
    r = Node(a[0])
    for i in range(1, len(a)):
        r = insert(r, a[i])
    return r


class switch_python:
    def __init__(self):
        self.case = 'case'

    def switch(self, case):
        default = "Incorrect"
        x = self.case+case
        return getattr(self, str(x), lambda: default)()

    def case1(self):
        r = inputt()
        isEmpty(r)

    def case2(self):
        r = inputt()
        clear(r)

    def case3(self):
        r = inputt()
        x = int(input())
        search(r, x)

    def case4(self):
        r = inputt()
        x = int(input())
        insert(r, x)

    def case5(self):
        r = inputt()
        breadth(r)

    def case6(self):
        r = inputt()
        preorder(r)

    def case7(self):
        r = inputt()
        inorder(r)

    def case8(self):
        r = inputt()
        postorder(r)

    def case9(self):
        r = inputt()
        print(count(r))

    def case10(self):
        r = inputt()
        x = int(input())
        dele(r, x)

    def case11(self):
        r = inputt()
        print(min1(r))

    def case12(self):
        r = inputt()
        print(max1(r))

    def case13(self):
        r = inputt()
        print(sum1(r))

    def case14(self):
        r = inputt()
        print(avg1(r))

    def case15(self):
        r = inputt()
        print(height(r))

    def case16(self):
        r = inputt()
        print(max_cost(r))

    def case17(self):
        r = inputt()
        print(isAVL(r))


if __name__ == '__main__':
    input()
    n = input()
    test = switch_python()
    test.switch(n)
