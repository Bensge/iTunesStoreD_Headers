/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <iTunesStore/ISOperation.h>


__attribute__((visibility("hidden")))
@interface CancelPreordersOperation : ISOperation {
}
-(id)_newURLOperationWithItemID:(id)itemID accountID:(id)anId;
-(BOOL)_cancelPreorderWithOperation:(id)operation error:(id*)error;
-(id)uniqueKey;
-(void)run;
@end

