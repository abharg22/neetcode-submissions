public class Solution {
    public int[] TopKFrequent(int[] nums, int k) {
        
        var map = new Dictionary<int,int>();
        foreach(int num in nums){
            map[num] = map.GetValueOrDefault(num, 0) +1;

        }
        var result = map.OrderByDescending(pair => pair.Value).Take(k).Select(pair => pair.Key).ToArray();
        return result;
    }
}
