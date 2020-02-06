#include <iostream>
#include <map>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> hmap;
        for(int i=0; i<nums.size(); i++) {
        	hmap[nums[i]] = i;
        }
      	for(int i=0; i<nums.size(); i++) {
      		int complement = target - nums[i];
      		if(hmap.find(complement) != hmap.end()) {
      			int arr[2] = {i, hmap[complement]};
      			vector<int> result(arr, arr+2);
      			return result;
      		}
      	}
        throw runtime_error("no answer found!");
    }
};

int main(int argc, char *argv[]) {
	int arr[4] = {2, 7, 11, 15};
	vector<int> brr(arr, arr+4); // convert array to vector
	Solution mySolution;
	vector<int> t;
	t = mySolution.twoSum(brr, 9);
	for(int i=0; i<t.size(); i++) {
		cout << t[i] << " ";
	}
	cout << endl;
}