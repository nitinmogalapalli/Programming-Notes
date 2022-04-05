// Thread Priorities
/* 

	We can change the priorities of the thread to change the execution of the thread scheduled by the thread scheduler any time.

for that we use a method:
	void setPriority(int value);

the thread priority may starts from 1 to 10. you can take that 1 is the minimum priority and 10 is for maximum priority. But it may change.
Anyway we can get the minimum or maximum priority by using the fields of the Thread class

	Thread.NORM_PRIORITY
By default the normal priority will be set to the 5.

	Thread.MIN_PRIORITY
	Thread.MAX_PRIORITY


*/

class ThreadNew extends Thread
{

  String name;
  public ThreadNew(String threadName,int num)
  {
	super(threadName);
	name = threadName;
	setPriority(num);
	System.out.println( name + ": started");
	start();
  }
  
  public void run()
  {
	System.out.println(name + " Thread has priority: " + this.getPriority() );

	try 
    	{
      		for(int i = 5; i > 0; i--) 
      		{
        			System.out.println(name + ": " + i);
        			Thread.sleep(1000);
     	 	}
    	}catch (InterruptedException e) 
    	{
      		System.out.println(name + "Interrupted");
    	}
	System.out.println(name + " Exited");
  }

}

class ThreadPriorities
{
  public static void main(String args[]) throws InterruptedException
  {
    ThreadNew tn1 = new ThreadNew("ONE",Thread.NORM_PRIORITY);
    ThreadNew tn2 = new ThreadNew("TWO",Thread.MAX_PRIORITY-6);
    ThreadNew tn3 = new ThreadNew("THREE",Thread.MAX_PRIORITY);

	tn1.join();
	tn2.join();
	tn3.join();
     System.out.println("Main Thread Exited..");
  }
}