#include<iostream>
using namespace std;
char fuhao[100];
int main(){
	char c;
	c=getchar();
	int count=0;
	while(1){
		if(c=='.'){
			c=getchar();
			if(c=='\n'){
				break;
			}
		}
		if(c=='('||c==')'||c=='['||c==']'||c=='{'||c=='}'){
			fuhao[count++]=c;
			c=getchar();
		}
		else if(c=='/'||c=='*'){
			char d=c;
			c=getchar();
			if(d=='/'&&c=='*'){
				fuhao[count++]='A';	
				c=getchar();
			}
			else if(d=='*'&&c=='/'){
				fuhao[count++]='B';
				c=getchar();
			}
				
		}
		else{
			c=getchar();
		}
	}//获取符号
	 
	
/*	for(int i=0;i<100;i++){
		printf("%c",fuhao[i]);
	}
	cout<<endl;
*/	
	 char zuo[100];
	 int top=0;
	 for(int i=0;i<100;i++){
	 	if(fuhao[i]=='('||fuhao[i]=='['||fuhao[i]=='{'||fuhao[i]=='A'){
	 		zuo[top++]=fuhao[i];
		 }//存进去 
		if(fuhao[i]==')'){
	 		if(top>0&&zuo[top-1]=='('){
	 			top--;
			 }
			 else{
			 	if(top==0){
			 	printf("NO\n?-)");
			 	return 0;
			 }
			 
			 if(zuo[top-1]=='A'){
			printf("NO\n/*-?");
			 	return 0;
		}if(zuo[top-1]=='('){
			printf("NO\n(-?");
			 	return 0;
		}
		if(zuo[top-1]=='['){
			printf("NO\n[-?");
			 	return 0;
		}
		if(zuo[top-1]=='{'){
			printf("NO\n{-?");
			 	return 0;
		}
		
			 }
		 }
		 if(fuhao[i]==']'){
	 		if(top>0&&zuo[top-1]=='['){
	 			top--;
			 }
			 else{
			 	if(top==0){
			 	printf("NO\n?-]");
			 	return 0;
			 }
			 if(zuo[top-1]=='A'){
			printf("NO\n/*-?");
			 	return 0;
		}if(zuo[top-1]=='('){
			printf("NO\n(-?");
			 	return 0;
		}
		if(zuo[top-1]=='['){
			printf("NO\n[-?");
			 	return 0;
		}
		if(zuo[top-1]=='{'){
			printf("NO\n{-?");
			 	return 0;
		}
		
			 }
		 }
		 if(fuhao[i]=='}'){
	 		if(top>0&&zuo[top-1]=='{'){
	 			top--;
			 }
			 else{
			 	if(top==0){
			 		printf("NO\n?-}");
			 		return 0;
				 } 
				 if(zuo[top-1]=='A'){
			printf("NO\n/*-?");
			 	return 0;
		}if(zuo[top-1]=='('){
			printf("NO\n(-?");
			 	return 0;
		}
		if(zuo[top-1]=='['){
			printf("NO\n[-?");
			 	return 0;
		}
		if(zuo[top-1]=='{'){
			printf("NO\n{-?");
			 	return 0;
		}
		
			 	
			 }
		 }
		 if(fuhao[i]=='B'){
	 		if(top>0&&zuo[top-1]=='A'){
	 			top--;
			 }
			 else{
			 	if(top==0){
			 	printf("NO\n?-*/");
			 	return 0;
				 }
				 if(zuo[top-1]=='A'){
			printf("NO\n/*-?");
			 	return 0;
		}if(zuo[top-1]=='('){
			printf("NO\n(-?");
			 	return 0;
		}
		if(zuo[top-1]=='['){
			printf("NO\n[-?");
			 	return 0;
		}
		if(zuo[top-1]=='{'){
			printf("NO\n{-?");
			 	return 0;
		}
		
			 }
		 }
	 } 
	if(top>0){
		if(zuo[top-1]=='A'){
			printf("NO\n/*-?");
			 	return 0;
		}if(zuo[top-1]=='('){
			printf("NO\n(-?");
			 	return 0;
		}
		if(zuo[top-1]=='['){
			printf("NO\n[-?");
			 	return 0;
		}
		if(zuo[top-1]=='{'){
			printf("NO\n{-?");
			 	return 0;
		}
		
	} 
	if(top==0){
		cout<<"YES";
	}
	
	return 0;
} 
