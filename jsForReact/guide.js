export default function DoSomething() {
    console.log("Hello World")
}

export const doSomething = () => {
    console.log("Hello World")
}

const MyComponent = () => {
    return (
        <div>
            <h1>Hello World</h1>
        </div>
    )
}

<button onClick={()=>{console.log("Hi I am a function")}}>
</button>

if (true) {
    console.log("Hello World")
} else {
    console.log("Goodbye World")
}

// let age = 10
// let name = "Jhon"
// if (age > 10) {
//     name="jhon"
// } else {
//     name="jack"
// }
// let name = age > 10 ? "Pedro" : "Jack"

const Component = () => {
    return (
        age>10? <div> Jhon</div> : <div>Jack</div>
    )
}

const person = {
    name: "Tanmoy",
    age: 20,
    address: {
        city: "Kolkata",
        country: "India"
    },
    isMarried: false

}

// const name = person.name
// const age = person.age
// const city = person.address.city
// const country = person.address.country
// const isMarried = person.isMarried

const {name, age, isMarried, }= person
