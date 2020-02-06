#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(int i=0; i<nums.size()-1; i++) {
        	for(int j=i+1; j<nums.size(); j++) {
        		if(nums[i] + nums[j] == target) {
        			result.push_back(i);
        			result.push_back(j);
        			return result;
        		}
        	}
        }
        throw runtime_error("no answer found!");
    }
};

int main(int argc, char *argv[]) {
	vector<int> arr;
	arr.push_back(2);
	arr.push_back(7);
	arr.push_back(11);
	arr.push_back(15);
	Solution mySolution;
	vector<int> t;
	t = mySolution.twoSum(arr, 9);
	for(int i=0; i<t.size(); i++) {
		cout << t[i] << " ";
	}
	cout << endl;
}