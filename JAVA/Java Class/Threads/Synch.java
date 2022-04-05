// This program is not synchronized.

class Callme 
{
  synchronized void call(String msg) 
 {
    System.out.print("[" + msg);
    try {
      Thread.sleep(2000);
    } catch(InterruptedException e) {
      System.out.println("Interrupted");
    }
    System.out.println("]");
  }
}

class Caller extends Thread {
  String msg;
  Callme target;

  public Caller(Callme targ, String s) {
    target = targ;
    msg = s;
    start();
  }

  public void run() {
    target.call(msg);
  }
}

class Synch {
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