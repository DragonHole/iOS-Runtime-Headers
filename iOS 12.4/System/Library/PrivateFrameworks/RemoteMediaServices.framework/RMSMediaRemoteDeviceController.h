/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface RMSMediaRemoteDeviceController : NSObject {

	NSMapTable* _devices;

}
+(id)sharedController;
-(void)addDevice:(void*)arg1 ;
-(void)removeDevice:(void*)arg1 ;
-(void)discoverDeviceWithUniqueIdentifier:(id)arg1 timeout:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_keyWithDevice:(void*)arg1 ;
-(void*)deviceForUniqueIdentifier:(id)arg1 ;
-(id)init;
@end

