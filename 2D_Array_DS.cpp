#include <bits/stdc++.h>

using namespace std;

// Complete the hourglassSum function below.
int hourglassSum(vector<vector<int>> arr) {
    int x_pos=1;
    int y_pos=0;
    int max_sum=0;
    int sum=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i==1 && (j==0 || j==2)){
                continue;
            }
            else{
                max_sum+=arr[i][j];
            }
        }
    }
    
    while(y_pos<4){
        while(x_pos<4){
            sum=0;
            for(int i=x_pos;i<x_pos+3;i++){
                for(int j=y_pos;j<y_pos+3;j++){
                    if(i==x_pos+1 && (j==y_pos || j==y_pos+2)){
                        continue;
                    }
                    else{
                        sum+=arr[i][j];
                    }
                }
            }
            if(sum>max_sum){
                max_sum=sum;
            }
            x_pos++;
        }
        y_pos++;
        x_pos=0;
    }
    return max_sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
