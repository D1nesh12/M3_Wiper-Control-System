# Project Report of Wiper Control System :-


# Abstract :- 

A Wiper Speed Control System Controls the operational speed of the wiper in accordance with the rain condition.
This Wiper Speed Control System is used in all types of vehicles the main purpose is to clean the rain air drops present in front screen of the vehicles. 
It is very difficult to drive the vehicles in rain condition so in this case we will use wipers to clean the front screen of vehicles which is mirror so that we can drive the vehicles even in rain also


When there is rain in weather conditions while driving vehicles, the visibility is compromised at the driver end in the car or vehicles we say which poses a great threat to life.as so In this situation, the wiper control system which we are going to develop comes to the rescue. But the traditional wiper speed control system requires constant driver attention in adjusting the wiper speed based on the severity of rain in a weather conditions. Because this manual we are making adjustment of the wiper speed distracts the driver's attention, it can lead to accidents which is in dangerous zone  thus making the existence of this whole system futile.

So In this project, the mechanism of wiper speed control system is explored and hence initial press of a button is going the start of Engine.that is the ON Operation of the Engine. Then the other three remaining presses of the button are going to be the different levels of speed control offered by the designed of the controller ranging from low, medium and high.that's the speed control system what we can say . The Last press of the button is assumed to be the stop of Engine means OFF the Engine by pressing last button. The movement of the wiper arm control system from left to right and back again by the blinking of the blue, green and orange LEDs in the desired pattern.

# Intro :- 

This Wiper Speed Control System is used in all types of vehicles the main purpose is to clean the rain air drops present in front screen of the vehicles. 
It is very difficult to drive the vehicles in rain condition so in this case we will use wipers to clean the front screen of vehicles which is mirror so that we can drive the vehicles even in rain also

# Features :-
1.It shall lock the car when button is pressed ONCE.

2.It shall open the car when button is pressed TWICE.

3.It shall wiper on and it moves clock wise direction when button is pressed THREE times.

4.It shall wiper off and it moves anti clock wise direction when button is pressed FOUR times.

5.It shall wiper complete one cycle when the button is pressed FIVE times.

# Aim :-
To prevent the Accidents During rain condition

# Research :-
Application is researched from various resources like from Google, YouTube and from Research Papers and then developed one application model called as wiper control system

# End Goal :-
1.Avoid Accidents and Provide safety environment

2.Clean Vision in weather conditions

# 4'W1'H :-

# Who :-
 All who wants safety and clean vision in weather conditions.

# What :-
 It's a application that is Wiper Speed Control System for every vehicles

# Why :-
 Curious about intrest in embedded system applications.

# When :-
 If anyone wants to drive the car in rain condition with safety.

# How :-
 LED shows the position of wiper and it will return to the original condition after cleaning the windsheet of motor vehicles.
 
# Requirements:--
### High level requirements:-

|  ID  |             Discription           |    status   |
|------|-----------------------------------|-------------|
|HR_01 | It Shall LOCK the car  | Implemented |
|HR_02 | It Shall UNLOCK the car                       | Implemented |
|HR_03 | It Shall Activate Wiper System         | Implemented |
|HR_04 | It Shall Deactivate Wiper System.      | Implemented |

### Low level requirements:-

|  ID  |             Discription                          |    status   |
|------|--------------------------------------------------|-------------|
|LR_01 | If the User pressed the Button ONCE - ON LED RED                             | Implemented |
|LR_02 | If the User pressed the Button TWICE - OFF LED RED                                 | Implemented |
|LR_03 | If the User pressed the Button THREE times - ON BLUE,GREEN,ORANGE                                  | Implemented|
|LR_04 | If the User pressed the Button FOUR times - ON ORANGE,GREEN,BLUE.                  | Implemented |

# SWOT Analysis :-

## Strength :-
1.Clear Visibility

2.Silent Operation

3.Wiper not stop in middle of Window


