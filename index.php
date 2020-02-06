<?php
class Solution {
    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer[]
     */
    function twoSum($nums, $target) {
	    $arr = Array();
      for($i=0; $i<count($nums); $i++) {
      	$complement = $target - $nums[$i];
      	if(array_key_exists($complement, $arr)) {
      		return [$arr[$complement], $i];
        }
        $arr[$nums[$i]] = $i;
      }
      return "no answer found!";
    }
}

$testSolution = new Solution();
print_r($testSolution->twoSum([2,7,11,15], 9));
?>