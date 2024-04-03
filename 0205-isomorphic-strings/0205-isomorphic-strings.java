class Solution {
    public boolean isIsomorphic(String s, String t) {
        if(s.length()!=t.length()) return false;
        
        Map<Character,Character>mapping= new HashMap<>();
        
        for(int i=0;i<s.length();i++)
        {
            char original=s.charAt(i);
            char replacement=t.charAt(i);
            
            if(!mapping.containsKey(original))
            {
                if(!mapping.containsValue(replacement) )
                    mapping.put(original,replacement);
                else
                    return false;
                    
                }
            else
            {
                char mapChar= mapping.get(original);
                if(mapChar!=replacement)
                    return false;
            }
            
            }
        return true;
        }
        
    }