## Weakness :-
1.Cost Increase

2.Replacement

3.Rubber Blades need


## Opportunities :-
1.Safety and Healthy well being opportunities

2.Emoloyment Opportunities

3.Increase as wiper system is necessary to install.


## Threats :-
1.Snow removal hard blades technology is available

2.Replaced by Advance Technology

# Block Diagram of the System :-

![Block Diagram](https://user-images.githubusercontent.com/101640681/167856594-7f47034e-d626-46e8-bcfd-9125e9fa6e1f.jpg)

# High Level Flow Chart System :-
![High level Flow](https://user-images.githubusercontent.com/101640681/167856766-fd4d22b5-e7a3-43f7-84b4-d8c706b230da.jpg)

# Low Level Flow Chart System :-
![Low level Flow](https://user-images.githubusercontent.com/101640681/167856955-3b087150-a413-4c15-a96c-beeb7d7db0ce.jpg)

# Test Cases :- 

## High Level Test Cases :-

|**Test ID**|**Description**|**Exp i/P**|**Exp O/P**|**Actual o/p**|**Pass/Fail**|
| :- | :-: | :-: | :-: | :-: | :-: |
|HL_01|At The Time of ON Engine|Pressed BUTTON ONCE|ON Engine|ON Engine|PASS|
|HL_02|At The Time of OFF Engine|Pressed BUTTON TWICE|OFF Engine|OFF Engine|PASS|
|HL_03|At The Time of ON Wiper|Pressed BUTTON THREE Times|ON Wiper|ON Wiper In ClockWise Direction|PASS|
|HL_04|At The Time of OFF Wiper|Pressed BUTTON FOUR Times|OFF Wiper|OFF Wiper In Anti ClockWise Direction|PASS|

## Low Level Test Cases :-

|**Test ID**|**Description**|**Exp i/P**|**Exp O/P**|**Actual o/p**|**Pass/Fail**|
| :- | :-: | :-: | :-: | :-: | :-: |
|LL_01|ON Engine Check Condition|Pressed BUTTON ONCE|ON All LED|ON All LED As Per ENCRYPTION|PASS|
|LL_02|OFF Engine Check Condition|Pressed BUTTON TWICE|OFF All LED|OFF All LED As Per ENCRYPTION|PASS|
|LL_03|ON Wiper Check Condition|Pressed BUTTON THREE Times|ON LED Once ClockWise|ON LED Once In ClockWise Direction As Per ENCRYPTION|PASS|
|LL_04|OFF Wiper Check Condition|Pressed BUTTON FOUR Times|ON LED Once Anti ClockWise|ON LED Once In Anti ClockWise Direction As Per ENCRYPTION|PASS|

# Working Video :-
https://user-images.githubusercontent.com/101640681/168464112-d7798462-889f-4d1d-9c72-362039dacf61.mp4

# Output Captured

## 1.ON Stage of Engine :-
![Engine ON](https://user-images.githubusercontent.com/101640681/168442175-e04bf4fc-25eb-4774-ad21-e7e06bdd9015.jpg)


## 2.High Speed of Wiper :-
![Wiper Speed Low](https://user-images.githubusercontent.com/101640681/168442192-74f422f6-157c-47c6-8e1e-ce7f63a67aff.jpg)


## 3.Medium Speed of Wiper :-
![Wiper Speed Medium](https://user-images.githubusercontent.com/101640681/168442210-a5b6160a-72bf-4b01-aa78-201153334cfa.jpg)


## 4.Low Speed of Wiper :-
![Wiper Speed High](https://user-images.githubusercontent.com/101640681/168442218-b102c132-fdce-4d49-afc9-bec3d7155d46.jpg)


## 5.OFF Stage of Engine :-
![Engine OFF](https://user-images.githubusercontent.com/101640681/168442238-4cb6405e-3f14-4899-96be-30653ab5cb8d.jpg)
