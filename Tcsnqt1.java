import  java.util.*;
public class Tcsnqt1{
	public static void main(String args[]){
		int k=3,q=0,l=0;
		List<Integer> b=new ArrayList<Integer>();
		String s="101011110";
		char[] a=s.toCharArray();
		for(int i=0;i<a.length;i++){
			if(a[i]=='1') {
				b.add(count(i,a,k));
				
			}
		}
		for(Integer i:b){
			if(q<i) q=i;
		}
		System.out.println(q);
		
	}
	private static int count(int i,char[] a,int k){
		int l=0,q=0;
		for(int j=i;j<a.length;j++){
			if(a[j]=='1') {
				q++;
				if(l==k){
					q=q+l;
					return q;
					
				}
				
			}
			else{
			    	l++;
				if(l>k){
					return (q+l-1);
					
				}
			}
		}
		while(l<k && a[i-1]=='0'){
			l++;
			i--;
		}
		return q+l;
	}
}
