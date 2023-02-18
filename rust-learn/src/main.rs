fn main() {
    // let max_temp: i32 = 18;
    // let min_temp: f64 = -0.6;

    // println!("the Maximum temperature value {}ºC and the minimum value {}ºC", max_temp, min_temp);



    // let mut name = String::new();
    // let mut age = String::new();
    // let age_number: u8;
    // // let mut name2 = String::from("John");
    // // let mut name2 = "Pablo".to_string();

    // // Ask for user name:
    // println!("Please write your name: ");
    // std::io::stdin().read_line(&mut name).expect("Failed to read line");
    // name = name.trim().to_string();
    // //Ask for user age:
    // println!("Please write your age: ");
    // std::io::stdin().read_line(&mut age).expect("Failed to read line");
    // // Convert age to number:
    // age_number = age.trim().parse().expect("Please type a number!");

    // //Show the user name and age:
    // println!("Your name is {} and your age is {}", name, age_number);

    //challenge: user name, countrie how much time he/she has lived in that countrie
    let mut name = String::new();
    let mut countrie = String::new();
    let mut age = String::new();
    let age_number : i8;

    println!("Plase write your name:");
    std::io::stdin().read_line(&mut name).expect("Failed to read line");
    name = name.trim().to_string();
    println!("Please write your age:");
    std::io::stdin().read_line(&mut age).expect("Failed to read line");
    age_number = age.trim().parse().expect("Please type a number!");
    println!("Please write yout countrie:");
    std::io::stdin().read_line(&mut countrie).expect("Faeled to read linea");
    countrie = countrie.trim().to_string();

    println!("Hi {} form {} with {} years old.",name,countrie,age_number);

}
