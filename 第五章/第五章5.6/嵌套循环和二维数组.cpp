#include<iostream>
using namespace std;
int main()
{
	/*C++��Ȼû���ṩ��ά�������ͣ������Դ���ÿ��Ԫ�ض�����������飬�ﵽ��Ч����һ����*/
	/*��ά���������*/int maxtemps[4][5];/*���Ҫ�洢�������������������¶ȣ������������ά����*/
	/*������˵��maxtemps��һ������4��Ԫ�ص����飬ÿ��Ԫ������һ�����飬��������������5��Ԫ��*/
	maxtemps[0][1] = 1561;/*����һ������ĵڶ���Ԫ�ظ�ֵΪ3*/
	maxtemps[0][2] = 161;
	maxtemps[0][3] = 12136;
	maxtemps[0][4] = 15;
	maxtemps[0][0] = 3;
	maxtemps[1][0] = 3;
	maxtemps[1][1] = 3;
	maxtemps[1][2] = 3;
	maxtemps[1][3] = 3;
	maxtemps[1][4] = 3;
	maxtemps[2][0] = 3;
	maxtemps[2][1] = 3;
	maxtemps[2][2] = 3;
	maxtemps[2][3] = 3;
	maxtemps[2][4] = 3;
	maxtemps[3][0] = 3;
	maxtemps[3][1] = 3;
	maxtemps[3][2] = 3;
	maxtemps[3][3] = 3;
	maxtemps[3][4] = 3;
	
	
	/*Ҫ��ӡ�����е��������ݣ�Ӧʹ��forѭ�����ı�������������һ����Ƕ�׵�forѭ�����ı���*/
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << maxtemps[row][col] << "\t";/*��ӡ��ÿ�к��ӡһ�����з�*/
		}
	}
	return 0;
};