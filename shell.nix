{
  pkgs ?
    let
      lock = (builtins.fromJSON (builtins.readFile ./flake.lock)).nodes.nixpkgs.locked;
      nixpkgs = fetchTarball {
        url = "https://github.com/nixos/nixpkgs/archive/${lock.rev}.tar.gz";
        sha256 = lock.narHash;
      };
    in
    import nixpkgs { overlays = [ ]; },
  ...
}:
{
  default = pkgs.mkShell {
    NIX_CONFIG = "extra-experimental-features = nix-command flakes";

    packages = with pkgs; [
      keymap-drawer
    ];

    shellHook =
      let
        config = "./layout/config.yaml";
        source = "./config/eyelash_sofle.keymap";
        layout = "./layout/layout.yaml";
        dest = "./layout/layout.svg";
        keymap = "${pkgs.lib.getExe pkgs.keymap-drawer}";
      in
      ''
        printf "\033[1;33m# Welcome to the Sofle CLI environment flake\033[0m\n
        This flake offers a dev shell with \033[36mkeymap-drawer\033[0m\nthe utility in the PATH\n
        As a memo here it is the command to regenerate the svg image from the yaml file present in the layout folder\n
            \033[36mkeymap -c ${config} parse -c 30 -z ${source} -o ${layout} && keymap -c ${config} draw ${layout} -o ${dest} \033[0m\n"

        alias draw="${keymap} -c ${config} parse -c 30 -z ${source} -o ${layout} && ${keymap} -c ${config} draw ${layout} -o ${dest}"
      '';
  };
}
