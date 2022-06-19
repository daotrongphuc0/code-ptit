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
    if node is None or node.data == x:
        return node
    if node.data < x:
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


def inputTree():
    a = input()
    a = a.split()
    r = Node(int(a[0]))
    for i in range(1, len(a)):
        r = insert(r, int(a[i]))
    return r


#lam bai
zzz = input()
n = int(input())
if n == 5:
    root = inputTree()
    breadth(root)
elif n == 6:
    root = inputTree()
    preorder(root)
elif n == 7:
    root = inputTree()
    inorder(root)
elif n == 8:
    root = inputTree()
    postorder(root)
elif n == 9:
    root = inputTree()
    print(count(root))
elif n == 11:
    root = inputTree()
    print(min(root))
elif n == 12:
    root = inputTree()
    print(max(root))
elif n == 13:
    root = inputTree()
    print(sum(root))
elif n == 14:
    root = inputTree()
    print(avg1(root))
elif n == 15:
    root = inputTree()
    print(height(root))
elif n == 16:
    root = inputTree()
    print(max_cost(root))
elif n == 17:
    root = inputTree()
    print(isAVL(root))
