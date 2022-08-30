/** @jsx h */
import { h } from "preact";
import { tw } from "@twind";

export default function Home() {
  return (
    <div
      class={tw`flex flex-col justify-center items-center gap-8 h-screen bg-base-50`}
    >
      <h1
        class={tw`text-xl md:text-2xl px-8 md:px-0 text-center font-bold text-base-900`}
      >
        A new site is currently baking, check back later!
      </h1>
      <img
        src="/bread.svg"
        class={tw`h-24`}
        alt="the fresh logo: a sliced lemon dripping with juice"
      />
      <div class={tw`flex flex-row justify-center gap-2`}>
        <a
          class={tw`text-lg text-primary-600 underline`}
          href="https://github.com/brettkolodny/"
          target="_blank"
        >
          github
        </a>
        <a
          class={tw`text-lg text-primary-600 underline`}
          href="https://www.linkedin.com/in/brett-kolodny/"
          target="_blank"
        >
          linkedin
        </a>
        <a
          class={tw`text-lg text-primary-600 underline`}
          href="https://www.instagram.com/breadblends/"
          target="_blank"
        >
          art
        </a>
      </div>
    </div>
  );
}
