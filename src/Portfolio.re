let incantationImage = Utility.loadImage("../assets/incantation.jpg");
let mancalaImage = Utility.loadImage("../assets/mancala.jpg");
let studyBuddyImage = Utility.loadImage("../assets/study-buddy.jpg");
let sliceImage = Utility.loadImage("../assets/slice.png");
let pubsubImage = Utility.loadImage("../assets/pubsub.jpg");
let memoryImage = Utility.loadImage("../assets/memory.jpg");

[@react.component]
let make = () => {
    let incantationCatastrophe: Project.details = {
        imgPath: incantationImage,
        title: "Incantation Catastrophe",
        desc: "A top-down retro style game written in Rust where players have to survive as long as possible against waves of enemies",
        link: "https://github.com/brettkolodny/incantation-catastrophe"
    };
    
    let mancala: Project.details = {
        imgPath: mancalaImage,
        title: "Mancala Ex",
        desc: "Full stack implementation of Mancala built with an Elixir/OTP backend, Phoenix server, and ReasonML/React frontend",
        link: "https://github.com/brettkolodny/mancala_ex"
    }

    let studyBuddy: Project.details = {
        imgPath: studyBuddyImage,
        title: "Study Buddy",
        desc: "Cross-platform spaced repetiton learning app built with Tauri, ReasonReact, and Rust",
        link: "https://github.com/brettkolodny/study-buddy"
    }

    let slice: Project.details = {
        imgPath: sliceImage,
        title: "Slice",
        desc: "An interpreted language written in Rust that aims to bridge the gap between functional and imperative programming",
        link: "https://github.com/brettkolodny/slice"
    }

    let pubSub: Project.details = {
        imgPath: pubsubImage,
        title: "Distrbuted Pub-Sub",
        desc: "Distributed publisher-subscriber system where users can subscribe to topics or specific publishers and be notified when a message is posted",
        link: "https://github.com/brettkolodny/Simple-Publisher-Subscriber-System"
    };

    let memGame: Project.details = {
        imgPath: memoryImage,
        title: "Memory Game",
        desc: "A cross-platform application where users create decks of cards consisting of materials they wish to memorize",
        link: "https://github.com/brettkolodny/Memory-Game"
    };

    <div id="portfolio">
        <h2>{ReasonReact.string("Portfolio")}</h2>
        <div id="projects">
            <Project details=incantationCatastrophe />
            <Project details=mancala />
            <Project details=studyBuddy />
            <Project details=slice />
            <Project details=pubSub />
            <Project details=memGame />
        </div>
    </div>
}