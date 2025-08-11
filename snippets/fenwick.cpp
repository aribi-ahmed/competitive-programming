struct Fenwick {
    int n;
    vector<long long> bit;
    Fenwick(int n) : n(n), bit(n+1, 0) {}
    void add(int idx, long long delta) {
        for (; idx <= n; idx += idx & -idx) bit[idx] += delta;
    }
    long long sum(int idx) {
        long long res = 0;
        for (; idx > 0; idx -= idx & -idx) res += bit[idx];
        return res;
    }
    long long range_sum(int l, int r) {
        return sum(r) - sum(l-1);
    }
};
