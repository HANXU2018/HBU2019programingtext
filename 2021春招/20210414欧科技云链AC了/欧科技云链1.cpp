/*

<div style="overflow-y: auto; padding: 0px 10px; height: 725px;"><div class="subject-title test-title"><!---->
    [
    编程
    |20分
    ]
    <span>最接近的时间</span></div> <div class="question-intr">时间限制：C/C++ 1秒，其他语言 2秒<br>空间限制：C/C++ 262144K，其他语言 524288K<br>64bit IO Format: %lld</div> <div class="nk-warning">本题可使用本地IDE编码，不能使用本地已有代码，无跳出限制，编码后请点击“保存并调试”按钮进行代码提交。</div> <div class="module-box subject-box"><div class="module-head clearfix" style="padding-left: 0px; padding-right: 0px;"><h1>题目描述</h1></div> <div class="subject-main" style="padding-left: 0px; padding-right: 0px;"><div class="subject-content js-question-main js-question-math"><div class="subject-question"><div>  给定一个"HH:MM"格式的时间，重复使用其中的数字，求下一个最接近的时间。对于每个数字可以使用的次数，没有限制。 </div> <div>  你可以假定给的时间都是合法的，例如"01:34",&nbsp;"12:09"&nbsp;是合法的.&nbsp;"1:34",&nbsp;"12:9"&nbsp;是非法的。 </div></div> <div><h2 class="fs strong">输入描述:</h2> <pre><div>输入一行字符串"HH:MM"格式，长度为5</div><div>其中 00&lt;=HH&lt;24</div><div>00&lt;=MM&lt;60</div></pre> <h2 class="fs strong">输出描述:</h2> <pre>输出符合条件的HH:MM</pre></div> <div class="question-oi"><div class="question-oi-hd fs strong">示例1<span class="question-oi-tips">输入输出示例仅供调试，后台判题数据一般不包含示例</span></div> <div class="question-oi-bd"><div class="question-oi-mod"><h2>输入</h2> <a href="javascript:void(0);" class="code-copy-btn">复制</a></div> <div class="question-oi-cont"><pre>19:34</pre></div> <div class="question-oi-mod"><h2>输出</h2> <a href="javascript:void(0);" class="code-copy-btn">复制</a></div> <div class="question-oi-cont"><pre>19:39</pre></div> <div class="question-oi-mod"><h2>说明</h2></div> <div class="question-oi-cont"><pre>19:39是正确答案，因为他在19:34之后的5分钟。19:33不是正确答案，因为他在19:34之后的23小时59分钟。</pre></div></div></div><div class="question-oi"><div class="question-oi-hd fs strong">示例2<span class="question-oi-tips">输入输出示例仅供调试，后台判题数据一般不包含示例</span></div> <div class="question-oi-bd"><div class="question-oi-mod"><h2>输入</h2> <a href="javascript:void(0);" class="code-copy-btn">复制</a></div> <div class="question-oi-cont"><pre>22:59</pre></div> <div class="question-oi-mod"><h2>输出</h2> <a href="javascript:void(0);" class="code-copy-btn">复制</a></div> <div class="question-oi-cont"><pre>22:22</pre></div> <div class="question-oi-mod"><h2>说明</h2></div> <div class="question-oi-cont"><pre>最接近的时间是22:22，发生在22:59之后的下一天。</pre></div></div></div> <!----></div></div></div></div>
*/
/*
[ 编程 |20分 ] 最接近的时间
时间限制：C/C++ 1秒，其他语言 2秒
空间限制：C/C++ 262144K，其他语言 524288K
64bit IO Format: %lld
本题可使用本地IDE编码，不能使用本地已有代码，无跳出限制，编码后请点击“保存并调试”按钮进行代码提交。
题目描述
给定一个"HH:MM"格式的时间，重复使用其中的数字，求下一个最接近的时间。对于每个数字可以使用的次数，没有限制。
你可以假定给的时间都是合法的，例如"01:34", "12:09" 是合法的. "1:34", "12:9" 是非法的。
输入描述:
输入一行字符串"HH:MM"格式，长度为5
其中 00<=HH<24
00<=MM<60
输出描述:
输出符合条件的HH:MM
示例1输入输出示例仅供调试，后台判题数据一般不包含示例
输入
复制
19:34
输出
复制
19:39
说明
19:39是正确答案，因为他在19:34之后的5分钟。19:33不是正确答案，因为他在19:34之后的23小时59分钟。
示例2输入输出示例仅供调试，后台判题数据一般不包含示例
输入
复制
22:59
输出
复制
22:22
说明
最接近的时间是22:22，发生在22:59之后的下一天。

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
