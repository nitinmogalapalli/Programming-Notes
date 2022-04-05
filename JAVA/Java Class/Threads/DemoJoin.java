// Using join() to wait for threads to finish.
/*

	join is a method to make the Thread wait for the completion of the other Threads on which the join is called inside the Thread code.
	public void join() throws InterruptedException.

	There is a method to know whether the thread is alive or it completes the execution.
	
	boolean isAlive()
	
*/


class NewThread extends Thread 
{
  String name; // name of thread

  NewThread(String threadname) 
  {
    super(threadname);
    name = threadname;
    System.out.println("New thread: " + this);
    start(); // Start the thread
  }

  // This is the entry point for thread.
  public void run() 
  {
    try 
    {
      for(int i = 5; i > 0; i--) 
      {
        System.out.println(name + ": " + i);
        Thread.sleep(1000);
      }
    } catch (InterruptedException e) {
      System.out.println(name + " interrupted.");
    }
    System.out.println(name + " exiting.");
  }
}

class DemoJoin 
{
  public static void main(String args[]) 
  {
    NewThread ob1 = new NewThread("One");
    NewThread ob2 = new NewThread("Two");
    NewThread ob3 = new NewThread("Three");

    System.out.println("Thread One is alive: " + ob1.isAlive());
    System.out.println("Thread Two is alive: " + ob2.isAlive());
    System.out.println("Thread Three is alive: " + ob3.isAlive());
   
  // wait for threads to finish
    try 
    {
      System.out.println("Main is Waiting for threads to finish.");
      for(int i = 5; i > 0; i--) 
      {
        System.out.println("Main : " + i);
        Thread.sleep(500);
      }
      ob1.join();
      ob2.join();
      ob3.join();

    } catch (InterruptedException e) 
    {
      System.out.println("Main thread Interrupted");
    }

    System.out.println("Thread One is alive: " + ob1.isAlive());
    System.out.println("Thread Two is alive: " + ob2.isAlive());
    System.out.println("Thread Three is alive: " + ob3.isAlive());

    System.out.println("Main thread exiting.");
  }
}
