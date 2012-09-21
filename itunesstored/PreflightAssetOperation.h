/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DownloadAssetOperation.h"
#import "ISURLOperationDelegate.h"


__attribute__((visibility("hidden")))
@interface PreflightAssetOperation : DownloadAssetOperation <ISURLOperationDelegate> {
}
-(BOOL)_verifyMediaAssetURL:(id)url title:(id)title error:(id*)error;
-(BOOL)_preflightMediaAsset:(id)asset error:(id*)error;
-(void)_loadContentSizeForAsset:(id)asset;
-(BOOL)operation:(id)operation willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;
-(void)run;
@end

