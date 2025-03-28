#define  _CRT_SECURE_NO_WARNINGS

//罗马数字包含以下七种字符 : I， V， X， L，C，D 和 M。
//
//字符          数值
//I             1
//V             5
//X             10
//L             50
//C             100
//D             500
//M             1000
//例如， 罗马数字 2 写做 II ，即为两个并列的 1 。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。
//
//通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，
// 所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：
//
//I 可以放在 V(5) 和 X(10) 的左边，来表示 4 和 9。
//X 可以放在 L(50) 和 C(100) 的左边，来表示 40 和 90。
//C 可以放在 D(500) 和 M(1000) 的左边，来表示 400 和 900。
//给定一个罗马数字，将其转换成整数。
//1 <= s.length <= 15
//s 仅含字符('I', 'V', 'X', 'L', 'C', 'D', 'M')
//题目数据保证 s 是一个有效的罗马数字，且表示整数在范围[1, 3999] 内
//题目所给测试用例皆符合罗马数字书写规则，不会出现跨位等情况。
//IL 和 IM 这样的例子并不符合题目要求，49 应该写作 XLIX，999 应该写作 CMXCIX 。


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