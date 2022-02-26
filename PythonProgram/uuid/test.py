import uuid

node = uuid.uuid1()
print("node = ",node)
hex = node.hex
print("hex = ", hex)
print("mac = ", hex[-12:])
