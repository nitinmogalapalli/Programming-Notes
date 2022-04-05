// An incorrect implementation of a producer and consumer.

/*



*/
class Queue 
{
  int n;

  synchronized int get() 
 {
    System.out.println("Got: " + n);
    return n;
  }

  synchronized void put(int n) {
    this.n = n;
    System.out.println("Put: " + n);
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
    }
  }
}

class Consumer implements Runnable {
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
    }
  }
}

class ProCon 
{
  public static void main(String args[]) 
 {
    Queue q = new Queue();
    new Producer(q);
    new Consumer(q);

    System.out.println("Press Control-C to stop.");
  }
}

