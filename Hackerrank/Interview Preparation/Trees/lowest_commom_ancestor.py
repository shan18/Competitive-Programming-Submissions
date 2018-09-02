# Python3
# Problem Statement: https://www.hackerrank.com/challenges/binary-search-tree-lowest-common-ancestor/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=trees


'''
class Node:
      def __init__(self,info): 
          self.info = info  
          self.left = None  
          self.right = None 
           

       // this is a node of the tree , which contains info as data, left , right
'''

def lca(root, v1, v2):
    this_level = [root]
    while this_level:
        next_level = []
        for node in this_level:
            if v1 <= node.info <= v2 or v2 <= node.info <= v1:
                return node
            if node.left:
                next_level.append(node.left)
            if node.right:
                next_level.append(node.right)
        this_level = next_level

