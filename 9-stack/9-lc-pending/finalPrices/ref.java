// class Solution {
//     public int[] finalPrices(int[] prices) {
//         Stack<Integer> st=new Stack<>();
//         int n=prices.length;
//         int[] res=new int[n];
//         for(int i=n-1;i>=0;i--){
//             while(st.size()>0 && prices[i]<st.peek()){
//                 st.pop();
//             }
//             if(st.size()==0) res[i]=prices[i];
//             else res[i]=prices[i]-st.peek();
//             st.push(prices[i]);
//         }
//         return res;
//     }
// }