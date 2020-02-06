import java.lang.*;

class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int i=0; i<nums.length-1; i++) {
        	for(int j=i+1; j<nums.length; j++) {
        		if(nums[i] + nums[j] == target) {
        			return new int [] {i, j};
        		}
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