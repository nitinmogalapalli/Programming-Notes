class RuningThread
{
 public static void main(String args[])
   {
       Thread t=Thread.currentThread();
       System.out.println("Current Thread is :"+t);
       System.out.println("Thread name is :"+t.getName());
   }
}
