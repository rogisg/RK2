//Вариант №4
//Реализовать функцию подсчета букв в строке. Функция должна возвращать map <буква, количество>


#include <iostream>
#include <map>
#include <string>

using namespace std;

map<char, int> countletters(const string& str) {
    map<char, int> l;
    for (char ch : str) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            int C = ch | 32;
            l[C]++;
        }
    }


    return l;
}



int main() {
    string word = "AaaassbBb";
    map<char, int> res = countletters(word);
    for (const auto& pair : res) {
        cout << pair.first << ": " << pair.second << endl;
    }
    
    
    return 0;
}
