/*
 * Complete the 'matchingStrings' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY stringList
 *  2. STRING_ARRAY queries
 */
 
 //Link : https://www.hackerrank.com/challenges/sparse-arrays/problem?isFullScreen=true

vector<int> matchingStrings(vector<string> stringList, vector<string> queries) {
    // TIP: The best data structure is map or dictionary O(N)
    // Time complex : O(n^2)
    vector<int> counter(queries.size(),0); 
    for (int i=0; i < queries.size(); i++) {
        for (int j=0; j < stringList.size(); j++) {
           if(stringList[j] == queries[i])
                counter[i]++;
        }
    }
    return counter;
}
