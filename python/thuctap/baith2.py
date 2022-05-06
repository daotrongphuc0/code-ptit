import math


class Node:
	def __init__(self, key):
		self.left = None
		self.right = None
		self.val = key


def print_tree(root):
	if root:
		print_tree(root.left)
		print(root.val, end=" ")
		print_tree(root.right)

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
def search(root, key):
    if root is None or root.val == key:
        return root
    if root.val < key:
        return search(root.right, key)
    return search(root.left, key)

#4
def insert(root, x):
    if root is None:
        return Node(x)
    if root.val == x:
        return root
    elif x < root.val:
        root.left = insert(root.left, x)
    else:
        root.right = insert(root.right, x)
    return root
#5
def breadth(root):
    queue =[root]
    while len(queue) !=0:
        tmp = queue.pop(0)
        print(tmp.val,end =" ")
        if tmp.left is not None:
            queue.append(tmp.left)
        if tmp.right is not None:
            queue.append(tmp.right)

#6


def preorder(root):
    if root:
        print(root.val, end=" ")
        preorder(root.left)
        preorder(root.right)
#7
def inorder(root):
    print_tree(root)
#8
def postorder(root) :
    if root is not None:
        preorder(root.left)
        preorder(root.right)
        print(root.data, end=" ")
#9
def count(root):
    dem =0
    if root is not None:
        dem +=1
    if root.left is not None:
        dem += count(root.left)
    if root.right is not None:
        dem += count(root.right)
    return dem
#10
def dele(root,x):
    if root.val == x:
        clear(root)
    else:
        if root.left is not None:
            clear(root.left,x)
        if root.right is not None:
            clear(root.right, x)
#11
def min(root):
    if root.left is None:
        return root.val
    else :
        return min(root.left)
#12
def max(root):
    if root.right is None:
        return root.val
    else:
        return max(root.right)
#13
def sum(root):
    s = root.val
    if root.left is not None:
        s += sum(root.left)
    if root.right is not None:
        s += sum(root.right)
    return s
#14 
def avg(root) :
    return int(sum(root))/int(count(root))
#15
def height(root):
    if root is None :
        return 0
    if root.left is not None:
        l = height(root.left)
    if root.right is not None:
        r = height(root.right)
    if l>r:
        return l+1
    else :
        return r+1
#16
def maxCost(root):
    if root is None:
        return 0
    if root.left is not None:
        l = maxCost(root.left)
    if root.right is not None:
        r = maxCost(root.right)
    if l > r:
        return l+root.val
    else:
        return r+root.val
#17
def kiemtraAVL(root):
    if root == None:
        return True
    if abs(height(root.left)-height(root.right)) <= 1 and kiemtraAVL(root.left) and kiemtraAVL(root.right):
        return True
    return False

#nhap

def inputTree():
    n =input().split(" ")
    r =Node(int(n[0]))
    for i in range(1,len(n)):
        r = insert(r, int(n[i]))
    return r

#lam bai
zzz =input()
n=int(input())
if n ==5:
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
    print(avg(root))
elif n == 15:
    root = inputTree()
    print(height(root))
elif n == 16:
    root = inputTree()
    print(maxCost(root))
elif n == 17:
    root = inputTree()
    print(kiemtraAVL(root))
