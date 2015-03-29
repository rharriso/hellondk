package rharriso.hellojni;

/**
 * Created by rharriso on 3/29/15.
 */
public class HelloJni {
    public static native String getMyName();
    static {
        System.loadLibrary("HelloJNI");
    }
}
