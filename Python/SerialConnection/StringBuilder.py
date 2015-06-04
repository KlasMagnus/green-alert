__author__ = 'Lavve'
# just learning how to construct the string to be sent to the DB
import datetime
temp_string = "2416"
temperature = temp_string[0:2]
humidity = temp_string[2:4]

date = datetime.date()
time = datetime.time()
print('temperature: ' + temperature + ' humidity: ' + humidity + ' date ' + date + ' ' + time + '.')
