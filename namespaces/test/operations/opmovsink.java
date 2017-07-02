import java.io.*;
import java.net.*;
import java.util.logging.*;
import java.lang.Object;
import java.util.Date;
import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;

class opmovsink
{
  //private static Logger logger = Logger.getLogger(UDPServer2.class.getName());
  //private static FileHandler fh = null;






    public static void main(String args[]) throws Exception
       {
        int counter=1;
        int miss = 0;
          //FileHandler fh =  new FileHandler("/usr/src/cep/Server2.txt");  
List<Integer> latency = new ArrayList<Integer>();
//logger.addHandler(fh);
//logger.setLevel(Level.ALL);
//logger.setUseParentHandlers(false);
          DatagramSocket serverSocket = new DatagramSocket(9877);
             byte[] receiveData = new byte[1024];
             while(counter<=60)
                {
                  
                   DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length);
                   serverSocket.receive(receivePacket);
                   String sentence = new String( receivePacket.getData(),0,receivePacket.getLength());
                   Date date = new Date();
                   long recvTimestamp = date.getTime();
                    System.out.println("Received at "+" "+recvTimestamp+" -- " + sentence);
                   List<String> list = Arrays.asList(sentence.split(","));
                   //System.out.println("Timestamp in packet is" + list.get(2));
                   long sendTimestamp = Long.parseLong(list.get(4));
                   latency.add((int)(recvTimestamp-sendTimestamp));
                   int attr1 = Integer.parseInt(list.get(2));
                   if(attr1 < 50){
                     miss ++;
                   }
                   //System.out.println("Timestamp in packet as number" + recvTimestamp+ " "+counter);
                   //logger.info("Receiving packet");
                   InetAddress IPAddress = receivePacket.getAddress();
                   int port = receivePacket.getPort();
                   counter ++;

                } 
                Integer sum = 0;
                 for (Integer lat : latency) {
                sum += lat;
                  }
              System.out.println("Average latency is" + sum.doubleValue() / latency.size());
              System.out.println("Packet hit" + miss);
       }
}
