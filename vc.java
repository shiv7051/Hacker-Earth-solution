import java.io.*;

public class VCPairs {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int t = Integer.parseInt(br.readLine());

        while(t>0) {

            int len = Integer.parseInt(br.readLine());

            int count = 0;

            char[] arr = br.readLine().toCharArray();

            for (int i = 0; i<len-1; i++) {

                if ((arr[i+1] == 'a' || arr[i+1] == 'e' || arr[i+1] == 'i' ||

             arr[i+1] == 'o' || arr[i+1] == 'u') &&

(arr[i] != 'a' && arr[i] != 'e' && arr[i] != 'i' && arr[i] != 'o' && arr[i] != 'u')

 ) {

                    count++;

                }

            }

            System.out.println(count);

            t--;

        }

        br.close();

    }

}