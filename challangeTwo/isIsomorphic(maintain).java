//Link : https://leetcode.com/problems/isomorphic-strings/description/
class Solution {
    public boolean isIsomorphic(String s, String t) {
        Map<Character,Character> map = new LinkedHashMap<>();
        String s_convert = "";

        for (int i = 0; i < s.length(); i++) {
            if (!map.containsKey(s.charAt(i)) && !map.containsValue(t.charAt(i)))
                map.put(s.charAt(i),t.charAt(i));

            s_convert += map.get(s.charAt(i));
        }
        return s_convert.equals(t);
    }
}
