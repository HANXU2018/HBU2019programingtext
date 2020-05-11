class Solution {
    public boolean isUnique(String astr) {
        int mark = 0;
        for(int i = 0;i < astr.length();i++){
            int bit = 1 << (astr.charAt(i) - 'a');
            if ((mark & bit) == 0) {
                mark |= bit;
            } else {
                return false;
            }
        }
        return true;
    }
}