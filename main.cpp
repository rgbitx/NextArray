#include <iostream>
#include <vector>


using namespace std;

vector<int> getNext(string p) {

    int plen = p.size();
    vector<int> next(plen,0);
    next[0] = -1;

    int j,k;
    for(j=0;j<plen-1;j++){
        k=next[j];

        while(k!=-1 && p[k]!=p[j]){
            k=next[k];
        }

        next[j+1]=k+1;
    }

    return next;

}


int main() {
    cout << "Hello, World!" << endl;

    string str="aaabaaa";

    vector<int> ret=getNext(str);

    for(int i=0;i<ret.size();i++)
        cout<<ret[i]<<" ";

    return 0;
}