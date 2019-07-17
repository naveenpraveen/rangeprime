contacts=dict()
n=""
def addContacts():
  na=input("Name: ")
  nu=int(input("Number: "))
  contacts[na]=nu
  print(contacts)

def updateContacts():
  na=input("Name: ")
  nu=int(input("Number: "))
  contacts.update({na:nu})
  print(contacts)
  
def searchContacts():
  na=input("Name: ")
  print(contacts.get(na))

def delContacts():
  na=input("Name: ")
  del contacts[na]
  print(contacts)
  
def dispContacts():
  print(contacts)
  

while n !="exit":
  x=int(input("1-Add \n2-Update \n3-Search\n4-Del\n5-Display\n6-Exit \n"))
  if x==1:
    addContacts()
  if x==2:
    updateContacts()
  if x==3:
    searchContacts()
  if x==4:  
    delContacts()
  if x==5:
    dispContacts()
  if x==6:
    n="exit" 
