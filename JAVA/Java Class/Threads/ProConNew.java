// An incorrect implementation of a producer and consumer.

/*
In InterThread Communication we use three methods defined in the Object class.
	They are,
		final void wait() throws InterruptedException
		final void notify()
		final void notifyAll()

wait(): It will make the thread to suspend/wait until another thread notifies it with a call to the notify() method.

notify(): It tells the other threads that the called object finished its work and may other thread can use the monitor.

notifyAll(): Which notifies all the threads which are waiting for the object. But one of the Thread will be granted the permission.

*/
class Queue 
{
  int n;

   boolean valueSet = false;

  synchronized int get() 
  {
    if(!valueSet)
      try 
     {
        wait();
     } catch(InterruptedException e) 
      {
        System.out.println("InterruptedException caught");
      }

      System.out.println("Got: " + n);
     
      valueSet = false;
      notify();
      return n;
  }

  synchronized void put(int n) 
  {
    if(valueSet)
    {
      try 
     {
        wait();
      } catch(InterruptedException e) 
      {
        System.out.println("InterruptedException caught");
      }
   }

      this.n = n;
      valueSet = true;
      System.out.println("Put: " + n);
     
      notify();
  }

}

class Producer implements Runnable 
{
  Queue q;

  Producer(Queue q) 
 {
    this.q = q;
    new Thread(this, "Producer").start();
  }

  public void run() 
 {
    int i = 0;

    while(true) 
   {
      q.put(i++);
    
   try
    {
       Thread.sleep(1000);
    } catch(InterruptedException e) 
      {
        System.out.println("InterruptedException caught");
      }
    }
  }
}

class Consumer implements Runnable 
{
  Queue q;

  Consumer(Queue q) 
 {
    this.q = q;
    new Thread(this, "Consumer").start();
  }

  public void run() 
 {
    while(true) 
    {
      q.get();
   try
    {
       Thread.sleep(1000);
    } catch(InterruptedException e) 
      {
        System.out.println("InterruptedException caught");
      }
    }
  }
}

class ProConNew 
{
  public static void main(String args[]) 
 {
    Queue q = new Queue();
    new Producer(q);
    new Consumer(q);

    System.out.println("Press Control-C to stop.");
  }
}

