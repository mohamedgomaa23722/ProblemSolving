/*
 * Complete the 'migratoryBirds' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 input:
 6
1 4 4 4 5 3
output :
4
 */
 //Link:https://www.hackerrank.com/challenges/migratory-birds/problem?isFullScreen=true&h_r=next-challenge&h_v=zen
int getBiggest(vector<int> &arr){
    int i=0,j=1;
    while (i != 4 && j!=5) {
        cout<<arr[i]<<" : "<<arr[j]<<endl;
        if(arr[j] > arr[i]){ i = j++;}
        else{ j++; }
    }
    return i+1;
}
int migratoryBirds(vector<int> arr) {
    vector<int> values(5,0);
    for(int i=0; i < arr.size();i++){
        values[arr[i]-1]++;
    }
    return getBiggest(values);
}
