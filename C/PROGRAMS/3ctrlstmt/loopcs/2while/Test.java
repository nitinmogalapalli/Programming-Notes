public class Student
{
private string name;
public string getname()
{
return name;
}
public void setname(String name)
{

this.name=name
}
}
class Test
{
public static void main(String args[])
Studenrt s=new Student();
s.setname(" Harsha");
System.out.println(s.getname());
}
}