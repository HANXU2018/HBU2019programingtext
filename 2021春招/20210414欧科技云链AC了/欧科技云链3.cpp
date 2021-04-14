/*
<div style="overflow-y: auto; padding: 0px 10px; height: 725px;"><div class="subject-title test-title"><!---->
    [
    编程
    |20分
    ]
    <span>字符串乘法</span></div> <div class="question-intr">时间限制：C/C++ 1秒，其他语言 2秒<br>空间限制：C/C++ 262144K，其他语言 524288K<br>64bit IO Format: %lld</div> <div class="nk-warning">本题可使用本地IDE编码，不能使用本地已有代码，无跳出限制，编码后请点击“保存并调试”按钮进行代码提交。</div> <div class="module-box subject-box"><div class="module-head clearfix" style="padding-left: 0px; padding-right: 0px;"><h1>题目描述</h1></div> <div class="subject-main" style="padding-left: 0px; padding-right: 0px;"><div class="subject-content js-question-main js-question-math"><div class="subject-question"><div>  给出2个非负十进制整数字符串num1和num2，输出num1和num2的乘积。 </div> <div>  不允许使用编程语言自带的BigInt之类的库。 </div></div> <div><h2 class="fs strong">输入描述:</h2> <pre><div>第一行输入num1</div><div>第二行输入num2</div><div>其中1&nbsp; &lt;= num1.length, num2.length &lt;= 200</div><div>num1和num2 只包含数字</div><div>num1和num2都没有前导的0，除非就是0本身。</div></pre> <h2 class="fs strong">输出描述:</h2> <pre><div>输出num1和num2的乘积</div></pre></div> <div class="question-oi"><div class="question-oi-hd fs strong">示例1<span class="question-oi-tips">输入输出示例仅供调试，后台判题数据一般不包含示例</span></div> <div class="question-oi-bd"><div class="question-oi-mod"><h2>输入</h2> <a href="javascript:void(0);" class="code-copy-btn">复制</a></div> <div class="question-oi-cont"><pre>2
3</pre></div> <div class="question-oi-mod"><h2>输出</h2> <a href="javascript:void(0);" class="code-copy-btn">复制</a></div> <div class="question-oi-cont"><pre>6</pre></div> <!----></div></div><div class="question-oi"><div class="question-oi-hd fs strong">示例2<span class="question-oi-tips">输入输出示例仅供调试，后台判题数据一般不包含示例</span></div> <div class="question-oi-bd"><div class="question-oi-mod"><h2>输入</h2> <a href="javascript:void(0);" class="code-copy-btn">复制</a></div> <div class="question-oi-cont"><pre>123
456</pre></div> <div class="question-oi-mod"><h2>输出</h2> <a href="javascript:void(0);" class="code-copy-btn">复制</a></div> <div class="question-oi-cont"><pre>56088</pre></div> <!----></div></div><div class="question-oi"><div class="question-oi-hd fs strong">示例3<span class="question-oi-tips">输入输出示例仅供调试，后台判题数据一般不包含示例</span></div> <div class="question-oi-bd"><div class="question-oi-mod"><h2>输入</h2> <a href="javascript:void(0);" class="code-copy-btn">复制</a></div> <div class="question-oi-cont"><pre>12345678987654321
98765432123456789</pre></div> <div class="question-oi-mod"><h2>输出</h2> <a href="javascript:void(0);" class="code-copy-btn">复制</a></div> <div class="question-oi-cont"><pre>1219326320073159566072245112635269</pre></div> <!----></div></div> <!----></div></div></div></div>
*/

/*

[ 编程 |20分 ] 字符串乘法
时间限制：C/C++ 1秒，其他语言 2秒
空间限制：C/C++ 262144K，其他语言 524288K
64bit IO Format: %lld
本题可使用本地IDE编码，不能使用本地已有代码，无跳出限制，编码后请点击“保存并调试”按钮进行代码提交。
题目描述
给出2个非负十进制整数字符串num1和num2，输出num1和num2的乘积。
不允许使用编程语言自带的BigInt之类的库。
输入描述:
第一行输入num1
第二行输入num2
其中1  <= num1.length, num2.length <= 200
num1和num2 只包含数字
num1和num2都没有前导的0，除非就是0本身。
输出描述:
输出num1和num2的乘积
示例1输入输出示例仅供调试，后台判题数据一般不包含示例
输入
复制
2
3
输出
复制
6
示例2输入输出示例仅供调试，后台判题数据一般不包含示例
输入
复制
123
456
输出
复制
56088
示例3输入输出示例仅供调试，后台判题数据一般不包含示例
输入
复制
12345678987654321
98765432123456789
输出
复制
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
