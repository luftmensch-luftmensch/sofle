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
        file = "./layout/eyelash_sofle";
        append = path: ext: "${toString path}.${ext}";
        svg = append file "svg";
        yaml = append file "yaml";
        png = append file "png";
      in
      ''
          printf "\033[1;33m# Welcome to the Sofle CLI environment flake\033[0m\n
        This flake offers a dev shell with \033[36mkeymap-drawer\033[0m\nthe utility in the PATH\n
        As a memo here it is the command to regenerate the svg image from the yaml file present in the layout folder\n
            \033[36mkeymap draw ${yaml} > ${svg}\033[0m\n"
          alias draw="${pkgs.lib.getExe pkgs.keymap-drawer} draw ${yaml} > ${svg}"
          alias convert-to-png="${pkgs.lib.getExe pkgs.inkscape} --export-type png --export-filename ${png} --export-dpi 300 --export-background=white ${svg}"
      '';
  };
}
