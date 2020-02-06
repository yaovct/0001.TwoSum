import java.lang.*;
import java.util.*;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        for(int i=0; i<nums.length; i++) {
        	map.put(nums[i], i); // map.put(key, value)
        }
      	for(int i=0; i<nums.length; i++) {
      		int complement = target - nums[i];
      		if(map.containsKey(complement) && map.get(complement) != i) {
      			return new int[] {i, map.get(complement)};
      		}
      	}
        throw new IllegalArgumentException("no answer found!"); 
    }
}

public class index {
	public static void main(String[] args) { 
		int[] arr = {2,7,11,15};
    Solution demo = new Solution();
    int[] a = demo.twoSum(arr, 9);
        
    //System.out.println();
    System.out.printf("[%d %d]\n", a[0], a[1]);
    System.out.println();
	}
}