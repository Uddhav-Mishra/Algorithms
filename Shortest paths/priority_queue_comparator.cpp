//priority_queue comparator
// a comparator function for implementation
struct comp {
    bool operator() (const pii &a, const pii &b) {
        return a.second > b.second;
    }
};
priority_queue<ll,vector<pii >,comp > q ;
