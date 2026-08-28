class FreqStack {
private:
    unordered_map<int,int>m;
    unordered_map<int,stack<int>>grp;
    int maxFreq;

public:
    FreqStack() {
        maxFreq=0;
    }
    
    void push(int val) {
        int currfreq=++m[val];
        if(currfreq>maxFreq)
        {
            maxFreq=currfreq;
        }
        grp[currfreq].push(val);
    }
    
    int pop() {
        int val=grp[maxFreq].top();
        grp[maxFreq].pop();

        m[val]--;

        if(grp[maxFreq].empty())
        {
            maxFreq--;
        }
        return val;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */