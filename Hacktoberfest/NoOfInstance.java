import java.util.*;
import java.lang.*;
import java.io.*;


public class NoOfInstance {
    public static void main(String[] args) {
        defaultClass s1 = new defaultClass();
        defaultClass s2 = new defaultClass();
        defaultClass s3 = new defaultClass();
        defaultClass s4 = new defaultClass();
        defaultClass s5 = new defaultClass();
    }
}

class defaultClass{

    static int noOfObjects = 0;
    // This class can have its properties and methods

    defaultClass(){
        noOfObjects++;
        System.out.println("No. of objects of this class updated to " + noOfObjects);
    }
}
