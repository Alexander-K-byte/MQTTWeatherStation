# MQTTWeatherStation
Create a weather station with Arduino/ESP32 clients, mqtt broker and web server api

## REQUIREMENTS:
* The clients (Esp32 or Arduino) constantly measure temperature and humidity in their environment.  They save the measurement data locally, and calculate a running average. The Client should make measurements for the average very often (for example, every 5-10 seconds).
* The clients publishes their average data using MQTT. The server needs to collect / poll this data, and provide a simple web page which shows the collected information.  The web page can be very simple, but it must run on a web server (such as Node or ASP.net)
* Additionally, each client needs to be “paired” with the server. The server must implement a web api which returns the current reading for each client (for example, /clients/1/data.json or similar)
* The server must be deployed either locally in a VM (vmware, virtualbox)) or a container (docker, kubernetes), or in the cloud (you can use some hosting service, like Azure, AWS, Heroku, cloud9…)

#### Base code Temp.c
Temp.c file is the uncompiled version of this project.  It takes direct user input in a do while value != -128 loop.  (printf and scanf statements)
int variable i used for counter
double temp used to store input values
double total used by total += temp
double avg calculated by total / i
output to screen
