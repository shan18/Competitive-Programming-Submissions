# Python3
# Problem Statement: https://www.hackerrank.com/challenges/ctci-is-binary-search-tree/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=trees


""" Node is defined as
class node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None
"""

node_list = []

def inorder_traversal(root):
    if not root:
        return
    inorder_traversal(root.left)
    node_list.append(root.data)
    inorder_traversal(root.right)

def checkBST(root):
    inorder_traversal(root)
    if node_list == sorted(node_list) and len(node_list) == len(set(node_list)):
        return True
    else:
        return False

