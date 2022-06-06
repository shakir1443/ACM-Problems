class Solution {
    public boolean containsDuplicate(int[] nums) {
        boolean result = false;
        Set<Integer> numset =new HashSet<>();
        for(int i = 0;i<nums.length;i++){
            if(numset.contains(nums[i])){
                result = true;
            }else{
                numset.add(nums[i]);
            }
        }
        return result;
    }
}
