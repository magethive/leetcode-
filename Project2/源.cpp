#define  _CRT_SECURE_NO_WARNINGS

//����һ������ x ����� x ��һ���������������� true �����򣬷��� false ��

//��������ָ���򣨴������ң��͵��򣨴������󣩶�����һ����������

//���磬121 �ǻ��ģ��� 123 ���ǡ�

#include<cstdio>
#include<climits>
#include<string>


using namespace std;


//�ַ������

bool isPalindrome(int x)
{
	if (x < 0)
	{
		return false;
	}

	string s = to_string(x);
	int left = 0,right = s.size()-1;
	while (left < right)
	{
		if (s[left] != s[right])
		{
			return false;
		}
			left++;
			right--;
	}
	return true;


}


//�������
//bool isPalindrome(int x)
//{
//	if (x < 0)
//		return false;
//	int ori = x;
//	int reverse = 0;
//	while (x > 0)
//	{
//		int digit = x % 10;
//		if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && digit > 7))
//			//������
//		{
//			return false;
//		}
//		reverse = reverse * 10 + digit;
//		x /= 10;
//		
//	}
//	return reverse == ori;
//
//
//}

int main()
{
	int i = isPalindrome(121);
	printf("%d",i);
	return 0;
}