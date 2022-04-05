// This program uses a synchronized block.
  
class Callme
{
  void call(String msg) {
    System.out.print("[" + msg);
    try {
      Thread.sleep(1000);
    } catch (InterruptedException e) {
      System.out.println("Interrupted");
    }
    System.out.println("]");
  }

  void someOther()
  {

  }
}

 class Caller extends Thread
{
  String msg;
  Callme target;

  public Caller(Callme targ, String s) {
    target = targ;
    msg = s;
    start();
  }

  // synchronize calls to call()
  public void run() {
    synchronized(target) { // synchronized block
      target.call(msg);
    }
  }
}


class Synch1 {
  public static void main(String args[]) {
    Callme target = new Callme();
    Caller ob1 = new Caller(target, "Hello");
    Caller ob2 = new Caller(target, "Synchronized");
    Caller ob3 = new Caller(target, "World");

    // wait for threads to end
    try {
      ob1.join();
      ob2.join();
      ob3.join();
    } catch(InterruptedException e) {
      System.out.println("Interrupted");
    }
  }
}

