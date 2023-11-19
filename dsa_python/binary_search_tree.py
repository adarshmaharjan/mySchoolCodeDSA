class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.key = key


def insert(node, key):

    if node is None:
        return Node(key)
    if key < node.key:
        node.left = insert(node.left, key)
    elif key > node.key:
        node.right = insert(node.right, key)

    return node


def inOrder(root):

    if root is not None:
        inOrder(root.left)
        print(root.key, end=" ")
        inOrder(root=root.right)


def preOrder(root):
    if root:
        print(root.key, end=" ")
        preOrder(root=root.left)
        preOrder(root=root.right)


def postOrder(root):
    if root:
        preOrder(root.left)
        preOrder(root.right)
        print(root.key, end=" ")


def search(root, key):
    if root is None or root.key == key:
        return root

    if root.key < key:
        return search(root=root.right, key=key)

    return search(root=root.left, key=key)


def deleteNode(root, k):

    if root is None:
        return root
    if root.key > k:
        root.left = deleteNode(root.left, k)
        return root
    elif root.key < k:
        root.right = deleteNode(root.right, k)
        return root


if __name__ == "__main__":
    root = None

    root = insert(root, 50)

    insert(root, 30)
    insert(root, 20)
    insert(root, 40)
    insert(root, 70)
    insert(root, 60)
    insert(root, 80)

    inOrder(root)
    print("\n")
    preOrder(root)
    print("\n")
    postOrder(root)
    print("\n")

    key = 60

    if search(root, key) is None:
        print(key, "not found")
    else:
        print(key, "found")
