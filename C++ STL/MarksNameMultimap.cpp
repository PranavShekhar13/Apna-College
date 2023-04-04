#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int, multiset<string> > m;

   

    int n;

    cin>>n;

    while(n--){
    
    string name;
    int marks;
    cin>>name>>marks;

    m[marks*-1].insert(name);
    /*m[marks].insert(name); */

    }

     /*
      auto curr_it = --m.end();
      while(true){
      
         auto &students = (*it).second;
         int marks = (*it).first;

         for(auto &student: students){
             cout<<student<<" "<<marks<<endl;
         }
         if(curr_it==m.begin()) break;

         curr_it--;


     } */

    for(auto &value:m){                                                
        auto &students = value.second;
        int marks = value.first;

        for(auto &student: students){
            cout<<student<<" "<<marks*-1<<endl;
        }
    }



}