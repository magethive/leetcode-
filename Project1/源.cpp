#define  _CRT_SECURE_NO_WARNINGS
//����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ target
//  ���� ���� ���������������ǵ������±ꡣ
// ����Լ���ÿ������ֻ���Ӧһ���𰸣������㲻��ʹ��������ͬ��Ԫ�ء�
// ����԰�����˳�򷵻ش𰸡�
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
	//.find����ֵ��һ��������������ҵ�comp��find�᷵��ָ���Ԫ�صĵ�����
	//���򷵻�map.end
		{
			return{ map[comp], i };
		}
		map[nums[i]] = i;
	}
	return {};

}
int main()
{
	vector<int> nums= { 3,2,4 };//������
	int target = 6;
	vector<int> result = twoSum(nums,target);
	printf("%d,%d", result[0], result[1]);




	return 0;
}