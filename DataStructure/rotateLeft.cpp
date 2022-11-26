/*
 * Complete the 'rotateLeft' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. INTEGER d
 *  2. INTEGER_ARRAY arr
 */
 
 //Link : https://www.hackerrank.com/challenges/array-left-rotation/problem?isFullScreen=true
 
 void swap(int & n1, int & n2){
     n1 = n1+n2;
     n2 = n1-n2;
     n1 = n1-n2;
 }
 
vector<int> rotateLeft(int d, vector<int> arr) {
    int i=0,j;
    //then add them to our array
    vector<int> temp(arr.size(),0);
    j=arr.size() - d;
   
    for (i=0; i< arr.size(); i++) {
        
        if(i+j <arr.size()){
            d =i+j;
        }else{
            d = (i+j)-arr.size();
        }

        temp[d] = arr[i];
    }
    
    return temp;
}
