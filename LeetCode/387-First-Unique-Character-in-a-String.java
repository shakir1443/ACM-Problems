class Solution {
    public int firstUniqChar(String s) {
        char[] arr = s.toCharArray();
        HashMap<Character, Integer> hmap = new HashMap<Character, Integer>();
        int result = -1;
        ArrayList<Integer> listIndex = new ArrayList<Integer>();
        for(int i = 0;i<arr.length;i++){
            if(hmap.containsKey(arr[i])){
                listIndex.remove(hmap.get(arr[i]));
            }else{
                hmap.put(arr[i],i);
                listIndex.add(i);
            }
        }
        if(listIndex.isEmpty()==false){
            result = listIndex.get(0);
        }
        return result;
    }
}
