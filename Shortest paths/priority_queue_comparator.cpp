//priority_queue comparator

struct comp {
    bool operator() (const pii &a, const pii &b) {
        return a.second > b.second;
    }
};
priority_queue<ll,vector<pii >,comp > q ;
