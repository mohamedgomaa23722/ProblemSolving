 
/*
*This problem can be solved with a lot of ways i choose hash map 
*which help us to get only one key for increament 
* The implement is provided by myself.
Link: https://www.hackerrank.com/challenges/sock-merchant/problem?isFullScreen=true

And we can sort them and use stack.
*/
class Map{
     public:
        int * key;
        int * value;
        int size;
     public :
        Map(int n){
            key = new int[n];
            value= new int[n];
            size = 0;
        }
        
        ~Map(){
            delete [] key;
            delete [] value;
        }
        
        int getValue(int key){
            if (size ==0) return -1;
            for (int i=0; i < size; i++) {
                if (this->key[i] == key) {
                    return value[i];
                }
            }
            return -1; 
        }
        
        int getKey(int key){
            if(size == 0) return -1;
            for (int i=0; i < size; i++) {
                if (this->key[i] == key) {
                    return i;
                }
            }
            return -1;       
        }
        void put(int key,int value){
            int postionOfKey =getKey(key);
            cout<<key<<" : "<<value<<endl; 
           if(postionOfKey == -1){
               //case 1: item is not exist
               this -> key[size] = key;
               this -> value[size++] = value;  
           }else{
                this -> key[postionOfKey] = key;
                this -> value[postionOfKey] = value;
           } 
        }
        int ConnectedLines(){
            int result=0;
            for (int i=0; i<size; i++) {
                if (value[i] >= 2 &&value[i]%2 !=0) {
                    result += (value[i]-1)/2; 
                }else{
                    result += value[i]/2; 
                }
            }
            return result;
        }   
 };

int sockMerchant(int n, vector<int> ar) {
    Map map(n);
    for(int i = 0; i < n ; i++){
        if (map.getKey(ar[i]) != -1) {
            map.put(ar[i],map.getValue(ar[i])+1);
        }else{
            map.put(ar[i],1);
        }
    }
    return map.ConnectedLines();
}
