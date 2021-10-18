class Rnum:
    def __init__(self,size=100):
        from random import shuffle
        self.a=list(range(1,size+1))
        shuffle(self.a)
    def show(self):
        print(' '.join(map(str,self.a)))
class Node:
    def __init__(self,value=None):
        self.value=value
        self.left_child=None
        self.right_child=None
        self.parent=None
class Bstree:
    def __init__(self):
        self.root=None
    def insert(self,value):
        if self.root==None:
            self.root=Node(value)
        else:
            self._insert(self.root,value)
    def _insert(self,cur_node,value):
        if value<cur_node.value:
            if cur_node.left_child==None:
                cur_node.left_child=Node(value)
                cur_node.left_child.parent=cur_node
            else:
                self._insert(cur_node.left_child,value)
        elif value>cur_node.value:
            if cur_node.right_child==None:
                cur_node.right_child=Node(value)
                cur_node.right_child.parent=cur_node
            else:
                self._insert(cur_node.right_child,value)
        else:
            print(f'{value} has existed.')
    def show(self):
        if self.root!=None:
            self._show(self.root)
    def _show(self,cur_node):
        if cur_node!=None:
            self._show(cur_node.left_child)
            print(cur_node.value,end=' ')
            self._show(cur_node.right_child)
    def find(self,value):
        if self.root==None:
            return None
        else:
            return self._find(self.root,value)
    def _find(self,cur_node,value):
        if value==cur_node.value:
            return cur_node
        elif value<cur_node.value and cur_node.left_child!=None:
            return self._find(cur_node.left_child,value)
        elif value>cur_node.value and cur_node.right_child!=None:
            return self._find(cur_node.right_child,value)
        return None
    def delete_value(self,value):
        if self.find(value)!=None:
            self.delete_node(self.find(value))
    def delete_node(self,cur_node):
        def min_value_node(n):
            current=n.right_child
            while current.left_child!=None:
                current=current.left_child
            return current
        def num_children(n):
            num=0
            if n.left_child!=None:
                num+=1
            if n.right_child!=None:
                num+=1
            return num
        node_parent,node_children=cur_node.parent,num_children(cur_node)
        if node_children==0:
            if node_parent.left_child==cur_node:
                node_parent.left_child=None
            else:
                node_parent.right_child=None
        if node_children==1:
            child=cur_node.left_child if cur_node.left_child!=None else cur_node.right_child
            if node_parent.left_child==cur_node:
                node_parent.left_child=child
            else:
                node_parent.right_child=child
            child.parent=node_parent
        if node_children==2:
            successor=min_value_node(cur_node)
            cur_node.value=successor.value
            self.delete_node(successor)
    def height(self):
        if self.root==None:
            return 0
        else:
            return self._height(self.root,0)
    def _height(self,cur_node,value):
        if cur_node==None:
            return value
        else:
            lh=self._height(cur_node.left_child,value+1)
            rh=self._height(cur_node.right_child,value+1)
            return max(lh,rh)
r=Rnum(100)
b=Bstree()
for i in r.a:
    b.insert(i)
for i in [1,50,100]:
    b.delete_value(i)
print(f'Height={b.height()}')
b.show()
