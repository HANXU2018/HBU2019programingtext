#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T > 0){
        string s; cin >> s;
        int count = 0;
        // 保存修改一次和两次后N长度的最大值
        int mTime1 = 0,mTime2 = 0;
        // 此时修改一次或两次后的长度
        // 取代dp数组
        int time1 = 0, time2 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'N'){
                ++count; ++time1; ++time2;
            }
            else{
                // 遇到的不是N，如果此时要修改且之前改了一次，那么time2和time1有关；如果此时要修改且之前为用修改次数，那么time1和count有关。
                time2 = time1 + 1;
                time1 = count + 1;
                count = 0;
            }
            mTime1 = mTime1 > time1 ? mTime1 : time1;
            mTime2 = mTime2 > time2 ? mTime2 : time2;
        }
        cout << mTime2 << endl;;
        --T;
    }
    return 0;
}
