public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        var seen = new Dictionary<int,int>();
        var needed =0;
        for(int i =0; i<nums.Length; i++){
            needed = target - nums[i];
            if(seen.TryGetValue(needed, out var index)){
                return new int[]{index,i};
            }
            seen[nums[i]] =i;
        }
        return new int[0];

    }
}
