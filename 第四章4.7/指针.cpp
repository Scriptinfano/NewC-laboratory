#include <iostream>;
using namespace std;
int main()
{
	/*ָ�벻�����Σ��������ͨ������ַ������������*/
	/*���ֱ�ӽ���ַ����ָ��*/
	/*int *pt;
	pt=0xB8000000;
	���������Ǵ���� 0xB8000000��ʮ����������ϵͳ����Ϊ�������������ǵ�ַ��Ҫ��ʮ����������Ϊ��ַʹ�ã�����ʹ��
	ǿ������ת��*/
	int* pt;
	pt = (int*)0xB8000000;//��ʮ��������תΪ��ַ��������ַ����ָ��pt
	cout << *pt;/*����ֱ�ӷ����Զ���ĵ�ֵַ�����ֱ�Ӷ��Զ����ַ��ָ����н����ã����ᷢ������û��Ȩ�޷����Զ���ĵ�ַ*/
	
	
	/*ָ����һ�ֱ�������洢����ֵ�ĵ�ַ��������ֵ����*/
	/*����ҵ���������ĵ�ַ���Ա���Ӧ�õ�ַ�����*/
	/*�磺home��һ��������&home��home�ĵ�ַ*/
	int donuts = 6;
	double cups = 4.5;

	cout << "donuts value = " << donuts;
	cout << " and donuts address = " << &donuts << endl;

	cout << "cups value = " << cups;
	cout << " and cups address = " << &cups << endl;

	/*�������ý�����������*������������ָ�룬���Եõ��õ�ַ���洢��ֵ���൱�ں�&�Ƿ��ġ� */
	int updates = 6;
	int* p_updates;
	p_updates = &updates;/*��updates�������ڵĵ�ַ����p_updates*/


	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;

	cout << "Addresses: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;
	/*�������֤����int����updates��ָ�����p_updates�൱����һöӲ�ҵ����棬��Ϊp_updatesָ��updates������*p_updates��updates
	�ȼۣ����Խ�ֱֵ�Ӹ���*p_updates�൱�ڸ�updates����Ϊ�����ߵȼ� */
	
	
	
	
	return 0;
}