import random
#C:\Users\Peter\OneDrive\Desktop\QC Prjt\src

def get_complement(category):
  """Returns a complement based on the given category.

  Args:
    category: The category of the complement, e.g. "looks", "talents", "personality".

  Returns:
    A string containing the complement.
  """

  if category == "looks":
    return random.choice([
      "You look amazing today!",
      "You have such beautiful eyes!",
      "Your hair looks great!",
      "Your smile is so contagious!",
      "You have such a great sense of style!"
    ])
  elif category == "talents":
    return random.choice([
      "You're so talented!",
      "I love the way you swim!",
      "You're a natural at math!",
      "You're so good at singing, it's inspiring!",
      "I'm so lucky to know someone who's so talented at poetry!"
    ])
  elif category == "personality":
    return random.choice([
      "You're such a kind person!",
      "You're so funny!",
      "You're so intelligent!",
      "You're so creative!",
      "You're so supportive!"
    ])
  else:
    return "I don't know any complements for that category."

def main():
  """The main function."""

  # Get the compliment category from the user.
  category = input("What category of compliment do you want? (looks, talents, personality): ")

  # Get a complement for the given category.
  complement = get_complement(category)

  # Print the complement to the user.
  
  fp = open("complement.txt", "w", 1)

  fp.write(complement)

  fp.close()

if __name__ == "__main__":
  main()
