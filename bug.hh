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

This code will return 11. However, if we change the order of operations, the result can be different.

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

This code will still return 11. But this is because we are doing the operations in the same order. The order of operations does not matter in this case because the operations are commutative.

However, this is not always the case. Consider the following code:

function foo(x: int): int {
  return x * 2;
}

function bar(x: int): int {
  return foo(x) + 1;
}

function baz(x: int): int {
  return bar(x) - 1;
}

function main(): void {
  echo baz(5);
}

This code will return 10. If we change the order of operations, the result will be different.

function foo(x: int): int {
  return x * 2;
}

function bar(x: int): int {
  return foo(x) + 1;
}

function baz(x: int): int {
  return bar(x) - 1;
}

function main(): void {
  echo baz(5);
}

This code will still return 10. But this is because we are doing the operations in the same order. The order of operations does not matter in this case because the operations are associative.

However, this is not always the case. Consider the following code:

function foo(x: int): int {
  return x / 2;
}

function bar(x: int): int {
  return foo(x) + 1;
}

function baz(x: int): int {
  return bar(x) - 1;
}

function main(): void {
  echo baz(5);
}

This code will return 2. If we change the order of operations, the result will be different.

function foo(x: int): int {
  return x / 2;
}

function bar(x: int): int {
  return foo(x) + 1;
}

function baz(x: int): int {
  return bar(x) - 1;
}

function main(): void {
  echo baz(5);
}

This code will still return 2. But this is because we are doing the operations in the same order. The order of operations does not matter in this case because the operations are distributive. 