#include<bits/stdc++.h>
using namespace std;
const int len=15;
const int N=1009;
struct inst{
	int type;
	int outputvar;
	string outputstr;
	int ifvar1;
	int ifvar2;
	int howif;
	int whereif;
	int supvar;
	int setvar;
	int setval;
	int calctype;
	int arg1;
	int arg2;
	int arg3;
	int eqvar1;
	int eqvar2;
} ins[N];
map<int,int> var;
void excuse(int t,int line,int dig){
	inst now=ins[line];
	if(now.type==0||dig<0)return;
	if(now.type==1){
		cout<<now.outputstr;
		excuse(t,line+1,dig);
	}
	if(now.type==2){
		cout<<var[var[now.outputvar]];
		excuse(t,line+1,dig);
	}
	if(now.type==3){
		now.ifvar1=var[now.ifvar1];
		now.ifvar2=var[now.ifvar2];
		if(now.howif==1){
			if(var[now.ifvar1]==var[now.ifvar2]){
				excuse(t,line+1,dig);
			}
			else{
				excuse(t,now.whereif,dig);
			}
		}
		if(now.howif==2){
			if(var[now.ifvar1]!=var[now.ifvar2]){
				excuse(t,line+1,dig);
			}
			else{
				excuse(t,now.whereif,dig);
			}
		}
		if(now.howif==3){
			if(!(t&1)){
				excuse(t>>1,line+1,dig-1);
			}
			else{
				excuse(t>>1,now.whereif,dig-1);
			}
		}
		if(now.howif==4){
			if(t&1){
				excuse(t>>1,line+1,dig-1);
			}
			else{
				excuse(t>>1,now.whereif,dig-1);
			}
		}
		if(now.howif==5){
			if(var[now.ifvar1]<var[now.ifvar2]){
				excuse(t,line+1,dig);
			}
			else{
				excuse(t,now.whereif,dig);
			}
		}
		if(now.howif==6){
			if(var[now.ifvar1]<=var[now.ifvar2]){
				excuse(t,line+1,dig);
			}
			else{
				excuse(t,now.whereif,dig);
			}
		}
		if(now.howif==7){
			if(var[now.ifvar1]>var[now.ifvar2]){
				excuse(t,line+1,dig);
			}
			else{
				excuse(t,now.whereif,dig);
			}
		}
		if(now.howif==8){
			if(var[now.ifvar1]>=var[now.ifvar2]){
				excuse(t,line+1,dig);
			}
			else{
				excuse(t,now.whereif,dig);
			}
		}
	}
	if(now.type==4){
		int p=((1<<dig)-1)-t;
		int x=dig;
		for(int i=dig-1;i>=0;i--){
			if((p>>i)&1){
				x=dig-i;
				break;
			}
		}
		now.supvar=var[now.supvar];
		var[now.supvar]=x; 
		excuse(t,line+1,dig-x);
	}
	if(now.type==5){
		var[now.setvar]=now.setval;
		excuse(t,line+1,dig);
	}
	if(now.type==6){
		now.arg1=var[now.arg1];
		now.arg2=var[now.arg2];
		now.arg3=var[now.arg3];
		if(now.calctype==1)var[now.arg3]=var[now.arg1]+var[now.arg2];
		if(now.calctype==2)var[now.arg3]=var[now.arg1]-var[now.arg2];
		excuse(t,line+1,dig);
	}
	if(now.type==7){
		var[now.eqvar1]=var[var[now.eqvar2]];
		excuse(t,line+1,dig);
	}
	if(now.type==8){
		var[var[now.setvar]]=now.setval;
		excuse(t,line+1,dig);
	}
}
void input(){
	cout<<"Do you want Guide?(0/1)";
	bool g;
	cin>>g;
	int nI=1;
	while(true){
		if(g)cout<<"insruction type[0:end 1:outputtext 2:outputvar 3:if 4:sup 5:set 6:calculate 7:copy 8:varset]";
		cin>>ins[nI].type;
		if(ins[nI].type==0)break;
		if(ins[nI].type==1){
			if(g)cout<<"OutPuttext:";
			cin>>ins[nI].outputstr;
		}
		if(ins[nI].type==2){
			if(g)cout<<"OutPutvar:";
			cin>>ins[nI].outputvar;
		}
		if(ins[nI].type==3){
			if(g)cout<<"Condition[1:equal 2:notequal 3:firsthalf 4:secondhalf]";
			cin>>ins[nI].howif;
			if(g)cout<<"LeftVar:";
			cin>>ins[nI].ifvar1;
			if(g)cout<<"RightVar:";
			cin>>ins[nI].ifvar1;
			if(g)cout<<"If not satisficed,jump to ins:";
			cin>>ins[nI].whereif;
		}
		if(ins[nI].type==4){
			if(g)cout<<"Supvar:";
			cin>>ins[nI].supvar;
		}
		if(ins[nI].type==5){
			if(g)cout<<"Setvar:";
			cin>>ins[nI].setvar;
			if(g)cout<<"Setval:";
			cin>>ins[nI].setval;
		}
		if(ins[nI].type==6){
			if(g)cout<<"Operator[1:add 2:sub]";
			cin>>ins[nI].calctype;
			if(g)cout<<"VarA:";
			cin>>ins[nI].arg1;
			if(g)cout<<"VarB:";
			cin>>ins[nI].arg2;
			if(g)cout<<"Varres:";
			cin>>ins[nI].arg3;
		}
		if(ins[nI].type==7){
			if(g)cout<<"VarA:";
			cin>>ins[nI].eqvar1;
			if(g)cout<<"VarB:";
			cin>>ins[nI].eqvar2;
		}
		if(ins[nI].type==8){
			if(g)cout<<"Setvar:";
			cin>>ins[nI].setvar;
			if(g)cout<<"Setval:";
			cin>>ins[nI].setval;
		}
		nI++;
	}
}
int main(){
	input();
	cout<<"Instruction is prepared.\n";
	system("pause");
	for(int i=0;i<(1<<len);i++){
		excuse(i,1,len);
		cout<<endl;
	} 
	return 0;
}
