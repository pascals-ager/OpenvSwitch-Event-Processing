#!/bin/bash
cd /home/cep/kafka/kafka_2.10-0.8.2.1/bin/
sh kafka-console-producer.sh --topic test --broker-list 10.1.1.1:9092
