/*
<div style="overflow-y: auto; padding: 0px 10px; height: 726px;"><div class="subject-title test-title"><!---->
    [
    ���
    |20��
    ]
    <span>���ֵ</span></div> <div class="question-intr">ʱ�����ƣ�C/C++ 1�룬�������� 2��<br>�ռ����ƣ�C/C++ 262144K���������� 524288K<br>64bit IO Format: %lld</div> <div class="nk-warning">�����ʹ�ñ���IDE���룬����ʹ�ñ������д��룬���������ƣ���������������沢���ԡ���ť���д����ύ��</div> <div class="module-box subject-box"><div class="module-head clearfix" style="padding-left: 0px; padding-right: 0px;"><h1>��Ŀ����</h1></div> <div class="subject-main" style="padding-left: 0px; padding-right: 0px;"><div class="subject-content js-question-main js-question-math"><div class="subject-question"><div>  ���һ��ջ(Stack)�����ݽṹ����������Ϊ32λ���Σ��߱���ջ(push)����ջ(pop)���������Ԫ��(max)���ܷ�����maxʵ�ַ���ջ��Ԫ�����ֵ��Ҫ��max������ʱ�临�Ӷ�ΪO(1),��ջ�ͳ�ջ����ʱ�临�Ӷ�ΪO(1) </div> <div>  <br> </div> <div>  ������һ��Ҫ����push������pop������max����������Ҫ������������ʱ�临�ӶȾ�Ϊ O(1)������max�����ڽ�������push��pop��������Ȼ���Է�����ȷ����� </div></div> <div><h2 class="fs strong">��������:</h2> <pre><div>����Ϊ������ջ˳�����е�ջ��Ԫ��</div><div>����������1000��</div></pre> <h2 class="fs strong">�������:</h2> <pre><div>����max�����Ľ��</div></pre></div> <div class="question-oi"><div class="question-oi-hd fs strong">ʾ��1<span class="question-oi-tips">�������ʾ���������ԣ���̨��������һ�㲻����ʾ��</span></div> <div class="question-oi-bd"><div class="question-oi-mod"><h2>����</h2> <a href="javascript:void(0);" class="code-copy-btn">����</a></div> <div class="question-oi-cont"><pre>3 5 1 7 2 0</pre></div> <div class="question-oi-mod"><h2>���</h2> <a href="javascript:void(0);" class="code-copy-btn">����</a></div> <div class="question-oi-cont"><pre>7</pre></div> <!----></div></div> <!----></div></div></div></div>
*/
/**

	[ ��� |20�� ] ���ֵ
ʱ�����ƣ�C/C++ 1�룬�������� 2��
�ռ����ƣ�C/C++ 262144K���������� 524288K
64bit IO Format: %lld
�����ʹ�ñ���IDE���룬����ʹ�ñ������д��룬���������ƣ���������������沢���ԡ���ť���д����ύ��
��Ŀ����
���һ��ջ(Stack)�����ݽṹ����������Ϊ32λ���Σ��߱���ջ(push)����ջ(pop)���������Ԫ��(max)���ܷ�����maxʵ�ַ���ջ��Ԫ�����ֵ��Ҫ��max������ʱ�临�Ӷ�ΪO(1),��ջ�ͳ�ջ����ʱ�临�Ӷ�ΪO(1)

������һ��Ҫ����push������pop������max����������Ҫ������������ʱ�临�ӶȾ�Ϊ O(1)������max�����ڽ�������push��pop��������Ȼ���Է�����ȷ�����
��������:
����Ϊ������ջ˳�����е�ջ��Ԫ��
����������1000��
�������:
����max�����Ľ��
ʾ��1�������ʾ���������ԣ���̨��������һ�㲻����ʾ��
����
����
3 5 1 7 2 0
���
����
7
*
/
#include<iostream>
using namespace std;
int main(){
	int miax =0;
	int t;
    cin>>miax;
	while(cin>>t){
		cout<<miax<<t<<endl;
		if(t>miax)miax=t;
	}cout<<miax<<endl;
	return 0;
}
