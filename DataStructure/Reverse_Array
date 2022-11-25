/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */
 
 // problem link : https://www.hackerrank.com/challenges/arrays-ds/problem?isFullScreen=true
 
void swap(int & n1,int & n2){
    n1 = n1 + n2;
    n2 = n1 - n2;
    n1 = n1 - n2;
}

vector<int> reverseArray(vector<int> a) {
   int iteration,i=0,j= a.size()-1;

   if(a.size()%2 == 0){
       //even case
       iteration = a.size()/2;
   }else{
       iteration = (a.size()-1) /2;
   }
   
   cout<<iteration<<endl;
   while (iteration !=0) {
     swap(a[i++], a[j--]);
     iteration--;
   }
   return a;
}
