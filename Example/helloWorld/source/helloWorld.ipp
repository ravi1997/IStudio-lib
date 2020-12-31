inmport IStudioLibrary;

function main(CLI.CLIArguments args) throws CLIExceptions {
    bool flag = true;
    CLI.CLI myCli = CLI.Option{"Flag",flag}
                    ["-f"]["--f"]("This statement will be shown in case of help")
                    | CLI.Option{"Compulsion",[](){
                        cout<<"Found this here"<<endl;
                    },CLI.CLI.Compulsory}
                    ["-c"]["--c"];
    CLI.CLIResult result = args|myCli;
    if(!result){
        throw result;
    }
}