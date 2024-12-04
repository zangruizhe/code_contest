open System
open System.Collections.Generic
open System.IO
open Microsoft.FSharp.Collections

type Index = int * int
type ll = int64
type ull = uint64
type pii = int * int
type pll = int64 * int64
type vi = int[]
type vvi = int[][]
type vvvi = int[][][]

type vb = bool[]
type vvb = bool[][]
type vvvb = bool[][][]

let IMIN = Int32.MinValue
let IMAX = Int32.MaxValue
let DMAX = Double.MaxValue
let DMIN = Double.MinValue
let DNAN = Double.NaN
let pi: double = 3.14159265358979323846

let tmp_dict = Dictionary<int, int>()
let tmp_set = HashSet<int>()

#if DEBUG
let RedirectConsole () =
    let if_stream = new FileStream("test.in", FileMode.OpenOrCreate, FileAccess.Read)
    let of_stream = new FileStream("test.out", FileMode.Create, FileAccess.Write)
    let sin = new StreamReader(if_stream)
    let sout = new StreamWriter(of_stream)
    sout.AutoFlush <- true

    Console.SetIn(sin)
    Console.SetOut(sout)
#endif

let ReadInputV2 () : string[] =
    let rec loop acc =
        let line = Console.ReadLine()
        if line <> null then loop (line :: acc) else acc

    loop [] |> List.rev |> List.toArray

let ReadInput () : string[] =
    let input = ResizeArray<string>()
    let mutable line = Console.ReadLine()

    while line <> null do
        input.Add(line)
        line <- Console.ReadLine()

    input |> Seq.toArray


// let Join<'t> (src: 't []) : string =
//     src |> Array.map string |> String.concat " "

let Split2Str (src: string) : string[] = src.Split(" ")
let Split2Int (src: string) : int[] = src |> Split2Str |> Array.map int

module Solve =
    let Solution (lines: string[]) =
        let x = ref 123
        let y = ref "234"
        y.Value <- "345"
        let z: bool[] = Array.empty
        printfn ($"z={z |> Array.forall id}")

        let test_arr = ResizeArray<int>()
        test_arr.Add(123)

        let test_arr2 = test_arr
        test_arr2.Add(345)

        test_arr |> Seq.iter (printfn "%d")

        Array.append [| "from F#" |] lines


[<EntryPoint>]
let main _ =
#if DEBUG
    RedirectConsole()
    let start = DateTime.Now
#endif
    ReadInput() |> Solve.Solution |> Seq.iter (printfn "%s")

#if DEBUG
    printfn $"Execution time: %A{(DateTime.Now - start).TotalSeconds} seconds"
#endif

    0
