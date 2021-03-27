#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;
struct TreeNode{
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL){}
	
};
void tls(string &input){
	input.erase(input.begin(),find_if(input.begin(),input.end(),[](int ch){
		return !isspace(ch);
	}));
}
void trs(string &input){
	input.erase(find_if(input.rbegin(),input.rend(),[](int ch){
		return !isspace(ch);
	}).base(),input.end());
}
TreeNode* stringToTreeNode(string input){
	tls(input);
	trs(input);
	input = input.substr(1,input.length()-2);
	string item;
	stringstream ss;
	ss.str(input);
	getline(ss,item,',');
	TreeNode* root = new TreeNode(stoi(item));
	//cout<<item<<endl;
	queue<TreeNode*> nodeQueue;
	nodeQueue.push(root);
	while(true){
		TreeNode * node = nodeQueue.front();
		nodeQueue.pop();
		if(!getline(ss,item,',')){
			break;
		}
		tls(item);
		//cout<<item<<endl;
		if(item != "null"){
			int leftNumber = stoi(item);
			node->left = new TreeNode(leftNumber);
			nodeQueue.push(node->left);
		}
		if(!getline(ss,item,',')){
			break;
		}
		tls(item);
		//cout<<item<<endl; 
		if(item!="null"){
			int rightNumber = stoi(item);
			node->left = new TreeNode(rightNumber);
			nodeQueue.push(node->right);
		}
	}
	return root;
} 
void solute(TreeNode *root, int sum){
	if(root == nullptr){
		return ;
	}
	queue<TreeNode *>que_node;
	queue<int> que_val;
	que_node.push(root);
	que_val.push(root->val);
	while(!que_node.empty()){
		TreeNode *now = que_node.front();
		int temp = que_val.front();
		que_node.pop();
		que_val.pop();
		if(now->left == nullptr && now->right == nullptr){
			if(temp == sum){
				cout<<"[";
				while(que_val.size()!=0){
					cout<<que_val.front();
					que_val.pop();
					if(que_val.size()>1){
						cout<<",";
					}
				}cout<<"]"<<endl;
				return ;
			}
			continue;
		}
		if(now->left != nullptr){
			que_node.push(now->left);
			que_val.push(now->left->val+temp);
		} 
		if(now->right != nullptr){
			que_node.push(now->right);
			que_val.push(now->right->val+temp);
		}
	}
	cout<<"[]"<<endl;
}
int main(){
	string s;
	cin>>s;
	int target;
	cin>>target;
	//cout<<s<<endl<<target;
	TreeNode* root = stringToTreeNode(s);
	//cout<<root->val<<endl;
	//cout<<"ceshi"<<endl;
	solute(root,target);
	return 0;
}
