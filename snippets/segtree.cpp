struct SegTree {
    int n;
    vector<long long> tree;
    SegTree(int n) : n(n), tree(4*n) {}
    void build(vector<long long> &arr, int node, int l, int r) {
        if (l == r) tree[node] = arr[l];
        else {
            int mid = (l + r) / 2;
            build(arr, node*2, l, mid);
            build(arr, node*2+1, mid+1, r);
            tree[node] = tree[node*2] + tree[node*2+1];
        }
    }
    void update(int node, int l, int r, int idx, long long val) {
        if (l == r) tree[node] = val;
        else {
            int mid = (l + r) / 2;
            if (idx <= mid) update(node*2, l, mid, idx, val);
            else update(node*2+1, mid+1, r, idx, val);
            tree[node] = tree[node*2] + tree[node*2+1];
        }
    }
    long long query(int node, int l, int r, int ql, int qr) {
        if (qr < l || r < ql) return 0;
        if (ql <= l && r <= qr) return tree[node];
        int mid = (l + r) / 2;
        return query(node*2, l, mid, ql, qr) + query(node*2+1, mid+1, r, ql, qr);
    }
};
