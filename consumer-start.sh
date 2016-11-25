#!/bin/bash
cd /home/cep/kafka/kafka_2.10-0.8.2.1/bin
sh zookeeper-server-start.sh /home/cep/kafka/kafka_2.10-0.8.2.1/config/zookeeper.properties &
sh kafka-server-start.sh /home/cep/kafka/kafka_2.10-0.8.2.1/config/server.properties &
sh kafka-topics.sh --create --topic test --zookeeper 10.1.1.1:2181 --partitions 1 --replication-factor 1 &
sh kafka-console-consumer.sh --topic test --zookeeper 10.1.1.1:2181
 

