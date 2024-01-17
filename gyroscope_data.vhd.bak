library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;


Entity seven_seg_counter is port( 

	clk : in std_logic;
	Aff_7segs_1			  : out std_logic_vector(7 downto 0);
	Aff_7segs_2			  : out std_logic_vector(7 downto 0);
	Aff_7segs_3			  : out std_logic_vector(7 downto 0);
	reset : in std_logic );

End entity seven_seg_counter;


architecture arch of seven_seg_counter is

signal BCD_1 : std_logic_vector(3 downto 0);
signal BCD_2 : std_logic_vector(3 downto 0);
signal BCD_3 : std_logic_vector(3 downto 0);

    component seven_seg_counter_sys is
        port (
            clk_clk            : in  std_logic                    := 'X'; -- clk
            pio_digit_1_export : out std_logic_vector(3 downto 0);        -- export
            reset_reset_n      : in  std_logic                    := 'X'; -- reset_n
            pio_digit_2_export : out std_logic_vector(3 downto 0);        -- export
            pio_digit_3_export : out std_logic_vector(3 downto 0)         -- export
        );
    end component seven_seg_counter_sys;
	 
	 component BCD_2_7SEG is
		port(
            inp : in std_logic_vector(3 downto 0) := (others => 'X'); -- input 
            outp : out std_logic_vector(7 downto 0) -- output 
        );
	 end component BCD_2_7SEG;
	 
	 begin

    u0 : component seven_seg_counter_sys
        port map (
            clk_clk            => clk,            --         clk.clk
            pio_digit_1_export => BCD_1, -- pio_digit_1.export
            reset_reset_n      => reset,      --       reset.reset_n
            pio_digit_2_export => BCD_2, -- pio_digit_2.export
            pio_digit_3_export => BCD_3  -- pio_digit_3.export
        );

		 
	 u1 : component BCD_2_7SEG
			port map (
				 inp => BCD_1,
				 outp => Aff_7segs_1
			);
			
	u2 : component BCD_2_7SEG
			port map (
				 inp => BCD_2,
				 outp => Aff_7segs_2
			);

			
	u3 : component BCD_2_7SEG
			port map (
				 inp => BCD_3,
				 outp => Aff_7segs_3
			);



end arch;












