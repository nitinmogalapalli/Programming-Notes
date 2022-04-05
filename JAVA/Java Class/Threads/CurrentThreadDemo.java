// Controlling the main Thread.
class CurrentThreadDemo 
{
  public static void main(String args[])// throws InterruptedException
{
    Thread t = Thread.currentThread();

    System.out.println("Current thread: " + t);

    // change the name of the thread
    t.setName("My Main Thread");
    System.out.println("After name change: " + t);
    t.setPriority(9);
    System.out.println("After priority change: " + t);
   try 
   {
     for(int n = 5; n > 0; n--) 
     {
        System.out.println(n);
        Thread.sleep(5000);
      }
    } 
    catch (InterruptedException e) 
    {
      System.out.println("Main thread interrupted");
     }

    System.out.println("Thread Finished execution...");
  }
}

