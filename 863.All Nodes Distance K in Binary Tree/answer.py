def distanceK(self, root, target, K):
    conn = collections.defaultdict(list)
    def connect(parent, child):
        if parent and child:
            conn[parent.val].append(child.val)
            conn[child.val].append(parent.val)
        if child.left: connect(child, child.left)
        if child.right: connect(child, child.right)
    connect(None, root)
    bfs = [target.val]
    seen = set(bfs)
    for i in xrange(K):
        bfs = [y for x in bfs for y in conn[x] if y not in seen]
        seen |= set(bfs)
    return bfs
