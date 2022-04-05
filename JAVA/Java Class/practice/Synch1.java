//this  program is not synchronized
class Callme
{
void call(String msg)
{
System.out.println("["+msg);
try
{
Thread .sleep(1000);
}
catch(InterruptedException e)
{
System.out.println("Interrupted");
}
System.out.println("]");
}
}
class Caller extends Thread
{ 
String msg;
Callme target;
 public  Caller(Callme targ,String s)
{
target=targ;
msg=s;
start();
}
public void run()
{
synchronized(target)
{
target.call(msg);
}
}
}
class Synch1
{
public static void main(String args[])
{
Callme target2=new Callme();
Caller ob1=new Caller(target2,"Hello");
Caller ob2=new Caller(target2,"Synchronized");
Caller ob3=new Caller(target2,"world");
try
{
ob1.join();
ob2.join();
ob3.join();
}
catch(InterruptedException e)
{
System.out.println("Intrrupted");
}
}
}