#include <bits/stdc++.h>

using namespace std;

// Complete the encryption function below.
string encryption(string s) {
    int row,col;
    if(floor(sqrt(s.size()))*ceil(sqrt(s.size()))>=s.size()){
        row=floor(sqrt(s.size()));
        col=ceil(sqrt(s.size()));
    }
    else{
        row=ceil(sqrt(s.size()));
        col=row;
    }
    string output="";
    int i=0;
    int row_pos=0;
    int col_pos=0;
    while(i<s.size()){
        if((col_pos+row_pos*col)<s.size()){
            output+=s[col_pos+row_pos*col];
            i++;
        }
        row_pos++;
        if(row_pos==row){
            row_pos=0;
            col_pos++;
            output+=' ';
        }
    }
    return output;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = encryption(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
