
import java.io.*;
import java.net.*;
import java.util.Arrays;
import java.util.List;
import java.util.ArrayList;
import java.lang.Object;


class UDPBridge10
{
  String sentence;

    public static void main(String args[]) throws Exception
       {
          DatagramSocket serverSocket = new DatagramSocket(9877);
             byte[] receiveData = new byte[128];
//	DatagramSocket clientSocket = new DatagramSocket();	
//	byte[] sendData = new byte[128];
             while(true)
                {
                   DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length);
                   serverSocket.receive(receivePacket);
                   String sentence = new String( receivePacket.getData(),0,receivePacket.getLength());
//                   System.out.println("RECEIVED: " + sentence);
//                   InetAddress IPAddress = receivePacket.getAddress();
                   int port = receivePacket.getPort();


//			String sentence = new String( receivePacket.getData(),0,receivePacket.getLength());
			List<String> list = Arrays.asList(sentence.split(","));
                       String type=list.get(1);

                       switch(type) {

                        case "A": forward(sentence); break;
                        case "AA": forward(sentence); break;
                        case "AAA": forward(sentence); break;
                        case "AAAA": forward(sentence); break;
                        case "AAAAA": forward(sentence); break;
                        case "AAAAAA": forward(sentence); break;
                        case "AAAAAAA": forward(sentence); break;
                        case "AAAAAAAA": forward(sentence); break;
                        case "AAAAAAAAA": forward(sentence); break;
                        case "TEST": forward(sentence); break;
                                               }

//clientSocket.close();
                   //String capitalizedSentence = sentence.toUpperCase();
                   //sendData = capitalizedSentence.getBytes();
                   //DatagramPacket sendPacket =
                   //new DatagramPacket(sendData, sendData.length, IPAddress, port);
                   //serverSocket.send(sendPacket);
                }
//clientSocket.close();
       }

       public static void forward(String sentence) {
try{
                byte[] sendData = new byte[128];
          DatagramSocket clientSocket = new DatagramSocket();
    InetAddress IPAddress = InetAddress.getByName("10.1.1.1");
    sendData = sentence.getBytes();
                DatagramPacket sendPacket = new DatagramPacket(sendData, sendData.length, IPAddress, 9877);
                clientSocket.send(sendPacket);
          clientSocket.close();
       }
    
     catch(Exception e){
      return;
     }
}

}