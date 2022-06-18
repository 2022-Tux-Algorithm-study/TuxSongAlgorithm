#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){

        ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        vector<string> words;
        vector<string> tmp;

        int input;
        cin>>input;

        for(int i=0;i<input;i++){
                string word;
                cin>>word;
                tmp.push_back(word);
        }

        sort(tmp.begin(),tmp.end());

        for(int wordcnt=0; wordcnt<=50; wordcnt++)
                for(int i=0; i<tmp.size();i++){
                        if(wordcnt==tmp[i].length())
                                words.push_back(tmp[i]);
                }

        words.erase(unique(words.begin(),words.end()),words.end());
        for(int i=0; i<words.size();i++){
                cout<<words[i]<<endl;
        }
}
