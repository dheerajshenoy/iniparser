#include "inipraser.hpp"
#include <iostream>

void printvector(vector<string> v) {
    for(int i=0; i<v.size(); i++)
        cout << v.at(i) << endl;
}

void pprintvector(vector<vector<string>> v) {
    for(int i=0; i<v.size(); i++)
        for(int j=0; j<v.at(i).size(); j++)
            cout << v.at(i).at(j) << endl;
}
int main() {
    vector<string>s, ak;
    iniparser obj;
    //obj.Open("/home/redundant/dheeraj/cpp/projects/iniparser/file.ini", "[]", "=");
    obj.Open("/home/redundant/.config/customwm/config.ini", "[]", "=");
    vector<vector<string>> a;
    a = obj.getKeyValuePairTillNextSection("KEYS", "=");
    pprintvector(a);
    obj.Close();
    return 0;
}
