# Task 06
## Geddit 

I followed two approach to solve this question:

## Approach 1 : [geddit.go]
I used to different go packages (one was given in the question and the other I found while I was searching).                                          
#### Packages
1- https://github.com/vartanbeno/go-reddit
2- https://github.com/jzelinskie/geddit

2nd package was used because there were some problem for fetching the subreddit that occurs as the first search result.
I used the 1st package for upvoting.

## Approach 2: [geddit_final.go]
I found the first approach was inefficient as it requires two authentication for two packages so i decided to stick with the first package.
Therefor I decided to look into files in github for knowing how certain functions were build.
Then i used time library to find the time difference and upvoted if **7<=days<=14**
