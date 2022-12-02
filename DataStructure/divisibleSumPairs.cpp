LINK : https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int i=0,j,result =0;
    for(; i < n; i++){
        for (int j=i+1; j<n; j++) {
            if(((ar[i]+ar[j])%k) == 0){
                result++;
            }
        }
    }
    return result;
}
