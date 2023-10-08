const firebaseConfig = {
    apiKey: "AIzaSyCNlsmzytJWpvihUY9CfMqIjXHmsUbw-aM",
    authDomain: "hackuta-7dc40.firebaseapp.com",
    databaseURL: "https://hackuta-7dc40-default-rtdb.firebaseio.com",
    projectId: "hackuta-7dc40",
    storageBucket: "hackuta-7dc40.appspot.com",
    messagingSenderId: "939745993862",
    appId: "1:939745993862:web:54771fb9ee43a63bf9dd07"
  };


// initializing database
  firebase.initializeApp(firebaseConfig);

// dbs reference 
var personalityDB = firebase.database().ref("person");
document.getElementById("personality").addEventListener("submit", submitForm);

function submitForm(e)
{
    e.preventDefault();
    var name = getElementVal('P');
    

    savedata(name);

    
}

//to save to firebase

const savedata = (name) =>
{
    var newdata = personalityDB.push();

    newdata.set({
        name : name,    
    })
};

// function to return values of element
const getElementVal =(id) =>
{
    return document.getElementById(id).value;
}