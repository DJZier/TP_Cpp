#include <iostream>
#include <string>
#include <vector>
#include <list>

using namespace std;

int main(){
    /*vector<float> v1,v2;

    for (int i = 0 ; i<10 ; i++){
        v1.push_back((float)i/10);
    }

    for (long unsigned  int i = 0 ; i<v1.size();i++ ){
        cout << v1[i] << endl;
    }

    v2 = v1;

    for (long unsigned  int i = 0 ; i<((v2.size()/2)+1);i++ ){
        v2.pop_back();
    }

    for (long unsigned  int i = 0 ; i<v2.size();i++ ){
        cout << v2[i] << endl;
    }*/

    list<char> l1,l2;
    list<char>::iterator it;
    for (long unsigned  int i = 1 ; i<11;i++ ){
        l1.push_back(i+96);
    }

    for (it= l1.begin(); it!=l1.end();it++ ){
        cout << *it << endl;
    }

    l2 = l1;

    /*for (it= l2.begin(); it!=l2.end();it++ ){
        cout << *it << endl;
    }*/

    long unsigned int cnt = 0;
    for (it= l2.begin(); it!=l2.end();it++ ){
        
        if (cnt==(l2.size()/2)) {
            l2.erase(l2.begin(), it);
        }
        cnt++;
    }

    cout << "l2" << endl;

    for (it= l2.begin(); it!=l2.end();it++ ){
        cout << *it << endl;
    }




}