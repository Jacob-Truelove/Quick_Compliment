const firebaseConfig = {
    apiKey: "AIzaSyCNlsmzytJWpvihUY9CfMqIjXHmsUbw-aM",
    authDomain: "hackuta-7dc40.firebaseapp.com",
    databaseURL: "https://hackuta-7dc40-default-rtdb.firebaseio.com",
    projectId: "hackuta-7dc40",
    storageBucket: "hackuta-7dc40.appspot.com",
    messagingSenderId: "939745993862",
    appId: "1:939745993862:web:12571bd3a020081cf9dd07"
  };


// initializing database
  firebase.initializeApp(firebaseConfig);

// dbs reference 
var TalentDB = firebase.database().ref("Tal");
document.getElementById("talents").addEventListener("submit", submitForm);

function submitForm(e)
{
    e.preventDefault();
    var name = getElementVal('T');

    savedata(name);

}

//to save to firebase

const savedata = (name) =>
{
    var newdata = TalentDB.push();

    newdata.set({
        name : name,
    })
};

// function to return values of element
const getElementVal =(id) =>
{
    return document.getElementById(id).value;
}