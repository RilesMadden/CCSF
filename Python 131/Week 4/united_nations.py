"""
Assignment: Write a program to determine what portion of the global population has permanent representation on the United Nations Security Council. Make sure to cite the sources of the figures you use

According to https://www.un.org/securitycouncil/content/current-members, there are 5 countries with permanent membership:
* France, China, Russia, US, and UK

Population info as of Sept 2023 from https://www.worldometers.info/world-population. I rounded to nearest 1000. 
"""

population_of_world = 8062405000

# populations of participating countries
population_of_france = 64786000
population_of_china = 1425557000
population_of_russia = 144331000
population_of_united_states = 340418000
population_of_united_kingdom = 67789000

# total sum of security council countries' population
population_of_security_coucil_countries = population_of_france + population_of_china + population_of_russia + population_of_united_states + population_of_united_kingdom

# calculate percentage of world
percentage_of_world_with_unsc_representation = population_of_security_coucil_countries / population_of_world

# print result
print(f"Approximately {round(100*percentage_of_world_with_unsc_representation,2)}% of the world's population has permanent representation on the United Nations Security Council.")



