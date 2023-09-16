#include<bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) {
    if (argc != 5) {
        cout << "thieu dau vao";
        exit(0);
    }
    int n;
    string path;
    for (int i = 1; i < argc; i++) {
        if (string(argv[i]) == string("-p")) {
            path = argv[i + 1];
        }
        else if (string(argv[i]) == string("-n")) {
            n = stoi(argv[i + 1]);
        }
    }
    fstream inFile;
    inFile.open(path, ios::in);
    map<string, int> mp;
    string token;
    while (inFile >> token) {
        string p = "";
        for (char x : token) {
            p += tolower(x);
        }
        mp[p]++;
    }
    // int res=INT_MIN;

    // string k;
    // for(auto it: mp){
    //     if(it.second>res){
    //         res= it.second;
    //         k=it.first;
    //     }
    // }
    // cout<< k <<" "<< res;
    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }



}