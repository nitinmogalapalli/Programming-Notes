// create a secound thread by extending thread
class NewThread extends Thread
{
NewThread()
{
super("Demo Thread");
System.out.println("child thread:"+this);
start();
}
public void run()
{
try
{
for(int i=5;i>0;i--)
{
System.out.println("child thread:"+i);
Thread.sleep(500);
}
}
catch(InterruptedException e)
{
System.out.println("child interruption");
}
System.out.println("Exiting child thread");
}
}
class ExtendThread2
{
public static void main(String args[])
{
NewThread nt=new NewThread();
try
{
for(int i=5;i>0;i--)
{
System.out.println("main thread:"+i);
Thread.sleep(1000);
}
}
catch(InterruptedException e)
{
System.out.println("main thread interrupted:");
}
System.out.println("main thread exiting:");
}
}
