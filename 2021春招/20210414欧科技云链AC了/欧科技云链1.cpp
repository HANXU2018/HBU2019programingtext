/*

<div style="overflow-y: auto; padding: 0px 10px; height: 725px;"><div class="subject-title test-title"><!---->
    [
    ���
    |20��
    ]
    <span>��ӽ���ʱ��</span></div> <div class="question-intr">ʱ�����ƣ�C/C++ 1�룬�������� 2��<br>�ռ����ƣ�C/C++ 262144K���������� 524288K<br>64bit IO Format: %lld</div> <div class="nk-warning">�����ʹ�ñ���IDE���룬����ʹ�ñ������д��룬���������ƣ���������������沢���ԡ���ť���д����ύ��</div> <div class="module-box subject-box"><div class="module-head clearfix" style="padding-left: 0px; padding-right: 0px;"><h1>��Ŀ����</h1></div> <div class="subject-main" style="padding-left: 0px; padding-right: 0px;"><div class="subject-content js-question-main js-question-math"><div class="subject-question"><div>  ����һ��"HH:MM"��ʽ��ʱ�䣬�ظ�ʹ�����е����֣�����һ����ӽ���ʱ�䡣����ÿ�����ֿ���ʹ�õĴ�����û�����ơ� </div> <div>  ����Լٶ�����ʱ�䶼�ǺϷ��ģ�����"01:34",&nbsp;"12:09"&nbsp;�ǺϷ���.&nbsp;"1:34",&nbsp;"12:9"&nbsp;�ǷǷ��ġ� </div></div> <div><h2 class="fs strong">��������:</h2> <pre><div>����һ���ַ���"HH:MM"��ʽ������Ϊ5</div><div>���� 00&lt;=HH&lt;24</div><div>00&lt;=MM&lt;60</div></pre> <h2 class="fs strong">�������:</h2> <pre>�������������HH:MM</pre></div> <div class="question-oi"><div class="question-oi-hd fs strong">ʾ��1<span class="question-oi-tips">�������ʾ���������ԣ���̨��������һ�㲻����ʾ��</span></div> <div class="question-oi-bd"><div class="question-oi-mod"><h2>����</h2> <a href="javascript:void(0);" class="code-copy-btn">����</a></div> <div class="question-oi-cont"><pre>19:34</pre></div> <div class="question-oi-mod"><h2>���</h2> <a href="javascript:void(0);" class="code-copy-btn">����</a></div> <div class="question-oi-cont"><pre>19:39</pre></div> <div class="question-oi-mod"><h2>˵��</h2></div> <div class="question-oi-cont"><pre>19:39����ȷ�𰸣���Ϊ����19:34֮���5���ӡ�19:33������ȷ�𰸣���Ϊ����19:34֮���23Сʱ59���ӡ�</pre></div></div></div><div class="question-oi"><div class="question-oi-hd fs strong">ʾ��2<span class="question-oi-tips">�������ʾ���������ԣ���̨��������һ�㲻����ʾ��</span></div> <div class="question-oi-bd"><div class="question-oi-mod"><h2>����</h2> <a href="javascript:void(0);" class="code-copy-btn">����</a></div> <div class="question-oi-cont"><pre>22:59</pre></div> <div class="question-oi-mod"><h2>���</h2> <a href="javascript:void(0);" class="code-copy-btn">����</a></div> <div class="question-oi-cont"><pre>22:22</pre></div> <div class="question-oi-mod"><h2>˵��</h2></div> <div class="question-oi-cont"><pre>��ӽ���ʱ����22:22��������22:59֮�����һ�졣</pre></div></div></div> <!----></div></div></div></div>
*/
/*
[ ��� |20�� ] ��ӽ���ʱ��
ʱ�����ƣ�C/C++ 1�룬�������� 2��
�ռ����ƣ�C/C++ 262144K���������� 524288K
64bit IO Format: %lld
�����ʹ�ñ���IDE���룬����ʹ�ñ������д��룬���������ƣ���������������沢���ԡ���ť���д����ύ��
��Ŀ����
����һ��"HH:MM"��ʽ��ʱ�䣬�ظ�ʹ�����е����֣�����һ����ӽ���ʱ�䡣����ÿ�����ֿ���ʹ�õĴ�����û�����ơ�
����Լٶ�����ʱ�䶼�ǺϷ��ģ�����"01:34", "12:09" �ǺϷ���. "1:34", "12:9" �ǷǷ��ġ�
��������:
����һ���ַ���"HH:MM"��ʽ������Ϊ5
���� 00<=HH<24
00<=MM<60
�������:
�������������HH:MM
ʾ��1�������ʾ���������ԣ���̨��������һ�㲻����ʾ��
����
����
19:34
���
����
19:39
˵��
19:39����ȷ�𰸣���Ϊ����19:34֮���5���ӡ�19:33������ȷ�𰸣���Ϊ����19:34֮���23Сʱ59���ӡ�
ʾ��2�������ʾ���������ԣ���̨��������һ�㲻����ʾ��
����
����
22:59
���
����
22:22
˵��
��ӽ���ʱ����22:22��������22:59֮�����һ�졣

*/
#include<iostream>
using namespace std;
int main(){
	int num[4];
	int ans[16];
	int a,b,c,d;
	char ca,cb,cc,cd;
	scanf("%c%c:%c%c",&ca,&cb,&cc,&cd);
	a=ca-'0';
	b=cb-'0';
	c=cc-'0';
	d=cd-'0';
	num[0]=a;
	num[1]=b;
	num[2]=c;
	num[3]=d;
	int i = a*1000+b*100+c*10+d; 
	//cout<<i<<endl;
	while(true){
		i++;
		int dd = i%10;
		int cc = i/10%10;
		int bb = i/100%10;
		int aa = i/1000;
		if(cc>6)continue;
		if(i>2400){
			i=-1;
			continue;
		}
		if(i%100>=60){
			i=(i/100+1)*100;
		}
		if(aa==a||aa==b||aa==c||aa==d){
			if(bb==a||bb==b||bb==c||bb==d){
				
			if(cc==a||cc==b||cc==c||cc==d){
			if(dd==a||dd==b||dd==c||dd==d){
				cout<<aa<<bb<<":"<<cc<<dd<<endl;
				return 0;
		}
		}
		}	
		}
	}
	return 0;
} 
