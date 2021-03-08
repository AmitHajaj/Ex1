
# Ex1
 This is the first part of excersize 1 an C++ course at Ariel university.
 This excersize is test's based programming, so this part would be only TESTS!
 
 ## About
 
 At this excersize we build a snowman from ASCII characters. The snow man will be built by the user's input. The input contain's 8 digit's, when each digit is in range 1-4.
38

[](https://codegolf.stackexchange.com/posts/49671/timeline)

Here is a simple [ASCII art](http://en.wikipedia.org/wiki/ASCII_art) snowman:
 

    _===_
    (.,.)
    ( : )
    ( : )

Let's make him some friends. This will be the general pattern for our ASCII art snowpeople:

     HHHHH
     HHHHH
    X(LNR)Y
    X(TTT)Y
     (BBB)


The leading spaces and the parentheses are always the same for all snowpeople. The different letters represent sections of the pattern that can individually change. Each section has exactly four presets for what ASCII characters can fill it. By mixing and matching these presets for all eight sections, we can make a variety of snowpeople.


# All Presets

(Notice that spaces are put on otherwise empty lines so the section shape is always correct.)

### H is for Hat

1.  Straw Hat
    
    ```
         
    _===_
    ```
    
2.  Mexican Hat
    
    ```
     ___ 
    .....
    
    ```
    
3.  Fez
    
    ```
      _  
     /_\ 
    
    ```
    
4.  [Russian Hat](http://en.wikipedia.org/wiki/Ushanka)
    
    ```
     ___ 
    (_*_)
    
    ```
    

### N is for Nose/Mouth

1.  Normal `,`
    
2.  Dot `.`
    
3.  Line `_`
    
4.  None
    

### L is for Left Eye

1.  Dot `.`
    
2.  Bigger Dot `o`
    
3.  Biggest Dot `O`
    
4.  Closed `-`
    

### R is for Right Eye

(Same list as left eye.)

### X is for Left Arm

1.  Normal Arm
    
    ```
     
    <
    ```
    
2.  Upwards Arm
    
    ```
    \
     
    ```
    
3.  Downwards Arm
    
    ```
     
    /
    ```
    
4.  None
    

### Y is for Right Arm

1.  Normal Arm
    
    ```
     
    >
    ```
    
2.  Upwards Arm
    
    ```
    /
     
    ```
    
3.  Downwards Arm
    
    ```
     
    \
    ```
    
4.  None
    

### T is for Torso

1.  Buttons `:`
    
2.  Vest `] [`
    
3.  Inward Arms `> <`
    
4.  None
    

### B is for Base

1.  Buttons `:`
    
2.  Feet `" "`
    
3.  Flat `___`
    
4.  None
