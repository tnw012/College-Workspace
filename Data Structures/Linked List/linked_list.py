class Node:
    """
    Class: Single Linked Node
    ---------------------------------------------
    """
    def __init__(self, data, nextNode=None):
        self.data = data
        self.next = nextNode

class SgLinkedList:
    """
    Class: Single Linked List
    """
    def __init__(self):
        self.head = None

    def insert_front(self, data):
        self.head = Node(data, self.head)

    def insert_end(self, data):
        newNode = Node(data)
        if self.head is None:
            self.head = newNode
        else:
            probe = self.head
            while probe.next is not None:
                probe = probe.next
            probe.next = newNode

    def print_list(self):
        probe = self.head
        while probe is not None:
            print(probe.data)
            probe = probe.next
        print()

