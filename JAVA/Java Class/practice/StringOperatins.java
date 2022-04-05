// program to find the string on the some operations
class StringOperatins
{
public static void main(String[] args)
{
String strvar="RajeshKumar";
System.out.println("Declare to string varible is:"+strvar);
String substr1=strvar.substring(0,6);
String substr2=strvar.substring(6);
System.out.println("The two substrings are main string is:"+substr1+"and"+substr2);
int strlength=strvar.length();
System.out.println("The string length is:"+strlength);
char ch=strvar.charAt(6);
System.out.println("The charAt position 5 of main string:"+strvar+"is:"+ch);
if(substr1.equals(substr2))
System.out.println("The two sub strings are equal");
else
System.out.println("the two sub strings are equal");
strvar=strvar.toUpperCase();
System.out.println("The main string in toUpperCase is:"+strvar);
strvar=strvar.toLowerCase();
System.out.println("The main string in toLowerCase is:"+strvar);
}
} 