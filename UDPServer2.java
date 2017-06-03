import java.io.*;
import java.net.*;

class UDPServer2
{
    public static void main(String args[]) throws Exception
       {
          DatagramSocket serverSocket = new DatagramSocket(9877);
             byte[] receiveData = new byte[1024];
             while(true)
                {
                   DatagramPacket receivePacket = new DatagramPacket(receiveData, receiveData.length);
                   serverSocket.receive(receivePacket);
                   String sentence = new String( receivePacket.getData(),0,receivePacket.getLength());
                   System.out.println("RECEIVED: " + sentence);
                   InetAddress IPAddress = receivePacket.getAddress();
                   int port = receivePacket.getPort();
       //String capitalizedSentence = sentence.toUpperCase();
       //sendData = capitalizedSentence.getBytes();
                   //DatagramPacket sendPacket =
                   //new DatagramPacket(sendData, sendData.length, IPAddress, port);
                   //serverSocket.send(sendPacket);
                }
       }
}
