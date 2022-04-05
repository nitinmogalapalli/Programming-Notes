// creat a second thread using runnable
class NewThread  implements Runnable
{
Thread t;
NewThread()
{
t=new Thread(this,"demo Thread");
System.out.println("child thread:"+t);
t.start();
}
public void run()
{
try
{
for(int i=5;i>0;i--)
{
System.out.println("child thread:" + i);
Thread.sleep(500);
}
}
catch(InterruptedException e)
{
System.out.println("child interupted");
}
System.out.println("Exiting child thread");
}
}
class ThreadDemo2
{
public static void main(String args[])
{
NewThread nt=new NewThread();
try
{
for(int i=5;i>0;i--)
{
System.out.println("mainthread:" + i);
Thread.sleep(1000);
}
}
catch(InterruptedException e)
{
System.out.println("main thread interruption:");
}
System.out.println("Main thread exiting:");
}
}
