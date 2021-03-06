/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NSObject;
@class NSObject, NSNumber;

@interface BRCContainerCellularSettings : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSNumber* _isCellularEnabledForDocumentsAndData;
	id<NSObject> _accountDidChangeNotificationObserver;

}
+(id)containerCellularSettings;
+(id)_notifAccountStore;
-(void)_accountDidChange;
-(BOOL)isCellularEnabled;
-(id)init;
-(void)dealloc;
@end

