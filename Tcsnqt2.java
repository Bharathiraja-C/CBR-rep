public class Tcsnqt2{
	public static void main(String args[]){
		int h=10,s=2,k,c=0;
		int[] a={20,16};
		for(int i:a){
			k=0;
			if(i<h){
				c++;
			}
			if(i>h){
				while(k<i){
					k=k+h-s;
					c++;
				}
				
			}
			
		}
		System.out.println(c);
 	}
}