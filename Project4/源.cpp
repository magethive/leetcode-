#define  _CRT_SECURE_NO_WARNINGS

//����һ���ַ��� s���ҵ� s ����� ���� �Ӵ���

#include<iostream>

#include<vector>
#include<string>
using namespace std;

string longestPalindrome(string s) 
{
	int n = s.size();
	if (n == 0)//�ر������ַ���Ϊ�� �������
		return " ";

	//dp[i][j]��ʾ��i��j���Ӵ��Ƿ�Ϊ����
	vector<vector<bool>>dp(n, vector<bool>(n, false));
	int start = 0;//�����Ӵ�����ʼλ��
	int maxlength = 1;//������Ӵ��ĳ���

	//����Ϊ1���ַ���
	for (int i = 0; i < n; i++)
	{
		dp[i][i] = true;
	}

	//������Ϊ2���ַ���
	for (int i = 0; i < n-1; i++)
	{
		if (s[i] == s[i + 1])//������������ַ���ȣ������ǹ��ɵ��Ӵ��ǻ���
		{
			dp[i][i + 1] = true;
			maxlength = 2;
			start = i;
		}
	}

	//�����ȴ���2���ַ���
	for (int len = 3; len <= n; len++)
	{
		for (int i = 0; i <= n - len; i++)
		{
			int j = i + len - 1;
			if (s[i] == s[j] && dp[i + 1][j - 1])
			{
				dp[i][j] = true;
				if (len > maxlength)
				{
					maxlength = len;
					start = i;
				}
			}
		}
	}

	return s.substr(start, maxlength);

}

int main()
{
	string s;
	cin >> s;
	s = longestPalindrome(s);
	cout << s<<endl;
	return 0;
}