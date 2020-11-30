import json
import os
import requests
username = input("Enter the name:")
request = requests.get('https://api.github.com/users/'+username+'/repos')
json = request.json()
for i in range(0,len(json)):
  	print(json[i]['svn_url'],"")
  	repo_url = json[i]['svn_url']
  	os.system('perceval git --json-line '+repo_url+' >>commits.json')
	
