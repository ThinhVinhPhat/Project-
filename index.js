const access_key = "MsAu1NveYIYITHLSHMaiihFctxrq7CupqNQ7BKp8i3c";

const formEL = document.querySelector("form");
const sreachInput = document.getElementById("search-input")
const searchresultEL = document.querySelector(".search-results")
const showmorebutton = document.getElementById("show-more-button");
const errors = document.getElementById("error");
let inputData ="";
let page = 0;

async function SearchImages(){
    try {
        inputData = sreachInput.value;
    const url = `https://api.unsplash.com/search/photos?page=${page}&query=${inputData}&client_id=${access_key}`

    
    const respond = await fetch(url);

    
    const data = await respond.json();
    
    if(page == 1){
        searchresultEL.innerHTML = "";
    }
    
    // ket qua tim dc cua API
    const result = data.results;
    
    if(result.length ==0){
        throw new Error("NetWork respond was not working");
    }

    else{
    //loc tung image co tron result
    result.map((result)=>{

        // tao bien de luu url cua anh , link cua anh
        const imageWrapper = document.createElement("div");
        imageWrapper.classList.add("search-result");
        const image = document.createElement("img");
        
        // gan url va alt cho image trong result
        image.src = result.urls.small
        image.alt = result.alt_description;


        // gan link image 
        const imageLink = document.createElement("a");
        imageLink.href = result.links.html
        imageLink.target = "_blank";
        imageLink.textContent = result.alt_description

        // gan lai vao searchresult de tao lai ben html
        imageWrapper.appendChild(image)
        imageWrapper.appendChild(imageLink)
        searchresultEL.appendChild(imageWrapper);
    
    })

    page++;

    if(page > 1 && page <1000){
        showmorebutton.style.display = "block";
    }

    errors.innerHTML = "";
    }

    // khi API khong tim duoc loi
    } catch (error) {
        const error_image = document.createElement("img");
        const imageWrapper = document.createElement("div");

        error_image.src = "https://ih0.redbubble.net/image.218566488.2648/flat,800x800,070,f.jpg";
        error_image.alt = "Error";


        imageWrapper.appendChild(error_image);
        searchresultEL.appendChild(imageWrapper);

        errors.innerHTML =  `Cannot Find the Image!!`;


    }
}

formEL.addEventListener("submit",(event) =>{
    event.preventDefault();
    page = 1;
    SearchImages();
})

// khi nguoi dung an show more
showmorebutton.addEventListener("click",() =>{
    SearchImages();
})