function foo(x: int): int {
  return x + 1;
}

function bar(x: int): int {
  return foo(x) * 2;
}

function baz(x: int): int {
  return bar(x) - 1;
}

function main(): void {
  echo baz(5);
}

This code will return 11. However, if we change the order of operations, the result can be different.  The order of operations does not always matter in Hack. The solution is to ensure the operations are done in the correct order.