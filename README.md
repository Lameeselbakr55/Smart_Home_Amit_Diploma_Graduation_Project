# Smart_Home_Amit_Diploma_Graduation_Project
Simple Smart Home for Amit Learning Embedded System Diploma 

![Smart Home](https://user-images.githubusercontent.com/98288035/153641411-e815d9ec-7fa6-4507-9c07-d361cbb89750.gif)


## Project Description 

 It is a master / slave project where master recives data from mobile app or any device with UART then sends command to slave using SPI 

### Example 
When master recievs 1 through UART , it sends to slave to turn lamp 1 on. Also, when master recievs 2 , it sends to slave to turn lamp 2 on. but when  master recievs 3 , it sends to slave to turn lamp 3 on. Finally when master recievs 4 , it sends to slave to turn motor on. otherwise all devices turned off


## To open and run this project 

1. Open proteus file attached 
2. Put master file . hex on master controller   ( in this case  HomeAutomation.hex )
3. Put slave  file . hex on slave  controller   ( in this case  SPI_SLAVE.hex      )
4. Run Project
