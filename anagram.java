import java.util.Scanner;

public class Solution {
    static boolean isAnagram(String a, String b) {
        // Complete the function
        char[] n=a.toCharArray();
        char[] m=b.toCharArray();
        Arrays.sort(n);
        Arrays.sort(m);
        for(int i=0;i<n.length;i++)
        {
            for(int j=0;j<m.length;j++)
            {
                if(n[i]!=m[i])
                    return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
    
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}