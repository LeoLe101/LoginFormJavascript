// Show alert when the user is logged in
function loginUser() {
    const userName = document.getElementById("username").value;
    const password = document.getElementById("password").value;

    console.log("user", userName);
    console.log("pass", password);

    if (userName && password) {
        alert(`Hi ${userName}, you are logged in successfully!`);
    } else {
       alert(`Invalid Credential entered!`); 
    }
}

// Clear input in form
function refreshForm() {
    document.getElementById("username").value = "";
    document.getElementById("password").value = ""; 
}