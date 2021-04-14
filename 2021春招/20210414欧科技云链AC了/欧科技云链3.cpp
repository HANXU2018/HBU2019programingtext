/*
<div style="overflow-y: auto; padding: 0px 10px; height: 725px;"><div class="subject-title test-title"><!---->
    [
    ���
    |20��
    ]
    <span>�ַ����˷�</span></div> <div class="question-intr">ʱ�����ƣ�C/C++ 1�룬�������� 2��<br>�ռ����ƣ�C/C++ 262144K���������� 524288K<br>64bit IO Format: %lld</div> <div class="nk-warning">�����ʹ�ñ���IDE���룬����ʹ�ñ������д��룬���������ƣ���������������沢���ԡ���ť���д����ύ��</div> <div class="module-box subject-box"><div class="module-head clearfix" style="padding-left: 0px; padding-right: 0px;"><h1>��Ŀ����</h1></div> <div class="subject-main" style="padding-left: 0px; padding-right: 0px;"><div class="subject-content js-question-main js-question-math"><div class="subject-question"><div>  ����2���Ǹ�ʮ���������ַ���num1��num2�����num1��num2�ĳ˻��� </div> <div>  ������ʹ�ñ�������Դ���BigInt֮��Ŀ⡣ </div></div> <div><h2 class="fs strong">��������:</h2> <pre><div>��һ������num1</div><div>�ڶ�������num2</div><div>����1&nbsp; &lt;= num1.length, num2.length &lt;= 200</div><div>num1��num2 ֻ��������</div><div>num1��num2��û��ǰ����0�����Ǿ���0����</div></pre> <h2 class="fs strong">�������:</h2> <pre><div>���num1��num2�ĳ˻�</div></pre></div> <div class="question-oi"><div class="question-oi-hd fs strong">ʾ��1<span class="question-oi-tips">�������ʾ���������ԣ���̨��������һ�㲻����ʾ��</span></div> <div class="question-oi-bd"><div class="question-oi-mod"><h2>����</h2> <a href="javascript:void(0);" class="code-copy-btn">����</a></div> <div class="question-oi-cont"><pre>2
3</pre></div> <div class="question-oi-mod"><h2>���</h2> <a href="javascript:void(0);" class="code-copy-btn">����</a></div> <div class="question-oi-cont"><pre>6</pre></div> <!----></div></div><div class="question-oi"><div class="question-oi-hd fs strong">ʾ��2<span class="question-oi-tips">�������ʾ���������ԣ���̨��������һ�㲻����ʾ��</span></div> <div class="question-oi-bd"><div class="question-oi-mod"><h2>����</h2> <a href="javascript:void(0);" class="code-copy-btn">����</a></div> <div class="question-oi-cont"><pre>123
456</pre></div> <div class="question-oi-mod"><h2>���</h2> <a href="javascript:void(0);" class="code-copy-btn">����</a></div> <div class="question-oi-cont"><pre>56088</pre></div> <!----></div></div><div class="question-oi"><div class="question-oi-hd fs strong">ʾ��3<span class="question-oi-tips">�������ʾ���������ԣ���̨��������һ�㲻����ʾ��</span></div> <div class="question-oi-bd"><div class="question-oi-mod"><h2>����</h2> <a href="javascript:void(0);" class="code-copy-btn">����</a></div> <div class="question-oi-cont"><pre>12345678987654321
98765432123456789</pre></div> <div class="question-oi-mod"><h2>���</h2> <a href="javascript:void(0);" class="code-copy-btn">����</a></div> <div class="question-oi-cont"><pre>1219326320073159566072245112635269</pre></div> <!----></div></div> <!----></div></div></div></div>
*/

/*

[ ��� |20�� ] �ַ����˷�
ʱ�����ƣ�C/C++ 1�룬�������� 2��
�ռ����ƣ�C/C++ 262144K���������� 524288K
64bit IO Format: %lld
�����ʹ�ñ���IDE���룬����ʹ�ñ������д��룬���������ƣ���������������沢���ԡ���ť���д����ύ��
��Ŀ����
����2���Ǹ�ʮ���������ַ���num1��num2�����num1��num2�ĳ˻���
������ʹ�ñ�������Դ���BigInt֮��Ŀ⡣
��������:
��һ������num1
�ڶ�������num2
����1  <= num1.length, num2.length <= 200
num1��num2 ֻ��������
num1��num2��û��ǰ����0�����Ǿ���0����
�������:
���num1��num2�ĳ˻�
ʾ��1�������ʾ���������ԣ���̨��������һ�㲻����ʾ��
����
����
2
3
���
����
6
ʾ��2�������ʾ���������ԣ���̨��������һ�㲻����ʾ��
����
����
123
456
���
����
56088
ʾ��3�������ʾ���������ԣ���̨��������һ�㲻����ʾ��
����
����
12345678987654321
98765432123456789
���
����
1219326320073159566072245112635269
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	if(s1=="0"||s2=="0"){
		cout<<"0"<<endl;
		return 0;
	}
	vector<int>ans(s1.size()+s2.size());
	int t=0;
	int i,j;
	for(i=0;i<s1.size();i++){
		for(j=0;j<s2.size();j++){
			ans[i+j+1]+=(s1[i]-'0')*(s2[j]-'0');
		}
	}
	for(int k=ans.size()-1;k>0;k--){
		if(ans[k]>10){
			ans[k-1]+=ans[k]/10;
			ans[k]%=10;
		}
	}
	int flag=0;
	for(int i=0;i<ans.size();i++){
		if(flag==0&&ans[i]==0){
			continue;
		}flag=1;
		cout<<ans[i];
	}
	return 0;
}
