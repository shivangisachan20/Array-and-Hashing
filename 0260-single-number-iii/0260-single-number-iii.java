public class Solution {
    public int[] singleNumber(int[] nums) {
        // Create a hashmap to store the frequency of each number
        Map<Integer, Integer> frequencyMap = new HashMap<>();
        
        // Populate the hashmap with frequencies
        for (int num : nums) 
        {
            frequencyMap.put(num, frequencyMap.getOrDefault(num, 0) + 1);
        }
        
        // Find the two numbers that appear exactly once
        int[] result = new int[2];
        int index = 0;
        for (var entry : frequencyMap.entrySet()) 
        {
            if (entry.getValue() == 1) 
            {
                result[index++] = entry.getKey();
                // If we found both numbers, break out of the loop
                if (index == 2)
                {
                    break;
                }
            }
        }
        
        return result;
    }
};