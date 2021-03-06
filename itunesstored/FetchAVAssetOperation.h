/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "DownloadAssetOperation.h"

@class AVPlayerItem;

__attribute__((visibility("hidden")))
@interface FetchAVAssetOperation : DownloadAssetOperation {
	BOOL _isPrepared;
	AVPlayerItem* _playerItem;
}
-(void)_stopWithError:(id)error;
-(BOOL)_shouldRetryForError:(id)error;
-(BOOL)_shouldResetFileForError:(id)error;
-(void)_setPrepared:(BOOL)prepared;
-(void)_prepareItemWithPlayer:(id)player;
-(void)_handlePrepareCompleteForAttemptNumber:(id)attemptNumber;
-(id)_copyCookiesForURL:(id)url download:(id)download;
-(void)_snapshotProgress:(id)progress;
-(void)_downloadFailedNotification:(id)notification;
-(void)_downloadCompleteNotification:(id)notification;
-(void)run;
-(void)dealloc;
@end

