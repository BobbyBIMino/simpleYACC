// Compiler2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include <iostream>
#include "data.h"
#include <stack>

using namespace std;

int main()
{
	
	string content;
	string action;
	Data data;
	fstream out("out.txt", ios::app | ios::out);
	//状态栈
	stack<int> stateStack;
	//符号栈
	stack<int> signStack;				   
	//初始状态 I0
	stateStack.push(0);
	// 符号栈栈底为 30
	signStack.push(30);
	//当前的栈顶状态
	int currentState;
	//当前读头下的符号，由data读入，已变成非终结符的编号。
	int currentSign;
	currentSign = data.nextToken();
	while (1)
	{
		currentState = stateStack.top();
		action = data.action[currentState][currentSign];
		//根据当前状态和当前符号找到对应的操作
		//shift(i)表示转移到i状态
		//reduce(i)表示以第i个产生式规约
		//acc表示接受

		//根据状态与非终结符找时相应的位置为空error时
		if (action =="")
		{
			out << "Grammer Error" << endl;
			return false;
		}
		
		//shift(int i )
		else if (action[0]=='S')
		{
			out << action << endl;
			int nextState = atoi(action.substr(1, action.size() - 1).c_str());
			//新的状态入栈
			stateStack.push(nextState);
			//新的输入符入栈
			signStack.push(currentSign);
			//shift操作
			currentSign = data.nextToken();

		}
		else if (action[0] == 'r')
		{
			
			int prodNum = atoi(action.substr(1, action.size() - 1).c_str());
			//符号栈状态栈同步出栈，出栈次数为产生式右部长度
			string wh = data.prods[prodNum].whole;
			for (int i = 0; i < data.prods[prodNum].size; i++)
			{
				signStack.pop();
				stateStack.pop();
			}

			signStack.push(data.prods[prodNum].left);//非终结符入栈
			currentState = stateStack.top();
			//找到对应状态的goto的状态I=goto（currentState,prods[i].left）
			int tempState = data.gotoT[currentState][data.prods[prodNum].left];
			out << action << "    " << data.prods[prodNum].whole << "        GOTO:   " << tempState<<endl;

			//如果goto状态不存在
				if (tempState==0)
			{
				out << "Grammer Error" << endl;
				break;
			}
			//否则跳转到新的状态
				else {
					stateStack.push(tempState);
				}
		}
		//接受状态。
		else if (action == "acc")
		{
			out << action << endl;
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

