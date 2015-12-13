// Compiler2.cpp : �������̨Ӧ�ó������ڵ㡣
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
	//״̬ջ
	stack<int> stateStack;
	//����ջ
	stack<int> signStack;				   
	//��ʼ״̬ I0
	stateStack.push(0);
	// ����ջջ��Ϊ 30
	signStack.push(30);
	//��ǰ��ջ��״̬
	int currentState;
	//��ǰ��ͷ�µķ��ţ���data���룬�ѱ�ɷ��ս���ı�š�
	int currentSign;
	currentSign = data.nextToken();
	while (1)
	{
		currentState = stateStack.top();
		action = data.action[currentState][currentSign];
		//���ݵ�ǰ״̬�͵�ǰ�����ҵ���Ӧ�Ĳ���
		//shift(i)��ʾת�Ƶ�i״̬
		//reduce(i)��ʾ�Ե�i������ʽ��Լ
		//acc��ʾ����

		//����״̬����ս����ʱ��Ӧ��λ��Ϊ��errorʱ
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
			//�µ�״̬��ջ
			stateStack.push(nextState);
			//�µ��������ջ
			signStack.push(currentSign);
			//shift����
			currentSign = data.nextToken();

		}
		else if (action[0] == 'r')
		{
			
			int prodNum = atoi(action.substr(1, action.size() - 1).c_str());
			//����ջ״̬ջͬ����ջ����ջ����Ϊ����ʽ�Ҳ�����
			string wh = data.prods[prodNum].whole;
			for (int i = 0; i < data.prods[prodNum].size; i++)
			{
				signStack.pop();
				stateStack.pop();
			}

			signStack.push(data.prods[prodNum].left);//���ս����ջ
			currentState = stateStack.top();
			//�ҵ���Ӧ״̬��goto��״̬I=goto��currentState,prods[i].left��
			int tempState = data.gotoT[currentState][data.prods[prodNum].left];
			out << action << "    " << data.prods[prodNum].whole << "        GOTO:   " << tempState<<endl;

			//���goto״̬������
				if (tempState==0)
			{
				out << "Grammer Error" << endl;
				break;
			}
			//������ת���µ�״̬
				else {
					stateStack.push(tempState);
				}
		}
		//����״̬��
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

