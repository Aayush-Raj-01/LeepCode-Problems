class MyCircularDeque {
public:
    vector<int> queue;
    int r;
    int f;
    int size;
    MyCircularDeque(int k) {
        queue.resize(k);
        r = -1;
        f = -1;
        size = k;
    }

    bool insertFront(int value) {
        if (f == (r + 1) % size)
            return false;
        if (f == -1) {
            f = r=0 ;
            queue[f] = value;
            return true;
        }
        if (f == 0) {
            f = size - 1;
            queue[f] = value;
            return true;
        }
        f = f - 1;
        queue[f] = value;
        return true;
    }

    bool insertLast(int value) {
        if (f == (r + 1) % size)
            return false;
        if (f == -1) {
            f = r=0;
            queue[f] = value;
            return true;
        }if(r == size-1){
            r = 0;
            queue[r] = value;
            return true;
        }
        r = r+1;
        queue[r] = value;
        return true;

    }

    bool deleteFront() {
        if(f == -1) return false;
        if(f == r){
            f=r=-1;
        }else if(f == size-1){
            f = 0;
        }else{
            f = f+1;
        }
        return true;
    }

    bool deleteLast() {
        if(f == -1) return false;
        else if(f == r){
            f=r=-1;
        }else if(r == 0)r = size-1;
        else r -=1;
        return true;
    }

    int getFront() {
        if(f == -1) return -1;
        return queue[f];
        
    }
    
    int getRear() {
        
        if(r == -1) return -1;
        return queue[r];
        
    }
    
    bool isEmpty() {
        if(f == -1) return true;
        return false;
        
    }
    
    bool isFull() {
        if(f == (r+1)%size) return true;
        return false;
        
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */