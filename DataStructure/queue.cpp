//Link : https://www.hackerrank.com/challenges/queue-using-two-stacks/problem?isFullScreen=true

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int q=0,query,front=0;
    vector<int>  queue;
    cin>>q;
    while (q !=0) {
        cin>>query;
        switch (query) {
            case 1:
                //enque number
                int data;
                cin >> data;
                queue.push_back(data);
                break;
            case 2:
                //deque
                front++;
                break;
            case 3:
                //print front element
                  cout<<queue[front]<<endl;  
        }
        q--;
    } 
    return 0;
}
