const api_key = "dec91140770ce2fb80f7baa407ea3fab";

const weather_data = document.getElementById("weather-data");
const city_input = document.getElementById("city-input");
const formEL = document.querySelector("form")


formEL.addEventListener("submit",(event) =>{
    event.preventDefault()
    const cityvaule = city_input.value;
   getWeatherData(cityvaule);
})

function capitalizeFirstLetter(str) {
    return str.charAt(0).toUpperCase() + str.slice(1);
}

async function getWeatherData(cityvaule){
    try {
        const response = await fetch(`https://api.openweathermap.org/data/2.5/weather?q=${cityvaule}&appid=${api_key}&units=metric`)
        
        if(!response.ok){
            throw new Error("NetWork respond was not working");
        }
        
        const data = await response.json()

        const temperature = Math.round(data.main.temp)

        const  description = data.weather[0].description

        const icon = data.weather[0].icon

        const detail = [
            `Feels like: ${Math.round(data.main.feels_like)}°C`,
            `Humidity: ${data.main.humidity}%`,
            `Wind speed: ${data.wind.speed}m/s`,
        ]

    weather_data.querySelector(".icon").innerHTML = ` <img src="http://openweathermap.org/img/wn/${icon}.png" alt="Weather Icon">
    `;

    weather_data.querySelector(".tempature").textContent = `${temperature}°C`

    weather_data.querySelector(".description").textContent = `${capitalizeFirstLetter(description)}`

    weather_data.querySelector(".details").innerHTML = detail.map((detail) => ` <div>${detail}</div>` ).join("");

    } catch (error) {
        weather_data.querySelector(".icon").innerHTML = ` <img src="https://ih0.redbubble.net/image.218566488.2648/flat,800x800,070,f.jpg" alt="Weather Icon">
        `;
    
        weather_data.querySelector(".tempature").textContent = ``
    
        weather_data.querySelector(".description").textContent = `Cannot reconigze the City, Please try Again!!!`
    
        weather_data.querySelector(".details").innerHTML = ``;
    }
}