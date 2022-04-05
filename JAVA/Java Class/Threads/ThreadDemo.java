// Create a second thread Using Runnable Interface.
/*

It is a one of the way to create thread ( creating a class that implements the runnable interface).

In order to treat the objects of a class that implements Runnable interface as threads that class should instantiate a thread with the object of its type.

the statement we use to instantiate an object of class implementing Runnable Interface is like the following,
	Thread t = new Thread(objName, threadName);
	objName is the object of the current class, and the threadName is the name of the thread to be set.

every class that implements Runnable Interface should implement a method run() with its own definition to execute the statements by the objects of that class(which is a thread).

after creating the instance of the thread to the class you can start the thread using a method start() in defined in the Thread class to start the thread execution by calling the run method.

*/

class NewThread implements Runnable 
{
	Thread t ;

	NewThread() 
	{
		// Create a new, second thread
		t = new Thread(this, "Demo Thread");
    		System.out.println("Child thread: " + t);
    		t.start(); // Start the thread
  	}

	// This is the entry point for the second thread.
	public void run() 
	{
		System.out.println("From " + t.getName() + "'s Run Method...");
		try 
		{
			for(int i = 5; i > 0; i--) 
			{
				System.out.println( t.getName() + " : " + i);
				Thread.sleep(500);
			}
		} 
		catch (InterruptedException e) 
		{
		System.out.println("Child interrupted.");
		}

		System.out.println("Exiting " + t.getName() + "...!");
	}
}

class ThreadDemo 
{
  	public static void main(String args[]) 
	{
		Thread mt = Thread.currentThread();
		System.out.println("Main thread: " + mt);
   		NewThread nt = new NewThread(); // create a new thread
//		NewThread nt2 = new NewThread();
//		nt.t.start(); // you can start the thread of the nt by using this statement

    		try 
		{
      			for(int i = 5; i > 0; i--) 
			{
			        System.out.println("Main Thread: " + i);
			        Thread.sleep(1000);
      			}
		} 
		catch (InterruptedException e) 
		{
		      System.out.println("Main thread interrupted.");
    		}
		System.out.println("Main thread exiting...");
	}
}
