/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSData;

@interface GSStagingPrefix : NSObject {

	unsigned char _volumeUUID[16];
	int _deviceID;
	NSString* _path;
	NSArray* _pathComponents;
	NSData* _extension;
	long long _sandboxHandle;

}
-(void)_connectionWithDaemonWasLost;
-(void)_invalidate:(BOOL)arg1 ;
-(BOOL)_refreshWithError:(id*)arg1 ;
-(id)initWithDocumentID:(id)arg1 ;
-(id)stagingPathforCreatingAdditionWithError:(id*)arg1 ;
-(BOOL)isStagedPath:(id)arg1 ;
-(void)cleanupStagingPath:(id)arg1 ;
-(void)finalize;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

