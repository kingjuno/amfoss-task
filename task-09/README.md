# Task 09
## Spammer_Spaghetti

I had to do test in 3 different ways until i got this one correct:

1- I used puppeteer in javascript so i launched the browser and the code will gets executed ...(Saw this method for whatsapp and it worked in whatsapp so i decided 
to do the same for telegram but it didn't work(I guess its some link problem...).

2- I learned how to access a box and how to do mouse click using javascript from stackoverflow

  used this for input:
  ```
  document.getElementsByClassName("class_")[0].innerHTML=message;
  ```
  
  and used this to click:
  ```
  $('.im_submit').trigger('mousedown');
  ```
  so placed code in a function and did function call in a loop but instead of spamming ,it send message only once in each run
  
 3- Improvised **step- 2 **
  learn how to use setIntreval in js and placed the statements as a function inside that...
  Finally it worked
  
  
  
  
  Note : This was little hard but intresting...
  
