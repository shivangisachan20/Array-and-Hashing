class Solution {
    public int appendCharacters(String s, String t) {
        int n = s.length(); // Length of string s
        int m = t.length(); // Length of string t

        int i = 0; // Pointer for string s
        int j = 0; // Pointer for string t

        // Iterate through both strings
        while (i < n && j < m) {
            // If characters at both pointers match, move pointer j of t
            if (s.charAt(i) == t.charAt(j)) {
                j++;
            }
            // Always move pointer i of s
            i++;
        }

        // Return the number of characters in t that are not matched in s
        return m - j;
    }
}
