#include <iostream>
using namespace std;

int main(){
    int T;
    cin >> T;
    while(T > 0){
        string s; cin >> s;
        int count = 0;
        // �����޸�һ�κ����κ�N���ȵ����ֵ
        int mTime1 = 0,mTime2 = 0;
        // ��ʱ�޸�һ�λ����κ�ĳ���
        // ȡ��dp����
        int time1 = 0, time2 = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'N'){
                ++count; ++time1; ++time2;
            }
            else{
                // �����Ĳ���N�������ʱҪ�޸���֮ǰ����һ�Σ���ôtime2��time1�йأ������ʱҪ�޸���֮ǰΪ���޸Ĵ�������ôtime1��count�йء�
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
