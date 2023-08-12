import  java.util.*;
public class Tcsnqt1{
	public static void main(String args[]){
		int k=15,q=0,l=0;
		List<Integer> b=new ArrayList<Integer>();
		String s="100100001";
		char[] a=s.toCharArray();
		for(char c:a){
			if(c=='1') {
				q++;;
				if(l<=k){
					q=q+l;
					b.add(q);
				}
				l=0;
				q=1;
			}
			else{
				l++;
				if(l>k){
					b.add(q+k);
					q=0;
					
				}
				
			}
		}
		for(Integer i:b){
			if(q<i) q=i;
		}
		System.out.println(q);
		
	}
}