#include<iostream>
#include<vector>
using namespace std;

void shell(vector<int>&a);

int main(){
    vector<int> a;
    int b[17] = {-1, 22, 36, 6, 79, 26, 45, 75, 13, 
                31, 62, 27, 76, 33, 16, 62, 47};
    for(int i = 0; i < 17; i++){
        a.push_back(b[i]); 
    }

    shell(a);
}

void shell(vector<int> &a){
    int n = a.size() - 1;

    int incr = n / 2;
    while (incr > 0){
        for(int i = incr + 1; i <= n; i++){
            int j = i - incr;
            while(j > 0){
                if(a[j] > a[j + incr]){
                    //swap(a[j], a[j + incr]);
                    int temp = a[j];
                    a[j] = a[j + incr];
                    a[j + incr] = temp;
                    j = j - incr;
                    
                }else{
                    j = 0;
                }
            }
            
        }
        for(int k = 1; k <= 16; k++){
            cout << a[k] << " ";
        }
        cout << endl;
        incr = incr / 2;
    }
    
}
