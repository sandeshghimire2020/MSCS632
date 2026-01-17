// Rust automatically frees memory when variables go out of scope.
fn main() {
    let v = vec![1, 2, 3]; // memory allocation
    println!("{:?}", v);

    // v is dropped and memory is freed
}