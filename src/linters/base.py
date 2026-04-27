from abc import ABC, abstractmethod
from typing import List


class Linter(ABC):
	@abstractmethod
	def run(self, file_path: str):
		pass