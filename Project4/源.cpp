#define  _CRT_SECURE_NO_WARNINGS

//给你一个字符串 s，找到 s 中最长的 回文 子串。

#include<iostream>

#include<vector>
#include<string>
using namespace std;

string longestPalindrome(string s) 
{
	int n = s.size();
	if (n == 0)//特别讨论字符串为“ ”的情况
		return " ";

	//dp[i][j]表示从i到j的子串是否为回文
	vector<vector<bool>>dp(n, vector<bool>(n, false));
	int start = 0;//回文子串的起始位置
	int maxlength = 1;//最长回文子串的长度

	//长度为1的字符串
	for (int i = 0; i < n; i++)
	{
		dp[i][i] = true;
	}

	//处理长度为2的字符串
	for (int i = 0; i < n-1; i++)
	{
		if (s[i] == s[i + 1])//如果相邻两个字符相等，则它们构成的子串是回文
		{
			dp[i][i + 1] = true;
			maxlength = 2;
			start = i;
		}
	}

	//处理长度大于2的字符串
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