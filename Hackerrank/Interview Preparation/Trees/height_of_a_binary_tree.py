# Python3
# Problem Statement: https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=trees


'''
class Node:
      def __init__(self,info): 
          self.info = info  
          self.left = None  
          self.right = None 
           

       // this is a node of the tree , which contains info as data, left , right
'''
def height(root):
    this_level = [root]
    h = 0
    while this_level:
        h += 1
        next_level = []
        for node in this_level:
            if node.left:
                next_level.append(node.left)
            if node.right:
                next_level.append(node.right)
        this_level = next_level
    return h - 1

