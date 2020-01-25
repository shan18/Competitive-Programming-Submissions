# Python3
# Problem Statement: https://leetcode.com/problems/add-two-numbers/


# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def __init__(self):
        self.carry = 0
        self.head = None
        self.current = None

    def sumRemainingList(self, l):
        while not l is None:
            add_val = l.val + self.carry
            self.carry = add_val // 10
            self.current.next = ListNode(add_val % 10)
            self.current = self.current.next
            l = l.next

    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        while not l1 is None and not l2 is None:
            add_val = l1.val + l2.val + self.carry
            self.carry = add_val // 10
            new_node = ListNode(add_val % 10)
            if self.head is None:
                self.head = new_node
                self.current = new_node
            else:
                self.current.next = new_node
                self.current = new_node
            l1 = l1.next
            l2 = l2.next

        self.sumRemainingList(l1)
        self.sumRemainingList(l2)

        if self.carry > 0:
            self.current.next = ListNode(self.carry)

        return self.head

