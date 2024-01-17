library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;


Entity gyroscope_data is port( 

	clk : in std_logic;
	Aff_7segs_1			  : out std_logic_vector(7 downto 0);
	Aff_7segs_2			  : out std_logic_vector(7 downto 0);
	Aff_7segs_3			  : out std_logic_vector(7 downto 0);
	reset : in std_logic );

End entity gyroscope_data;


architecture arch of gyroscope_data is

signal BCD_1 : std_logic_vector(3 downto 0);
signal BCD_2 : std_logic_vector(3 downto 0);
signal BCD_3 : std_logic_vector(3 downto 0);

    


end arch;












