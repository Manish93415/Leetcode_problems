class Solution:
    def recoverTree(self, root: Optional[TreeNode]) -> None:
        stack = []
        x = y = prev = None

        while stack or root:
            while root:
                stack.append(root)
                root = root.left

            root = stack.pop()

            # detect swapped nodes
            if prev and prev.val > root.val:
                if not x:
                    x = prev
                y = root

            prev = root
            root = root.right

        # swap values after traversal
        if x and y:
            x.val, y.val = y.val, x.val



        



        