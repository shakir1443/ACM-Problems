class Solution {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> result = new ArrayList<List<Integer>>();
        for(int i = 1;i<=numRows;i++){
                List<Integer> resultrows3 = new ArrayList<Integer>();
                for(int j=0;j<i;j++){
                    if(j==0 || j==i-1){
                        resultrows3.add(1);
                    }else{
                        int first = result.get(i-2).get(j-1);
                        int second = result.get(i-2).get(j);
                        resultrows3.add(first+second);
                    }
                }
                result.add(resultrows3);
        }
        return result; 
    }
}
