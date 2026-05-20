class Solution {
    public boolean hasDuplicate(int[] nums) {
        int n = nums.length;
        HashSet<Integer> seen = new HashSet<>();
        for(int num : nums){
            if(seen.contains(num)) return true;
            seen.add(num);
        }
        return false;
    }
}