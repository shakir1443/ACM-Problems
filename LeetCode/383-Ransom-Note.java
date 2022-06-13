class Solution {
    public boolean canConstruct(String ransomNote, String magazine) {
        char[] arrRN = ransomNote.toCharArray();
        char[] arrMZ = magazine.toCharArray();
        int r = arrRN.length;
        int m = arrMZ.length;
        if(m<r){
            return false;
        }
        int i = 0;
        int j = 0;
        HashMap<Character, Integer> mapMZ = new HashMap<Character, Integer>();
        while(j<m){
            if(mapMZ.containsKey(arrMZ[j])){
                mapMZ.put(arrMZ[j],mapMZ.get(arrMZ[j])+1);
            }else{
                mapMZ.put(arrMZ[j],1);
            }
            j++;
        }
        while(i<r){
            if(mapMZ.containsKey(arrRN[i])){
                
                if(mapMZ.get(arrRN[i])==0){
                    return false;
                }else{
                    mapMZ.put(arrRN[i],mapMZ.get(arrRN[i])-1);
                }
                
            }else{
                return false;
            }
            i++;
        }
        return true;
    }
}
