import java.io.*;
import java.net.*;
import java.util.logging.*;
import java.util.ArrayList;
import java.util.Random;
import java.lang.*;
import java.util.Date;
import java.util.concurrent.*;

class opmovsrc
{
//private static Logger logger = Logger.getLogger(UDPClient.class.getName());
//private static FileHandler fh = null; 


    public static void main(String args[]) throws Exception
    {
//FileHandler fh =  new FileHandler("/usr/src/cep/client.txt");  
int counter = 1;
int val = 0;
//logger.addHandler(fh);
//logger.setLevel(Level.ALL);
//logger.setUseParentHandlers(false);


     /* ArrayList<String> list = new ArrayList<String>(){{
                add("A");
                add("AA");
                add("AAA");
                add("AAAA"); 
                add("AAAAA");  
                add("AAAAAA"); 
                add("AAAAAAA"); 
                add("AAAAAAAA");    
                add("AAAAAAAAA"); 
                add("AAAAAAAAAA");
                add("TEST");
                        }}; */
        BufferedReader inFromUser =
          new BufferedReader(new InputStreamReader(System.in));
       
       InetAddress IPAddress = InetAddress.getByName("10.1.1.1");
       
      
        for(int i =0; i < 100; i++){
          for( int j=0; j<=i; j ++){
DatagramSocket clientSocket = new DatagramSocket();
      // byte[] receiveData = new byte[1024];
byte[] sendData = new byte[1024];

//        Date date = new Date();
        //String s = catalogue.get(2);
         //StringBuilder sentence = new StringBuilder(list.get(new Random().nextInt(list.size()))); //new Random().nextInt(list.size())
        StringBuilder sentence = new StringBuilder("CEP");
         sentence.append(",");
          sentence.append("TEMP");
  //sentence.append(list.get(new Random().nextInt(list.size())));
sentence.append(",");
         //sentence.append(new Random().nextInt(100));//s
 sentence.append(j);
         sentence.append(",");
 sentence.append(90);
         sentence.append(",");         
         sentence.append(new Date().getTime());

         //date.getTime()

       sendData = sentence.toString().getBytes();
       DatagramPacket sendPacket = new DatagramPacket(sendData, sendData.length, IPAddress, 9877);

//       System.out.println("Sending packet: "+sentence);
      //logger.info("Sending packet");

       clientSocket.send(sendPacket);
       counter ++;
       val ++;
       val=val%10;

       //DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length);
       //clientSocket.receive(receivePacket);
       //String modifiedSentence = new String(receivePacket.getData());
       //System.out.println("FROM SERVER:" + modifiedSentence);
       clientSocket.close();
         Thread.sleep(12);

          }
        }



    
}
}