public class Solution {
    public List<List<string>> GroupAnagrams(string[] strs) {
        var map = new Dictionary<string, List<string>>();
        foreach(string s in strs){
            char[] sArray = s.ToCharArray();
            Array.Sort(sArray);
            string key = new String(sArray);
            if(!map.TryGetValue(key, out var bucket)){
                bucket = new List<string>();
                map[key] = bucket;
            }
            bucket.Add(s);
            

        }
        return map.Values.ToList();
    }
}
