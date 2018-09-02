# Python3
# Problem Statement: https://www.hackerrank.com/challenges/tree-huffman-decoding/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=trees&h_r=next-challenge&h_v=zen


"""class Node:
    def __init__(self, freq,data):
        self.freq= freq
        self.data=data
        self.left = None
        self.right = None
"""        

def decodeHuff(root, s):
    code = ''
    node = root
    for c in s[:]:
        node = node.left if c == '0' else node.right
        if node.left is None and node.right is None:
            code += node.data
            node = root
    print(code)

