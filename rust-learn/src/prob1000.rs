fn main() {
  let a_number: i16;
  let mut a = String::new();
  let b_number: i16;
  let mut b = String::new();


  println!("Number a:");
  std::io::stdin().read_line(&mut a).expect("Failed to read a");
  a_number = a.trim().parse().expect("Type a numer!");
  println!("Number b:");
  std::io::stdin().read_line(&mut b).expect("Failed to read b");
  b_number = b.trim().parse().expect("Type a numer!");
  println!("Result: {}", a_number + b_number);
}
