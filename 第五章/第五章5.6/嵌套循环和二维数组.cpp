#include<iostream>
using namespace std;
int main()
{
	/*C++虽然没有提供二维数组类型，但可以创建每个元素都是数组的数组，达到的效果是一样的*/
	/*二维数组的声明*/int maxtemps[4][5];/*如果要存储五个城市在四年间的最高温度，则可以声明二维数组*/
	/*该声明说明maxtemps是一个包含4个元素的数组，每个元素又是一个数组，而且这个数组包含5个元素*/
	maxtemps[0][1] = 1561;/*将第一大数组的第二个元素赋值为3*/
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
	
	
	/*要打印数组中的所有内容，应使用for循环来改变行数，再用另一个被嵌套的for循环来改变列*/
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 5; col++) {
			cout << maxtemps[row][col] << "\t";/*打印完每行后打印一个换行符*/
		}
	}
	return 0;
};