// Create multiple threads.
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
        System.out.println(name + " : " + i);
        Thread.sleep(1000);
      }
    }catch (InterruptedException e) 
    {
      System.out.println(name + " Interrupted");
    }
    System.out.println(name + " exiting.");
  }
}

class MultiThreadDemo 
{
  public static void main(String args[]) 
  {
    NewThread nt1 = new NewThread("One"); // start threads
    NewThread nt2 = new NewThread("Two");
    NewThread nt3 = new NewThread("Three");

    try 
    {
       for(int i = 5; i > 0; i--) 
      {
        System.out.println("Main : " + i);
        Thread.sleep(500);
      }
    } catch (InterruptedException e) 
    {
      System.out.println("Main thread Interrupted");
    }

    System.out.println("Main thread exiting.");
  }
}
