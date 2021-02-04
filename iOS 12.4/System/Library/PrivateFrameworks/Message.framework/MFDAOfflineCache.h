/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:17 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFOfflineCache.h>

@class NSString;

@interface MFDAOfflineCache : MFOfflineCache {

	NSString* _lastSelectedFolderID;

}
-(void)deferOperation:(id)arg1 ;
-(void)setLastSelectedMailbox:(id)arg1 ;
-(BOOL)replayOperationsUsingBlock:(/*^block*/id)arg1 ;
-(void)deleteOfflineCacheData;
-(void)dealloc;
@end
