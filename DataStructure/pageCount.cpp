/*
 * Complete the 'pageCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER p
 Link : https://www.hackerrank.com/challenges/drawing-book/problem?isFullScreen=true
 */

int pageCount(int n, int p) {
    if(p%2 ==0 && n%p ==1){
        return 0;
    }
    int rightResult=0,leftResult=0,_n=n;
    
    while(_n > p){
        if (_n %2 != 0) {
            _n--;
        }
        rightResult++;
        _n -=2;
    }
    _n=1;
    while (p > _n) {
        leftResult++;
        _n +=2;
    }
    return (leftResult > rightResult)? rightResult:leftResult;
}
