const FetchData = async () => {
    const response = await fetch('https://jsonplaceholder.typicode.com/posts');
    const data = await response.json();
    return data;
}
const fetchData = async (animalName) => {
    const data = await fetch(`example.com`);
    const name = data.person?.name
    
}

