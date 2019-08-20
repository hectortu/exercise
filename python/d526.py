class node:
    def __init__(self,value=None):
        self.value=value
        self.left_child=None
        self.right_child=None

class binary_search_tree:
    def __init__(self):
        self.root=None

    def insert(self,value):
        if self.root==None:
            self.root=node(value)
        else:
            self._insert(value,self.root)

    def _insert(self,value,cur_node):
        if value < cur_node.value:
            if cur_node.left_child==None:
                cur_node.left_child=node(value)
            else:
                self._insert(value,cur_node.left_child)
        elif value > cur_node.value:
            if cur_node.right_child==None:
                cur_node.right_child=node(value)
            else:
                self._insert(value,cur_node.right_child)
        else:
            print(str(value)+"existed in tree.")

    def print_tree(self):
        if self.root!=None:
            self._print_tree(self.root)

    def _print_tree(self,cur_node):
        if cur_node!=None:
            print(str(cur_node.value),end=' ')
            self._print_tree(cur_node.left_child)
            self._print_tree(cur_node.right_child)

import sys
for s in sys.stdin:
    l=[int(i) for i in sys.stdin.readline().split()]
    tree=binary_search_tree()
    for i in l:
        tree.insert(i)
    tree.print_tree()
    print()
    del tree

