/*
 * Complete the 'kangaroo' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts following parameters:
 *  1. INTEGER x1
 *  2. INTEGER v1
 *  3. INTEGER x2
 *  4. INTEGER v2
 */
 //Link : https://www.hackerrank.com/challenges/kangaroo/problem
string kangaroo(int x1, int v1, int x2, int v2) {
    if ((x1 > x2 && v1 > v2) || (x1 < x2 && v1 < v2)) return "NO";
    
    int fasterKangro = (x1 < x2&&v1 > v2)? x1:x2;
    int fasterKangroV = (x1 < x2&&v1 > v2)? v1:v2;
    int slowerKangro = (x1 == fasterKangro)? x2:x1;
    int slowerKangroV = (x1 == fasterKangro)? v2:v1;

    while (fasterKangro != slowerKangro) {
        if (fasterKangro > slowerKangro) {
            return "NO";
        }
        
        fasterKangro +=fasterKangroV;
        slowerKangro +=slowerKangroV;
    }

    return "YES";
}
//Answer optimization
string kangaroo(int x1, int v1, int x2, int v2) {
    if(v1<=v2) return "NO";
    return ((x1-x2) % (v1-v2) == 0)? "YES":"NO";
}
