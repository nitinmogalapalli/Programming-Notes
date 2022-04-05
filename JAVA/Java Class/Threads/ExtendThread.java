// Create a second thread by extending Thread class

class NewThread1 extends Thread 
{
  	NewThread1() 
	{
	    	// Create a new, second thread
    		super("Child Thread");
    		System.out.println("Child thread: " + this);
    		start(); // Start the thread
  	}

  	// This is the entry point for the second thread.
  	public void run() 
	{
	    	try 
		{
      			for(int i = 5; i > 0; i--) 
			{
        				System.out.println("Child Thread: " + i);
        				Thread.sleep(250);
      			}
	    	} 
		catch (InterruptedException e) 
		{
		      	System.out.println("Child interrupted.");
    		}
    		System.out.println("Exiting child thread.");
  	}
}

class ExtendThread 
{
  	public static void main(String args[]) 
	{
		Thread mt = Thread.currentThread();
		System.out.println("Main Thread: " + mt);
    		NewThread1 nt1 = new NewThread1(); // create a new thread

    		try 
		{
     		 	for(int i = 5; i > 0; i--) 
			{
        				System.out.println("Main Thread: " + i);
        				Thread.sleep(1);
	      		}
    		} 
		catch (InterruptedException e) 
		{
      			System.out.println("Main thread interrupted.");
	    	}
    		System.out.println("Main thread exiting.");
  	}
}
