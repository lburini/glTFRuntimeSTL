/ /   C o p y r i g h t   2 0 2 3 ,   R o b e r t o   D e   I o r i s .  
  
 # i n c l u d e   " g l T F R u n t i m e S T L A s s e t A c t o r . h "  
 # i n c l u d e   " g l T F R u n t i m e S T L F u n c t i o n L i b r a r y . h "  
  
 / /   S e t s   d e f a u l t   v a l u e s  
 A g l T F R u n t i m e S T L A s s e t A c t o r : : A g l T F R u n t i m e S T L A s s e t A c t o r ( )  
 {  
 	 / /   S e t   t h i s   a c t o r   t o   c a l l   T i c k ( )   e v e r y   f r a m e .     Y o u   c a n   t u r n   t h i s   o f f   t o   i m p r o v e   p e r f o r m a n c e   i f   y o u   d o n ' t   n e e d   i t .  
 	 P r i m a r y A c t o r T i c k . b C a n E v e r T i c k   =   f a l s e ;  
  
 	 A s s e t R o o t   =   C r e a t e D e f a u l t S u b o b j e c t < U S c e n e C o m p o n e n t > ( T E X T ( " A s s e t R o o t " ) ) ;  
 	 R o o t C o m p o n e n t   =   A s s e t R o o t ;  
 }  
  
 / /   C a l l e d   w h e n   t h e   g a m e   s t a r t s   o r   w h e n   s p a w n e d  
 v o i d   A g l T F R u n t i m e S T L A s s e t A c t o r : : B e g i n P l a y ( )  
 {  
 	 S u p e r : : B e g i n P l a y ( ) ;  
  
 	 i f   ( ! A s s e t )  
 	 {  
 	 	 r e t u r n ;  
 	 }  
  
 	 F g l T F R u n t i m e M e s h L O D   L O D ;  
 	 i f   ( U g l T F R u n t i m e S T L F u n c t i o n L i b r a r y : : L o a d S T L A s R u n t i m e L O D ( A s s e t ,   n u l l p t r ,   E g l T F R u n t i m e S T L F i l e M o d e : : A u t o ,   L O D ) )  
 	 {  
 	 	 U S t a t i c M e s h C o m p o n e n t *   S t a t i c M e s h C o m p o n e n t   =   N e w O b j e c t < U S t a t i c M e s h C o m p o n e n t > ( t h i s ) ;  
 	 	 S t a t i c M e s h C o m p o n e n t - > S e t u p A t t a c h m e n t ( G e t R o o t C o m p o n e n t ( ) ) ;  
 	 	 S t a t i c M e s h C o m p o n e n t - > R e g i s t e r C o m p o n e n t ( ) ;  
 	 	 A d d I n s t a n c e C o m p o n e n t ( S t a t i c M e s h C o m p o n e n t ) ;  
  
 	 	 U S t a t i c M e s h *   S t a t i c M e s h   =   A s s e t - > L o a d S t a t i c M e s h F r o m R u n t i m e L O D s ( {   L O D   } ,   S t a t i c M e s h C o n f i g ) ;  
 	 	 i f   ( S t a t i c M e s h )  
 	 	 {  
 	 	 	 S t a t i c M e s h C o m p o n e n t - > S e t S t a t i c M e s h ( S t a t i c M e s h ) ;  
 	 	 }  
  
 	 	 R e c e i v e O n S t a t i c M e s h C o m p o n e n t C r e a t e d ( S t a t i c M e s h C o m p o n e n t ) ;  
 	 }  
  
 }  
  
 / /   C a l l e d   e v e r y   f r a m e  
 v o i d   A g l T F R u n t i m e S T L A s s e t A c t o r : : T i c k ( f l o a t   D e l t a T i m e )  
 {  
 	 S u p e r : : T i c k ( D e l t a T i m e ) ;  
 }  
  
 v o i d   A g l T F R u n t i m e S T L A s s e t A c t o r : : R e c e i v e O n S t a t i c M e s h C o m p o n e n t C r e a t e d _ I m p l e m e n t a t i o n ( U S t a t i c M e s h C o m p o n e n t *   S t a t i c M e s h C o m p o n e n t )  
 {  
 } 