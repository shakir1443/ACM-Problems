class Solution {
    public boolean isAnagram(String s, String t) {
        char[] arrS = s.toCharArray();
        char[] arrT = t.toCharArray();
        int r = arrS.length;
        int m = arrT.length;
        if(m>r || m!=r){
            return false;
        }
        int i = 0;
        int j = 0;
        HashMap<Character, Integer> map = new HashMap<Character, Integer>();
        while(j<m){
            if(map.containsKey(arrS[j])){
                map.put(arrS[j],map.get(arrS[j])+1);
            }else{
                map.put(arrS[j],1);
            }
            j++;
        }
        while(i<r){
            if(map.containsKey(arrT[i])){
                
                if(map.get(arrT[i])==0){
                    return false;
                }else{
                    map.put(arrT[i],map.get(arrT[i])-1);
                }
                
            }else{
                return false;
            }
            i++;
        }
        return true;
    }
}
