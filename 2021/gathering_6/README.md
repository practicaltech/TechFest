<img src="https://user-images.githubusercontent.com/52707386/123524825-9f7fa500-d681-11eb-8fe6-452afc4e432d.png" width="100%">
<p align="right"><sup>  <a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_5">Back</a> |<a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_7"> Next</a> | </sup><a href="https://github.com/practicaltech/TechFest/tree/master/2021#tech-fest-2021-zoomship-round-2"><sup> Contents</sup></a>
<br/>
<sup>gathering_6</sup></p>

# Wifi *or* Bluetooth (sending *out* information at 2.4GHz)

This week we will be switching it up a bit. I will offer two challenges for you to choose from, and less information to achieve them. Nevertheless, I will still supply information and some hints/answers at the end, but these will not be made public until Thursday. The goal is to troubleshoot through our chosen challenge with outside resources. There are more ways than one to get to the same result. This week it's all about collaboration and problem solving.

*This guide will draw on techniques learned in previous gatherings.*

*'Hints' in this guide (not the ones at the end) are meant to offer information that may help you along while following resources you've found online, they are not meant to be followed as steps, but they do appear in sequential order.*

After setting up your new board, choose whether you want to work on Bluetooth or Wifi. I have added some pros and cons to each at the top of their respective sections. Full disclosure (for time management), figuring out how Wifi works on our board is a bit more time consuming than bluetooth.

