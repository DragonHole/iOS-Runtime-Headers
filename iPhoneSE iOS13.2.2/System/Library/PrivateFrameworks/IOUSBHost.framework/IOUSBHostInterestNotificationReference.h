/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:37 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IOUSBHostObject, NSRecursiveLock;

@interface IOUSBHostInterestNotificationReference : NSObject {

	BOOL _interestNotificationPortDestroyed;
	IOUSBHostObject* _hostObject;
	NSRecursiveLock* _interestNotificationLock;

}

@property (__weak) IOUSBHostObject * hostObject;                            //@synthesize hostObject=_hostObject - In the implementation block
@property (assign) BOOL interestNotificationPortDestroyed;                  //@synthesize interestNotificationPortDestroyed=_interestNotificationPortDestroyed - In the implementation block
@property (retain) NSRecursiveLock * interestNotificationLock;              //@synthesize interestNotificationLock=_interestNotificationLock - In the implementation block
-(void)setInterestNotificationPortDestroyed:(BOOL)arg1 ;
-(void)setHostObject:(IOUSBHostObject *)arg1 ;
-(void)setInterestNotificationLock:(NSRecursiveLock *)arg1 ;
-(NSRecursiveLock *)interestNotificationLock;
-(id)initWithHostObject:(id)arg1 ;
-(IOUSBHostObject *)hostObject;
-(BOOL)interestNotificationPortDestroyed;
@end
