#include <iostream>
#include <vector>

//Practice 1
/////////////////////////////////////////////////////////////////////////
void make_palindrome(std::vector<int>& nums) //ノreferenceэ
{
	std::vector<int> reversed_nums;
	for (auto it = nums.rbegin();
		it != nums.rend(); //end 琌程计ぇ程程
		++it)
	{
		reversed_nums.push_back(*it);
	
	}
	nums.insert(nums.end(), reversed_nums.begin(), reversed_nums.end());
	return;
}

//Practice 2
/////////////////////////////////////////////////////////////////////////
void make_palindrome_shuai(std::vector<int>& numbers) //ノreferenceэ
{
	
	for (size_t i = numbers.size(); i > 0; --i)
	{
		numbers.push_back(numbers[i - 1]);
	}

	//const std::vector<int> reversed(numbers.crbegin(), numbers.crend());
	//numbers.insert(numbers.end(), reversed.cbegin(), reversed.cend());
}

//Homework 1
/////////////////////////////////////////////////////////////////////////
bool is_palindrome(const std::vector<int>& numbers_to_check) //ぃ穦э
{
	if (numbers_to_check.empty())
	{
		return false;
	}
	else for (size_t i = 0; i < numbers_to_check.size() / 2; ++i)
	{
		size_t size = numbers_to_check.size() - 1;

		if (numbers_to_check[i] != numbers_to_check[size - i])
		{
			return false;
		}
	}
	return true;
}


int main(int argc, char* argv[])

{
	std::vector<int> numbers{ 4, 5, 3, 6, 1, 7 };
	std::vector<int> numbers_new;


	make_palindrome(numbers);

	std::cout << is_palindrome(numbers_new) << std::endl;

	//for (int num : numbers_new)
	//{
	//	std::cout << num << std::endl;
	//}
	return 0;

}