1. [Prep Arduino Nano 33 IoT](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_6/README.md#1-prep-arduino-nano-33-iot)
2. [Bluetooth (control a light with your phone)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_6/README.md#2-bluetooth-control-a-light-with-your-phone)
3. [Wifi (control a light from anywhere in the world with your computer)](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_6/README.md#3-wifi-control-a-light-from-anywhere-in-the-world-with-your-computer)
4. [Answers & Hints](https://github.com/practicaltech/TechFest/blob/master/2021/gathering_6/README.md#4-answers--hints)


### 1. Prep Arduino Nano 33 IoT

<p align="center"> 
  <img width="500" height="400" src="https://user-images.githubusercontent.com/52707386/125332805-588ae400-e2fe-11eb-8739-2de0b0eec4bc.jpg"> 
  <br>
  <b><a href="https://store.arduino.cc/usa/nano-33-iot">Arduino Nano 33 IoT</a></b><br> 
   </br><br>
</p>

**Materials:** Arduino Nano 33 IoT and USB to Micro USB cable.

**Objective:** Succesfully communicate with your board by running 'blink' on it.

**Instructions:**

  <ol type="i">
    <li>Navigate to the Nano 33 IoT page by clicking on the link under the image.</li>
    <li>Find and follow the 'getting started guide.' <b>Or</b>, look up the board name on your search enginge and follow an independent hobbyists guide (sometimes they are better).</li>
      <ol type="a">
        <li>If you chose the Arduino guide, follow the 'Desktop IDE' guide.</li>
      </ol>
    <li>Figure out how to make the on board LED blink! Look back to previous guides and/or follow the Arduino Nano 33 IoT guide's blink.</li>
  </ol>
  
**Congratulations!!** you just got a whole new microcontroller working. The more experience we get with new boards, the more versatile we will become at working with and troubleshooting microcontrollers.

<br>

### 2. Bluetooth (control a light with your phone)

a standardized communication protocol for electronic systems ([Spark Fun](https://learn.sparkfun.com/tutorials/bluetooth-basics/all)). In other words, it's a way in which electrical systems can speak to eachother wirelessly. It operates at the same band as Wifi (2.4GHz).

| Pros    | Cons |
| ----------- | ----------- |
| Low cost  | Short range (<100m)      |
| Low power   | Small amounts of data      |
| Secure   |        |

<br>
<b>Some potential uses:</b>
<ol type="i">
  <li>Send and receive data from a sensor station</li>
  <li>Control a car, robot, or robot arm remotely</li>
  <li>Send or receive audio signals</li>
</ol>

**Materials:** Smartphone, Arduino Nano 33 IoT, and USB to Micro USB cable.

**Challenge:** Turn on or off the onboard LED using your phone.

**Hints:**

<ol type="i">
  <li>Find a guide for our specific board or a <i>compatible one</i></li>
      <ol type="a">
        <li>Use the <a href="https://www.google.com/search?q=arduino+nano+33+iot+guide&rlz=1C1NHXL_esMX723MX731&oq=arduino+nano+33+iot+guide&aqs=chrome..69i57j0l4j69i60l3.6049j0j7&sourceid=chrome&ie=UTF-8">Goog</a>. There are more ways than one to make this work.</li>
      </ol>
  <li>The logic for manipulating the LED will have the same structure as our button to LED exercise. Check out this <a href="https://www.arduino.cc/en/Tutorial/BuiltInExamples/Button">Arduino guide on turning on the onboard LED with a button</a> for a refresher.</li>
  <li>You will most likely have to download at least one library for the Arduino IDE and an app for your phone (unless you already have them downloaded).</li>

</ol>

<br>

### 3. Wifi (control a light from anywhere in the world with your computer)

a standardized communication protocol for electronic systems that can allow for internet connectivity. In other words, Wifi can allow for communication between your devices and a router which is what actually provides access to the internet. Even though we mainly use it to connect to the internet, Wifi allows us to connect a variety of devices to one another. Like bluetooth, it uses radio waves at 2.4GHz (can also do 5Ghz (5G)) to send and receive information.

*[More info on IEEE 802 and what we refer to as 'wifi'](https://searchnetworking.techtarget.com/reference/IEEE-802-Wireless-Standards-Fast-Reference#:~:text=IEEE%20802%20is%20a%20collection,metropolitan%20area%20networks%20(MAN).&text=IEEE%20stands%20for%20Institute%20of%20Electrical%20and%20Electronics%20Engineers.)*

| Pros    | Cons |
| ----------- | ----------- |
| Global range if connected to internet  | Expensive      |
| Large amounts of data transfer   |  More power hungry    |
| Streaming and virtual connection   |     Some connections are not secure   |

<br>
<b>Some potential uses (including all of the bluetooth uses mentioned above):</b>
<ol type="i">
  <li>Streaming live video</li>
  <li>Control a system (sensor, vehicle, etc.) from anywhere in the world</li>
  <li>Virtually connect to your system as if you were there physically to troubleshoot and/or modify code</li>
</ol>

**Materials:** Computer, USB to wall outlet plug, Arduino Nano 33 IoT, and USB to Micro USB cable.

**Challenge:** Turn on or off the onboard LED using your computer while the board is connected to the internet and disconnected from your computer (physically). To provide power to your board so that it can communicate, you can connect the board to another computer or a USB->Wall outlet adapter (try and make sure it's 5v).

**Hints:**

<ol type="i">
  <li>Your board will need to be connected to your computer for ID and to download programs to it. While testing code it can be disconnected</li>
  <li>Follow <a href="https://docs.arduino.cc/cloud/iot-cloud/tutorials/iot-cloud-getting-started">Arduino's guide on downloading and setting up the Arduino IoT Cloud</a></li>
        <ol type="a">
          <li>We will need to create an Arduino IoT Cloud account.</li>
        </ol>
  <li>After you're board has been recognized and you can program to it, run 'blink' first to test.</li>
  <li>We will need to create variables in the 'Things' tab, then we will need to create button elements in the 'Dashboards' tab that we will need to 'link' to our variables. The dashboard items, with links to variables, will be what we'll use to control our board. </li>
  <li>At this point, it may be helpful to look up a guide specific to the IoT Cloud, whether from Arduino or an independent hobbyist, video-format or written.
</ol>

<br>

### 4. Answers & Hints
  
<b>1.ii.a.</b> Once our Nano 33 IoT is plugged in to your computer, we need to make sure it is being recognized by our computer. We should see this:
<p align="center"> 
  <img width="750" height="400" src="https://user-images.githubusercontent.com/52707386/125666437-9d14ade4-3783-428e-a3b9-ad05621e4ea5.png"> 
  <br>
  Succesfull recognition of the Nano 33 IoT by the Arduino IDE
   </br><br>
</p>
To have our board pop up in the port section as recognized we need to make sure we <b>A)</b> downloaded the necessary drivers, <b>B)</b> have a data transfer capable USB to micro USB cable, and potentially <b>C)</b> manually reset the board <b>while</b> we try to upload code to it.
<br>
<ol type="A">
  <li>Downloaded the necessary drivers</li>
    <ul>
      <li>Navigate to the boards manager in the IDE</li>
      <p align="center"> 
        <img width="900" height="400" src="https://user-images.githubusercontent.com/52707386/125667909-69dd16b9-6552-4a1a-b9c8-eb95724de2a3.png"> 
        <br>
         Boards manager in Arduino IDE
        </br><br>
      </p>
      <li>Type <b>Nano 33 IoT</b> in the search bar</li>
      <p align="center"> 
        <img width="900" height="350" src="https://user-images.githubusercontent.com/52707386/125668776-9694c9fc-4eed-4939-8844-a7128639f322.png"> 
        <br>
         Driver for Nano 33 IoT with board name underlined
        </br><br>
      </p>
      <li>Either install the driver by clicking on the install button on the bottom right (does not appear in the image), or make sure the driver says 'INSTALLED.'</li>
      <li> Check your ports again to see if the board appears. Try closing all Arduino files and restarting the IDE. If your board appears, you are done! skip the next two steps.</li>
    </ul>
    <br>
  <li>Data transfer capable USB to micro USB cable</li>
    <ul>
      <li>If the board still does not appear in the port section, try using a different USB to micro USB cable. Android phone charging cables usually work, the key thing is that they allow for data transfer. Alternatively you can look for these keywords:</li>
        <p align="center"> 
          <img width="700" height="300" src="https://user-images.githubusercontent.com/52707386/125670402-fb32cf4e-1908-496e-8e50-452bb83eccc4.png"> 
          <br>
          Data transfer capable USB to micro USB cable. I use these for techfest, Amazon code (ASIN) = B01N9P7AL5.
          </br><br><br>
          <img width="700" height="400" src="https://user-images.githubusercontent.com/52707386/125671091-a00b3813-7f20-4c30-8763-acf174304734.png"> 
          <br>
          Data transfer capable USB to micro USB cable. From the Arduino Store.
          </br><br>
        </p>
        <li> Check your ports again with the new cable to see if the board appears. Try closing all Arduino files and restarting the IDE. If your board appears, you are done! skip the next step.</li>
    </ul>
    <br>
  <li>If the last two steps didn's work, try manually resetting the board while you upload code to it.<br>
    Here is a 2min video I put together to try and resolve this issue. Even though what was tried in Part 1 of the videos didn't work for me, it might work for you. Let me know if none of the solutions work.<br>
    Part 1: https://www.youtube.com/watch?v=nL36fS3mPNo<br>
    Part 2: https://www.youtube.com/watch?v=udmAf8_fNbw<br>
  </li>
</ol>

<b>1.iii.</b> Run blink to test for successful communication
      <p align="center"> 
        <img width="650" height="350" src="https://user-images.githubusercontent.com/52707386/125680039-f99c5d26-feec-45f8-a047-0c768139b649.png"> 
        <br>
         Path to 'Blink' on the Arduino IDE
        </br><br>
      </p>
      
 2.. Alternate guide to Bluetooth, fast setup and testing
 <ol type="i">
  <li>Navigate to the library manager on the IDE</li>
        <p align="center"> 
          <img width="600" height="250" src="https://user-images.githubusercontent.com/52707386/125680651-a50ffeed-1f15-423a-9166-22d4cde8ced3.png"> 
          <br>
          Path to 'Library Manager' on the IDE
          </br><br>
        </p>
   <li>Type 'ArduinoBLE' in the search bar</li>
        <p align="center"> 
          <img width="900" height="500" src="https://user-images.githubusercontent.com/52707386/125681393-2aab8e2e-d7bb-40dd-982f-8d53bf1180ce.png"> 
          <br>
          Library manager menu with the target library
          </br><br>
        </p>
   <li>Install the 'ArduinoBLE' libary and restart your Arduino IDE.</li>
   <li>Navigate to the 'LED' example from the library we just downloaded</li>
        <p align="center"> 
          <img width="900" height="500" src="https://user-images.githubusercontent.com/52707386/125681978-0c6f7e59-e867-4bab-a607-5ebd298c38f1.png"> 
          <br>
          Path to 'LED'<br>
          <b>Make sure the Nano 33 IoT is selected in the 'Tools > Board' tab. Otherwise, the library will appear in the 'INCOMPATIBLE' menu within the examples.</b>
          </br><br>
        </p>
    <li>Download the LightBlue app from the app store.</li>
        <p align="center"> 
          <img width="700" height="200" src="https://user-images.githubusercontent.com/52707386/125682662-915b6241-3a36-455c-82a2-2722a68cdd2f.png"> 
          <br>
          LightBlue app on the google play store
          </br><br><br>
          <img width="700" height="200" src="https://user-images.githubusercontent.com/52707386/125682846-782785e5-b0f9-4c8b-baed-d0385cb4cd96.png"> 
          <br>
          LightBlue app on the apple store
          </br><br>
        </p>
    <li>Upload the 'LED' sketch on your IDE and open the serial monitor.</li>
         <p align="center"> 
          <img width="900" height="160" src="https://user-images.githubusercontent.com/52707386/125683203-6c2a3b54-e86e-4777-875b-f9bc75ebcb9b.png"> 
          <br>
          Printout that means Bluetooth is working successfuly on the Nano 33 IoT
          </br><br>
        </p>
    <li>Open the LightBlue app and scan for devices.</li>
    <li>Select 'LED' in the available devices. A message will appear in the serial monitor once we've connected succesfully (Connected to central: xxxxxx).</li>
        <p align="center"> 
          <img width="300" height="550" src="https://user-images.githubusercontent.com/52707386/125685331-b6e3aca7-4065-4670-9338-59cafeba3bd7.jpg"> 
          <br>
          LightBlue bluetooth scan menu
          </br><br>
        </p>
    <li>Scroll down to the bottom of the 'LED' device menu.</li>
    <li>Select the section that says 'Readable, Writeable.'</li>
        <p align="center"> 
          <img width="300" height="550" src="https://user-images.githubusercontent.com/52707386/125685474-b2c3771a-212e-44c4-bed3-5f6a927c5616.jpg"> 
          <br>
          Write/Read control section starred
          </br><br><br>
          <img width="1000" height="500" src="https://user-images.githubusercontent.com/52707386/125686112-19458b59-fe04-4f60-94ef-fae48de322e0.png"> 
          <br>
          Alternate app navigation images, from <a href="https://docs.arduino.cc/tutorials/nano-33-iot/Bluetooth#:~:text=Once%20we%20have%20the%20application%20open%2C%20follow%20the%20image%20below%20for%20instructions%3A">Arduino's Nano 33 IoT RGB guide</a> We connect to the 'LED' device instad of the 'Nano 33 IoT' shown in the images.
          </br><br>
        </p>
    <li>Scroll down to 'WRITTEN VALUES,' enter any number besides 0 and press 'WRITE.'<br>
If the LED turned ON on your board, congratulations!! You've succesfully controlled your board using Bluetooth. Write 0 to the board to turn the LED off. You can also disconnect the board from your computer and connect it to another device or outlet that supplies power to a USB and test again. See how far away you can control it from.</li>
<br>
You have now succefully output information to your board using Bluetooth. Having done this, you can output power to anything connected to your board, whether it's more LEDs or a motor. Try controlling the RGB light with Bluetooth! 
 </ol>


<p align="right">Next | <b><a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_7">gathering_7</a></b>
<br/>
Back | <b><a href="https://github.com/practicaltech/TechFest/tree/master/2021/gathering_5">gathering_5</a></p>
</b><p align="center"><sup>2019-2021 Tech Fest | </sup><a href="https://github.com/practicaltech/TechFest/tree/master/2021#tech-fest-2021-zoomship-round-2"><sup>Table of Contents</sup></a></p>
