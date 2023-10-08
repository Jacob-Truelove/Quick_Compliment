const firebaseConfig = {
    apiKey: "AIzaSyCNlsmzytJWpvihUY9CfMqIjXHmsUbw-aM",
    authDomain: "hackuta-7dc40.firebaseapp.com",
    databaseURL: "https://hackuta-7dc40-default-rtdb.firebaseio.com",
    projectId: "hackuta-7dc40",
    storageBucket: "hackuta-7dc40.appspot.com",
    messagingSenderId: "939745993862",
    appId: "1:939745993862:web:7a93e76084501bdef9dd07"
  };


// initializing database
  firebase.initializeApp(firebaseConfig);

// dbs reference 
var hackDB = firebase.database().ref("hack");
document.getElementById("form").addEventListener("submit", submitForm);

function submitForm(e)
{
    e.preventDefault();
    var name = getElementVal('name');
    var mail = getElementVal('mail');
    var pass = getElementVal('pass');

    savedata(name, mail, pass);

    location.replace("submit.html")
}

//to save to firebase

const savedata = (name, mail, pass) =>
{
    var newdata = hackDB.push();

    newdata.set({
        name : name,
        mail : mail,
        pass : pass,
    })
};

// function to return values of element
const getElementVal =(id) =>
{
    return document.getElementById(id).value;
}