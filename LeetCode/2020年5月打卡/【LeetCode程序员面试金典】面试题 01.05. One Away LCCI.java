class Solution {
    public boolean oneEditAway(String first, String second) {
        if (first == null || second == null) return false;
        int len1 = first.length();
        int len2 = second.length();
        if (Math.abs(len1 - len2) > 1) 
            return false;
        if (len2 > len1) 
            return oneEditAway(second, first);
        //������߽�����ж����    
        // ���ֵ�һ���ȵڶ�����
        for (int i = 0; i < len2; i++){
            if (first.charAt(i) != second.charAt(i)){
                // ����ǳ�����ͬ�ַ������ǾͱȽ���һ����
                //������Ȳ�һ�����ǾʹӸ��ַ���ʼ���бȽϡ�
                return first.substring(i + 1)
                    .equals(second.substring(len1 == len2 ? i + 1 : i));
            }
        }
        return true;
    }
}