//   thread priority 
class Threadnew extends Thread
{
String name;
public Threadnew(String threadName,int num)
{
super(threadName);
name=threadName;                                                                         
setPriority(num);
System.out.println(name+":Started");
start();                                            
}
public void run()
{
System.out.println(name+"thread has priority:"+this.getPriority());
System.out.println(name + "Exited");
}
}
class ThreadPriorities1
{
public static void main(String args[])
{
Threadnew tn1=new Threadnew("one",Thread.MAX_PRIORITY);
Threadnew tn2=new Threadnew("Two",Thread.NORM_PRIORITY);
Threadnew tn3=new Threadnew("Three",Thread.MIN_PRIORITY);
try
{
tn1.join();
tn2.join();
tn3.join();
}
catch(InterruptedException ie)
{
System.out.println("Exception:"+ie);
}
System.out.println("Main Thread Exited");
}
}