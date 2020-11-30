# Task 08
## Sir Perceval’s quest

This was one intersting task... <br>                                                                              
I thank vchrombie and DE_BLANK for the helps provided.<br>                                                                         

Yeah so got know that api only returns 30 repo at a time.<br>
so what i did was used the 
```
?page='+str(page)
```
in a loop<br>
so i could get utmost 30 repo/page and what i did to stop the loop was if the len(repo) becomes zero it could be stopped.<br>
During the loop i collected the repo name and appended it to a list and later after exiting the loop i used an another loop to get the commits using perceval.
