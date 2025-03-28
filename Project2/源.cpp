#define  _CRT_SECURE_NO_WARNINGS

//给你一个整数 x ，如果 x 是一个回文整数，返回 true ；否则，返回 false 。

//回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

//例如，121 是回文，而 123 不是。

#include<cstdio>
#include<climits>
#include<string>


using namespace std;


//字符串求解

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


//整数求解
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
//			//检查溢出
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