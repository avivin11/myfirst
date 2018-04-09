public class jj{
static{
 System.load("/home/avinash/pract/k.so");
}
public native void greet(int a,int b);
public static void main(String[] args){
jj test=new jj();
test.greet(20,25);
}
}
