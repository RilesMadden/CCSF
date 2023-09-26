"""
Week 5 Assignment -
Write a program that calculates and displays how many times more people each Los Angeles County Supervisor represents than each San Francisco Supervisor. Make sure to cite the sources of the figures you use.
"""
# We'll need to first determine the ratio of population-to-representative for each county, and then compare them to each other.

# Population and representative information
la_population = 9721000 # per https://www.census.gov/quickfacts/fact/table/losangelescountycalifornia,CA/PST045222
sf_population = 808000 # per https://www.census.gov/quickfacts/fact/table/sanfranciscocountycalifornia/PST045222
la_reps = 5 # per https://bos.lacounty.gov/executive-office/about-us/board-of-supervisors
sf_reps = 11 # per https://sfbos.org/about-board

# Calculate ratio of population-to-represenative. I change the type to int to avoid fractions of people.
la_pop_to_rep_ratio = int(round(la_population / la_reps, 0))
sf_pop_to_rep_ratio = int(round(sf_population / sf_reps, 0))

# Calculate ratio between LA and SF
la_to_sf_ratio = round(la_pop_to_rep_ratio / sf_pop_to_rep_ratio, 2)

# Before I summarize the findings, I'll use the .format() method to make the numbers easier to read for humans
# I used this guide here https://pythonguides.com/python-format-number-with-commas/
la_population_formatted = "{:,}".format(la_population)
la_pop_to_rep_ratio_formatted = "{:,}".format(la_pop_to_rep_ratio)
sf_population_formatted = "{:,}".format(sf_population)
sf_pop_to_rep_ratio_formatted = "{:,}".format(sf_pop_to_rep_ratio)

# Summarize findings
print(f"With a city population of approximately {la_population_formatted} and {la_reps} county representatives, each Los Angeles County Board of Supervisors member represents approximately {la_pop_to_rep_ratio_formatted} constituents.")
print(f"With a city population of approximately {sf_population_formatted} and {sf_reps} county representatives, each San Francisco County Board of Supervisors member represents approximately {sf_pop_to_rep_ratio_formatted} constituents.")
print(f"This means that each member of the Los Angeles County Board of Supervisors represents approximately {la_to_sf_ratio} times more constituents as their San Francisco counterpart.")