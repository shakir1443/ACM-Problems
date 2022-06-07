class Solution {
    public int[] twoSum(int[] nums, int target) {
        if(nums==null || nums.length<2){
            return new int[]{0,0};
        }
        
        HashMap<Integer, Integer> pairs = new HashMap<Integer, Integer>();
        for(int i = 0;i<nums.length;i++){
            if(pairs.containsKey(nums[i])){
                return new int[]{pairs.get(nums[i]),i};
            }else{
                pairs.put(target-nums[i],i);
            }
        }
        
        return new int[]{0,0};
    }
}
