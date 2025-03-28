#define  _CRT_SECURE_NO_WARNINGS
//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target
//  的那 两个 整数，并返回它们的数组下标。
// 你可以假设每种输入只会对应一个答案，并且你不能使用两次相同的元素。
// 你可以按任意顺序返回答案。
#include <cstdio>
#include<vector>
#include<unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target)
{
	unordered_map <int, int> map;
	int i;
	for (i = 0; i < nums.size();i++)
	{
		int comp = target - nums[i];
		if (map.find(comp) != map.end())
	//.find返回值是一个迭代器，如果找到comp，find会返回指向该元素的迭代器
	//否则返回map.end
		{
			return{ map[comp], i };
		}
		map[nums[i]] = i;
	}
	return {};

}
int main()
{
	vector<int> nums= { 3,2,4 };//试运行
	int target = 6;
	vector<int> result = twoSum(nums,target);
	printf("%d,%d", result[0], result[1]);




	return 0;
}