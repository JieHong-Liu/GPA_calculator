function CalculateGPA() {
    const score=[];
    const LevelScore =[4.3,4.0,3.7,3.3,3.0,2.7,2.3,2.0,1.7,1.0,0];
    let totalScore = 0;
    let totalCredits=0;
    alert("totalScore: "+totalScore);
    for(let i = 0; i < 11; i++)
    {
        let x = document.getElementsByClassName("input-score")[i].value;
        score.push(x);
    }

    for(let i = 0; i < score.length; i++)
    {
        // totalScore = Number(totalScore) + Number((Number(score[i])*Number(LevelScore[i])));       
        totalCredits = totalCredits + Number(score[i]);
    }
    alert("total Credits = " + totalCredits);
    document.getElementById("Total Credits").innerHTML=('Total credits: '+ totalCredits);
    alert(totalCredits);
    // document.getElementById("Total Scores").innerHTML=('Total Score: '+totalScore);
    // document.getElementById("GPA Result").innerHTML=('Your GPA IS: '+totalScore/totalCredits);
    // alert(typeof(totalCredits));
}


let submitt = document.getElementById("submit");
if(submitt)// Null的話不會去讀
    submitt.addEventListener('click',function(){CalculateGPA()});
