# Task 06
## Geddit 

I followed two approach to solve this question:

## Approach 1 : [geddit.go](https://github.com/kingjuno/amfoss-task/blob/main/task-06/geddit.go)
I used to different go packages (one was given in the question and the other I found while I was searching).                                          
#### Packages
1- https://github.com/vartanbeno/go-reddit
2- https://github.com/jzelinskie/geddit

2nd package was used because there were some problem for fetching the subreddit that occurs as the first search result.
I used the 1st package for upvoting.

## Approach 2: [geddit_final.go](https://github.com/kingjuno/amfoss-task/blob/main/task-06/geddit_final.go)
I found the first approach was inefficient as it requires two authentication for two packages so i decided to stick with the first package.                       
Therefor I decided to look into files in github for knowing how certain functions were build.                                                                       
This file helped a lot https://github.com/vartanbeno/go-reddit/blob/master/reddit/subreddit.go.                                                                     
So i was able to extract first search results.
![search result](https://github.com/kingjuno/amfoss-task/blob/main/task-06/Screenshot%20from%202020-10-31%2014-41-50.png) ![extracted result](https://github.com/kingjuno/amfoss-task/blob/main/task-06/Screenshot%20from%202020-10-31%2014-54-29.png)
Then i used time library to find the time difference and upvoted if **7<=days<=14**
