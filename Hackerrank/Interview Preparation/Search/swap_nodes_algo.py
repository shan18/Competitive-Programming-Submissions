# Python3
# Problem Statement: https://www.hackerrank.com/challenges/swap-nodes-algo/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=search


#!/bin/python3

import os
import sys

#
# Complete the swapNodes function below.
#
sys.setrecursionlimit(1500)  # Increase recursion limit

class Node:
    
    def __init__(self, index):
        self.index = index
        self.right = None
        self.left = None
        self.depth = 0


def create_tree(indexes):
    root = Node(1)
    queue = [root]
    for idx in indexes:
        temp = queue.pop(0)
        if idx[0] != -1:
            temp.left = Node(idx[0])
            queue.append(temp.left)
        if idx[1] != -1:
            temp.right = Node(idx[1])
            queue.append(temp.right)
    
    return root

def fill_depth(root):
    this_level = [root]
    depth = 0
    while this_level:
        depth += 1
        next_level = []
        for node in this_level:
            node.depth = depth
            if node.left:
                next_level.append(node.left)
            if node.right:
                next_level.append(node.right)
        this_level = next_level
    return depth


def bfs_swap(root, depth):
    queue = [root]
    while queue:
        node = queue.pop(0)
        if node.depth % depth == 0:
            node.left, node.right = node.right, node.left
        if node.left:
            queue.append(node.left)
        if node.right:
            queue.append(node.right)   


def inorder(node, node_list):
    if not node:
        return
    
    if node.left:
        node_list = inorder(node.left, node_list)
    
    node_list.append(node.index)
    
    if node.right:
        node_list = inorder(node.right, node_list)
    
    return node_list


def swapNodes(indexes, queries):
    #
    # Write your code here.
    #
    root = create_tree(indexes)
    max_depth = fill_depth(root)
    inorder_traversals = []
    
    for query in queries:
        bfs_swap(root, query)
        inorder_traversals.append(inorder(root, []))
    return inorder_traversals

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    n = int(input())

    indexes = []

    for _ in range(n):
        indexes.append(list(map(int, input().rstrip().split())))

    queries_count = int(input())

    queries = []

    for _ in range(queries_count):
        queries_item = int(input())
        queries.append(queries_item)

    result = swapNodes(indexes, queries)

    fptr.write('\n'.join([' '.join(map(str, x)) for x in result]))
    fptr.write('\n')

    fptr.close()
