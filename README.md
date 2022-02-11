# Smart_Home_Amit_Diploma_Graduation_Project
Simple Smart Home based Bluetooth where we want to control home appliance wirelessly using Mobile App via Bluetooth. for Amit Learning Embedded System Diploma 

![Smart Home](https://user-images.githubusercontent.com/98288035/153641411-e815d9ec-7fa6-4507-9c07-d361cbb89750.gif)


## Project Description 

 It is a master / slave project where Two ECU’s Communicate with each other the first is a control ECU which takes the input from Bluetooth
and send it to the Sink (Actuator) ECU via SPI to interpret which action should be taken

![Block Diagram](https://user-images.githubusercontent.com/98288035/153662165-5a9ab45b-9cd6-4298-81f8-ce2a27da5758.PNG)

### Example 
When master recievs 1 through UART , it sends to slave to turn lamp 1 on. Also, when master recievs 2 , it sends to slave to turn lamp 2 on. but when  master recievs 3 , it sends to slave to turn lamp 3 on. Finally when master recievs 4 , it sends to slave to turn motor on. otherwise all devices turned off

### State Machine of the system 

![FlowChart](https://user-images.githubusercontent.com/98288035/153662331-eaa18de3-64fb-41d8-b2e3-e40e9b7444b6.png)


## To open and run this project 

1. Open proteus file attached 
2. Put master file . hex on master controller   ( in this case  HomeAutomation.hex )
3. Put slave  file . hex on slave  controller   ( in this case  SPI_SLAVE.hex      )
4. Run Project
