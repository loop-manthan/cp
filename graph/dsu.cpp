struct dsu{
    vector<ll> parent, size;
    dsu(ll n){
        parent.resize(n+1);
        size.assign(n+1, 1);
        iota(parent.begin(), parent.end(), 0);
    }
    
    ll find(ll v){
        if(parent[v]==v) return v;
        return parent[v] = find(parent[v]);
    }

    bool unite(ll a, ll b){
        a = find(a);
        b = find(b);
        if(a==b) return false;
        if(size[a]<size[b]) swap(a, b);
        parent[b] = a;
        size[a] += size[b];
        return true; 
    }
};