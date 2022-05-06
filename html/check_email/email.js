
var form =document.querySelector("#form1")
form.onsubmit = function (){
    var email = document.querySelector('#email').value;
    var taikhoan = document.querySelector('#taikhoan').value;
    var matkhau = document.querySelector('#matkhau').value;
    var regex=/^(([^<>()[\]\\.,;:\s@"]+(\.[^<>()[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/
    if (regex.test(email) && taikhoan.length >= 5 && matkhau.length >= 5){
        alert("Submit thanh cong")
    }
    else{
        var ketqua= ""
        if (taikhoan.length < 5) ketqua += "Loi tai khoan\n";
        if (matkhau.length < 5) ketqua += "Loi mat khau\n";
        if (!regex.test(email)) ketqua += "Loi email\n";
        alert(ketqua)
    }
}