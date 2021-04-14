/*
<div style="overflow-y: auto; padding: 0px 10px; height: 726px;"><div class="subject-title test-title"><!---->
    [
    编程
    |20分
    ]
    <span>最大值</span></div> <div class="question-intr">时间限制：C/C++ 1秒，其他语言 2秒<br>空间限制：C/C++ 262144K，其他语言 524288K<br>64bit IO Format: %lld</div> <div class="nk-warning">本题可使用本地IDE编码，不能使用本地已有代码，无跳出限制，编码后请点击“保存并调试”按钮进行代码提交。</div> <div class="module-box subject-box"><div class="module-head clearfix" style="padding-left: 0px; padding-right: 0px;"><h1>题目描述</h1></div> <div class="subject-main" style="padding-left: 0px; padding-right: 0px;"><div class="subject-content js-question-main js-question-math"><div class="subject-question"><div>  设计一个栈(Stack)的数据结构，数据类型为32位整形，具备入栈(push)、出栈(pop)、返回最大元素(max)功能方法，max实现返回栈内元素最大值，要求max函数的时间复杂度为O(1),入栈和出栈操作时间复杂度为O(1) </div> <div>  <br> </div> <div>  代码中一定要包括push方法，pop方法，max方法。其中要求这三个方法时间复杂度均为 O(1)。其中max方法在进行任意push和pop操作后，依然可以返回正确结果。 </div></div> <div><h2 class="fs strong">输入描述:</h2> <pre><div>输入为按照入栈顺序，排列的栈内元素</div><div>数量不超过1000个</div></pre> <h2 class="fs strong">输出描述:</h2> <pre><div>返回max函数的结果</div></pre></div> <div class="question-oi"><div class="question-oi-hd fs strong">示例1<span class="question-oi-tips">输入输出示例仅供调试，后台判题数据一般不包含示例</span></div> <div class="question-oi-bd"><div class="question-oi-mod"><h2>输入</h2> <a href="javascript:void(0);" class="code-copy-btn">复制</a></div> <div class="question-oi-cont"><pre>3 5 1 7 2 0</pre></div> <div class="question-oi-mod"><h2>输出</h2> <a href="javascript:void(0);" class="code-copy-btn">复制</a></div> <div class="question-oi-cont"><pre>7</pre></div> <!----></div></div> <!----></div></div></div></div>
*/
/**

	[ 编程 |20分 ] 最大值
时间限制：C/C++ 1秒，其他语言 2秒
空间限制：C/C++ 262144K，其他语言 524288K
64bit IO Format: %lld
本题可使用本地IDE编码，不能使用本地已有代码，无跳出限制，编码后请点击“保存并调试”按钮进行代码提交。
题目描述
设计一个栈(Stack)的数据结构，数据类型为32位整形，具备入栈(push)、出栈(pop)、返回最大元素(max)功能方法，max实现返回栈内元素最大值，要求max函数的时间复杂度为O(1),入栈和出栈操作时间复杂度为O(1)

代码中一定要包括push方法，pop方法，max方法。其中要求这三个方法时间复杂度均为 O(1)。其中max方法在进行任意push和pop操作后，依然可以返回正确结果。
输入描述:
输入为按照入栈顺序，排列的栈内元素
数量不超过1000个
输出描述:
返回max函数的结果
示例1输入输出示例仅供调试，后台判题数据一般不包含示例
输入
复制
3 5 1 7 2 0
输出
复制
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
