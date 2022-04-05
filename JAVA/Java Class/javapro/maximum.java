/*File:maximum*/
import java.io.*;
class maximum
{
 public static void main(String args[]) throws IOException
   {
BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
System.out.println("eneter 3 values :");

int c,d,e;

c=Integer.parseInt(b.readLine());
d=Integer.parseInt(b.readLine());
e=Integer.parseInt(b.readLine());

if(c>d)
{
if(c>e)
System.out.println("c is max:"+c);
else
System.out.println("e is max:"+e);
}
else
System.out.println("d is max:"+d);
   }
}


   

   