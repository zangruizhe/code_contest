import sre_constants
import sys, collections, enum, functools, heapq, itertools, json, operator, unittest, math, heapq
from datetime import datetime, timedelta
from bisect import bisect_left, bisect_right
from collections import deque, defaultdict
from heapq import heappush, heappop, heappushpop
from queue import Queue, LifoQueue, PriorityQueue
from typing import Callable, List, NamedTuple, Optional, Tuple, Dict, Set, DefaultDict, Any
from dataclasses import dataclass, field
from pathlib import Path

from py4f import eweights


# _ = (Callable,
#      Optional,
#      deque[str],
#      Queue[str],
#      LifoQueue[str],
#      PriorityQueue[str],
#      Dict[str, int],
#      Set[str],
#      List[str])

class Orientation(enum.IntEnum):
    VERTICAL = 0
    HORIZONTAL = 1


positive_inf = float('inf')
negative_inf = float('-inf')


class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right


class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next


@dataclass
class Pos:
    qty: int
    cost: int
    pnl: int


@dataclass(order=True)
class PrioritizedItem:
    priority: int
    item: Any = field(compare=False)


# pq = PriorityQueue[PrioritizedItem]()

def set_io(file_name='test'):
    if Path(file_name + ".in").exists() and Path(file_name + ".out").exists():
        sys.stdin = open(f"{file_name}.in", 'r')
        sys.stdout = open(f"{file_name}.out", 'w')


def get_2d_array(r, c, v=0):
    return [[v for _ in range(c)] for _ in range(r)]


def get_3d_array(r, c, z, v=0):
    return [[[v for _ in range(c)] for _ in range(r)] for _ in range(z)]


class Question:
    def solution(self, lines: List[str]):
        test = [1, 2, 3, 4]
        print(f"{test[:3] + test[3 + 1:]}")
        return lines + ["++++python"]


"""
ID: mggwyx1
LANG: PYTHON3
TASK: milk3
"""
file_name = 'test'

if __name__ == '__main__':
    set_io(file_name=file_name)
    input: List[str] = [s.strip('\n') for s in sys.stdin]
    output: list = Question().solution(input)
    if output is not None:
        [print(v) for v in output]
    # unittest.main()
