class UnusedClass:
	def __init__():pass

def main(unused_arg):
	for i in range(2):
		print('Loops 1')
		for j in range(2):
			print('Loops 2')
			for k in range(2):
				print('Loops 4')
				l = 0
				while l < 2:
					print('Loops 5')
					l += 1
	print('Hello, World!')

if __name__ == "__main__":
	main();