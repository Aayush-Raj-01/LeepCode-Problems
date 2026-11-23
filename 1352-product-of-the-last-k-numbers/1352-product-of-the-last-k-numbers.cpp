class ProductOfNumbers {
public:
    vector<int> prefix;
    ProductOfNumbers() {
        return;
        
    }
    
    void add(int num) {
        prefix.push_back(num);
        
    }
    
    int getProduct(int k) {
        int ans = 1;
        for(int i = prefix.size() -1 ; i >= 0 ; i--){
            if(k==0){
                break;
            }
            ans *= prefix[i];
            k--;
        }
        return ans;

        
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */