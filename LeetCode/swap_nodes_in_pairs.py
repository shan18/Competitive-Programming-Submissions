# Python3
# Problem Statement: https://leetcode.com/problems/swap-nodes-in-pairs/


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def swapPairs(self, head: ListNode) -> ListNode:
        nodes = ListNode(next=head)
        node = nodes
        while node.next is not None and node.next.next is not None:
            first = node.next
            second = node.next.next
            
            node.next = second
            first.next = second.next
            second.next = first
            
            node = node.next.next
            
        return nodes.next
