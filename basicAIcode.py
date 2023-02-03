print("Hello, I am an AI. What's your name?")
name = input()

print("Nice to meet you, " + name + "! How are you feeling today?")
feeling = input()

if feeling == "happy":
  print("That's great to hear! What would you like to do today?")
elif feeling == "sad":
  print("Oh no, I'm sorry to hear that. Would you like to talk about it?")
else:
  print("Interesting, how can I help you today?")

activity = input()
print("Okay, " + name + ". Let's " + activity + " together!")