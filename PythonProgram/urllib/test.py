

from urllib import request


url = "https://www.jju.edu.cn"
req = request.Request(url)
response = request.urlopen(req)
print("req = ", req)
print("response = ", response)
print("status code = ", response.getcode())
print("url = ", response.geturl())
print("info = ", response.info())
