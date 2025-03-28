#define  _CRT_SECURE_NO_WARNINGS

//�������ְ������������ַ� : I�� V�� X�� L��C��D �� M��
//
//�ַ�          ��ֵ
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
//���磬 �������� 2 д�� II ����Ϊ�������е� 1 ��12 д�� XII ����Ϊ X + II �� 27 д��  XXVII, ��Ϊ XX + V + II ��
//
//ͨ������£�����������С�������ڴ�����ֵ��ұߡ���Ҳ�������������� 4 ��д�� IIII������ IV������ 1 ������ 5 ����ߣ�
// ����ʾ�������ڴ��� 5 ��С�� 1 �õ�����ֵ 4 ��ͬ���أ����� 9 ��ʾΪ IX���������Ĺ���ֻ�������������������
//
//I ���Է��� V(5) �� X(10) ����ߣ�����ʾ 4 �� 9��
//X ���Է��� L(50) �� C(100) ����ߣ�����ʾ 40 �� 90��
//C ���Է��� D(500) �� M(1000) ����ߣ�����ʾ 400 �� 900��
//����һ���������֣�����ת����������
//1 <= s.length <= 15
//s �����ַ�('I', 'V', 'X', 'L', 'C', 'D', 'M')
//��Ŀ���ݱ�֤ s ��һ����Ч���������֣��ұ�ʾ�����ڷ�Χ[1, 3999] ��
//��Ŀ�������������Է�������������д���򣬲�����ֿ�λ�������
//IL �� IM ���������Ӳ���������ĿҪ��49 Ӧ��д�� XLIX��999 Ӧ��д�� CMXCIX ��


#include<string>
#include<unordered_map>
#include<iostream>

using namespace std;

int romanToInt(string s) {
	unordered_map <char, int> m;
	m['I'] = 1;
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;
	int value = 0;
	int last = 0;
	for (int i = s.size()-1; i >= 0; i--)
	{
		int current = m[s[i]];
		if (current < last)
		{
			value = value - current;
		}
		else
		{
			value = value + current;
		}
		last = m[s[i]];
			
	}
	return value;





}

int main()
{
	string s;
	printf("s = ");
	cin >> s;
	int n = romanToInt(s);
	printf("%d", n);
	return 0;
}