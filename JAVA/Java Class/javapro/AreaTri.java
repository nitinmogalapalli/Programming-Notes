//File:area.java

import java.lang.*;
import java.util.*;
import java.io.*;


class Dimensions
  {
    private double base ,height;
  
 void Area()
{
double Ar;
Ar= (0.5*base*height);
System.out.println("Area="+Ar);
}

void Set(double b, double h)
{
	base=b;
	height=h;
}
}

class AreaTri
{
	public static void main(String args[]) throws IOException
	{
 	
	Dimensions ax=new Dimensions();
	BufferedReader s=new BufferedReader(new InputStreamReader(System.in));
	System.out.println("Enter ur base for area ");
	double b=Double.parseDouble(s.readLine());
	System.out.println("Enter ur height for area ");
	double h=Double.parseDouble(s.readLine());
	ax.Set(b,h);		
	ax.Area();	
}


}
