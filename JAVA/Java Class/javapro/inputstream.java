import java.io.*;

class inputstream
{
public static void main(String args[]) throws IOException
{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));

System.out.println("enter 2 numbers");
int a,b;
a=Integer.parseInt(br.readLine());
b=Integer.parseInt(br.readLine());
System.out.println("entered numbers are :"+a+"   "+b);
   }
}

